#include <iostream>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;{
    while(t>0){
        cin>>n;
        int fact=1;
        if(n>0){
        for(i=1; i<=n; i++)
           {
                fact=fact*i;

           }
           t--;}
         else if (n==0){
            fact=1;}
         cout<<fact<<"\n";}}
    return 0;
}
