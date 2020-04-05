//https://www.codechef.com/problems/FLOW002

#include <iostream>
using namespace std; 

int main()
{
    unsigned int number_of_tests , a, b; 
    // Read number of test cases
    cin >> number_of_tests;
    while(number_of_tests--)
    {
        // Read two number to analize
        cin >> a >> b;
        // Print remainder
        cout << a%b<<endl;
    }
    return 0; 
}