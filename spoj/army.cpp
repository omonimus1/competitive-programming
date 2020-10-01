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
       	ll n,m,maxa,maxb,ans;
       	cin>>n>>m;
       	vector<ll> a(n);
       	vector<ll> b(m);

       	fo(i,n)
       	  cin>>a[i];
       	fo(i,m)
       	  cin>>b[i];
       	maxa=*max_element(a.begin(),a.end());
       	maxb=*max_element(b.begin(),b.end());

       	// ans=max(maxa,maxb);
       	if(maxa>=maxb)
       		cout<<"Godzilla"<<"\n";
       	else 
       		cout<<"MechaGodzilla"<<"\n";

       }


   return 0;
 }