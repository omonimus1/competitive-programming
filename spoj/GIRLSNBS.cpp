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
 
       ll b,g;
       while(cin>>g>>b && g!=-1)
       {
       	ll ans=0;
       	ll k=g/(b+1);
        ll l=b/(g+1);
      if(g==b)
        {
        	if(g==0 && b==0)
        		ans=0;
        	else 
        		ans=1;
        }
      else if(g>b)
        {
          if(g%(b+1)!=0)
        	 ans=1+k;
          else
             ans=k;        
        }
      else
        {
           if(b%(g+1)!=0)
        	    ans=1+l;
           else
             ans=l;
        }
        cout<<ans<<"\n";
       }
   return 0;
 }