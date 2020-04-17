// Author: Davide Pollicino -> github.com/omonimus1 
// Date: 17/04/2020
// https://practice.geeksforgeeks.org/problems/armstrong-numbers/0
#include<iostream>
#include<math.h>
using namespace std;

void solve_test_case()
{
    int number = 371 , original_number;
    long long int sum=0 , single_digit; 
    original_number = number;
    cin >> number; 
    
    while(number) 
    {
        single_digit = number % 10;
        number /= 10;
        sum  += powl(single_digit, 3);
    }

    if(sum == original_number)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}


int main()
{
    int t;
    cin >> t; 
    while(t--)
        solve_test_case();
    return 0; 
}