// https://www.codechef.com/problems/PRIME1
#include <iostream>
using namespace std;

bool isPrime(long long int n)
{
    if(n <=1)
        return false; 
    for(int i =2; i<n; i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}

void generate_primes()
{
    long long int a, b;
    cin >> a >> b;
    for(int i =a+1 ; i<b; i++)
    {
        if(isPrime(i))
            cout<<i<<endl;
    }
    cout<<endl;
}

int main()
{
    long long int test_cases; 
    cin >> test_cases;
    while(test_cases--)
    {
        generate_primes();
    }
    return 0; 
}