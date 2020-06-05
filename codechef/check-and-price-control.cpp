#include <bits/stdc++.h>
using namespace std;


int lost_revenue()
{
    int n, k;
    cin >> n >> k;
    int vect[n];
    for (int i =0; i< n; i++)
        cin >> vect[i];

    int lost = 0;
    for(int i =0; i< n; i++)
    {
        if(vect[i] > k)
        {
            lost += vect[i]-k;
        }
    }
    return lost;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // number of test cases
    int t;    
    cin >>t;
    
    while(t--)
    {
        cout<<lost_revenue()<<endl;
    }
 
    return 0;
}