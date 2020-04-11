#include <iostream>
using namespace std;

long long int get_factorial(int n)
{
    long long int factorial = 1;
    for(int i =1; i<=n; i++)
        factorial = factorial *i; 
    return factorial;
}

void solve_test()
{
    int number, single_number,sum =0;
     
    cin >> number; 
    int digits = number;
    while(digits > 0)
    {
        single_number = digits%10;
        digits /=10; 
        sum += get_factorial(single_number);
    }
    if(sum == number)
        cout<<"Strong"<<endl;
    else
        cout<< "Not Strong"<<endl;
}

int main()
{
    int t; 
    cin >> t; 
    
    for(int i=0; i<t; i++)
    {
        solve_test();
    }
	
	return 0;
}