//https://www.codechef.com/SEPT20B/problems/CHFNSWAP

#include <bits/stdc++.h>
using namespace std;
typedef long long loi;

loi nC2(loi n)
{
    if((n&1)==0)
    {
        return (n >> 1)*(n-1);
    }
    else
    {
        return n*((n-1) >> 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    loi testCases;
	cin >> testCases;

	while(testCases--)
	{
	    loi N, sum, halfSum, m, pivotSum, niceSwaps=0;
	    cin >> N;

	    sum = (N*(N+1))/2;
        halfSum = sum/2;
        m = floor((sqrt(4*sum+1)-1)/2);

        pivotSum  = 0.5*m*(m+1);

        if(sum & 1)
        {
            niceSwaps = 0;
        }
        else
        {
            niceSwaps = ((pivotSum == halfSum) ? (nC2(m) + nC2(N-m)) : 0) + N-m;
        }

        cout << niceSwaps << endl;
	}
    return 0;
}
