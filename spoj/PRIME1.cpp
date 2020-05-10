// https://www.spoj.com/problems/PRIME1/

#include <iostream>
using namespace std;

bool isPrime(int number)
{
    for(int i=2; i < number; i++)
    {
        if(number % i == 0)
            return false;
    }
    return true;  
}

int main()
{
    int test_cases, a , b;
    cin >> test_cases;
    while(test_cases--)
    {
        cin >>a >> b;
        if(a < 2)
            a=2;
        for(int i = a; i <=b; i++)
        {
            if(isPrime(i))
                cout << i<<endl;
        }
        cout << endl;
    }
    return 0;
}