#include<bits/stdc++.h>
#define ll long long int
#define watch(x) cout << (#x) << " is " << (x) << endl  //watch function print variable and value for debugging
#define count_ones __builtin_popcountll                  // count_ones(9) is equal to 2 valid for ll also
#define MOD 1000000007
#define pb push_back
#define fo(i,n) for(ll i=0;i<n;i++)
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, x,tem,tem2;
	cin>>t;
	while(t--)
	{
	   tem = 0;;
		cin >> x;
		if (x % 2 != 0)
		{
			cout << x << endl;
			continue;
		}

		while (x != 0)
		{
			tem = tem << 1;
			tem = tem + (x & 1);
			x = x >> 1;

		}
		cout << tem << endl;
	}

return 0;
}