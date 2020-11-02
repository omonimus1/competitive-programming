// https://www.codechef.com/problems/PRB01
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

int main()
{
    long long int test_cases, number; 
    cin >> test_cases;
    while(test_cases--)
    {
        cin >> number; 
        if(isPrime(number))
        {
            cout <<"yes"<<endl;
            continue;
        }
        else
            cout<<"no"<<endl;
    }
    return 0; 
}
