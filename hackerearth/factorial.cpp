// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-factorial/submissions/
#include<iostream>
using namespace std;
int main()
{
    long int number; 
    cin >> number;
    int factorial = 1;
    for(int i =1; i <= number; i++)
    {
        factorial = factorial * i; 
    } 
    cout << factorial << endl;
    return 0; 
}