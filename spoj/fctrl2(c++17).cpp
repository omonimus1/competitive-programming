#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp> 
#define ll long long int
#define watch(x) cout << (#x) << " is " << (x) << endl  //watch function print variable and value for debugging
#define count_ones __builtin_popcountll                  // count_ones(9) is equal to 2 valid for ll also
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define fo(i,n) for(ll i=0;i<n;i++)
using boost::multiprecision::cpp_int; 
using namespace std;


cpp_int boost_factorial(int num) 
{ 
    cpp_int fact = 1; 
    for (int i=num; i>1; --i)     
        fact *= i; 
    return fact; 
} 


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
       	ll n;
       	cin>>n;
       	cout<<boost_factorial(n)<<"\n";

       }


   return 0;
 }