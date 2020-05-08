#include <bits/stdc++.h>
using namespace std;

long int get_factorial(int n)
{
    unsigned long long  factorial = 1;
    for(int i =1; i<= n; i++)
    {
        factorial *=i; 
    }
    return factorial; 
}

int main()
{
    unsigned int tests ,code_length;
    unsigned long long  factorial , result;
    string code;
    cin >> tests;
    for(int i =0; i< tests; i++)
    {
        cin >> code;
        code_length = code.size();
        factorial = get_factorial(code_length);
        result(factorial / factorial)
    }
    return 0; 
}