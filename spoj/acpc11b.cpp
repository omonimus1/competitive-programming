#include<bits/stdc++.h>

#define ll long long int
#define watch(x) cout << (#x) << " is " << (x) << endl  //watch function print variable and value for debugging
#define count_ones __builtin_popcountll                  // count_ones(9) is equal to 2 valid for ll also
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define fo(i,n) for(ll i=0;i<n;i++)
using namespace std;
 
int main() {
 #ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
 #endif
       fast_io
 
       ll t;
       cin>>t;
       while(t--)
       {
       	 ll n,m,diff=0,mini=INT_MAX;
       	 cin>>n;
       	 ll a[n];
       	 fo(i,n)
       	  cin>>a[i];
       	  cin>>m;
       	 ll b[m];
       	 fo(i,m)
       	  cin>>b[i];

       	sort(a,a+n);
       	sort(b,b+m);

       	ll c=0,d=0;
       	ll res=INT_MAX;

       	while(c<n && d<m)
       	{
       		if(abs(a[c]-b[d])<res)
       			res=abs(a[c]-b[d]);

       		if(a[c]<b[d])
       			c++;
       		else
       			d++;
       	}
       	cout<<res<<"\n";

       }
   return 0;
 }