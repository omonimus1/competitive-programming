// https://practice.geeksforgeeks.org/problems/find-prime-numbers-in-a-range/0

#include <iostream>
using namespace std;

bool isPrime(unsigned long int n)
{
    if(n <=1)
        return false;
    
    for(int i=2; i<n; i++)
    {
        if(n%i ==0)
            return false;
    }
    return true; 
}

void solve_test()
{
    unsigned long int a , b, number; 
    cin >> a >> b;
    for(int i =a; i<=b; i++)
    {
        if(isPrime(i))
            cout<<i<<" ";
    }
    cout<<endl;
}

int main()
{
    int t; 
    cin >> t; 
    
    while(t--)
        solve_test();
	return 0;
}