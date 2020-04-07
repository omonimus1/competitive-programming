// https://www.codechef.com/problems/FCTRL2
#include <iostream>
using namespace std; 

long long calculate_factorial(int number)
{
    long long factorial =1; 
    for(int i =1; i<= number; i++)
    {
        factorial *= i;
    }
        
    
    return factorial;
}

int main()
{
    int t , number;
    cin >> t;
    long long factorial;
    while(t--)
    {
        //cin >> number;
        number = 5; 
        factorial = calculate_factorial(number);
        cout << factorial << endl;
    }
    return 0; 
}