// https://www.codechef.com/problems/NUM239
#include<iostream>

using namespace std;

bool isPrettyNumber(int number)
{
    // Get last digit of the number
    int single_digit = number %10;
    if(single_digit  == 2 || single_digit == 3 || single_digit  == 9)
        return true;
    else 
        return false;
}

int main()
{
    int test_cases;
    int a, b, counter;
    cin >> test_cases;
    while(test_cases--)
    {
        counter = 0;
        cin >> a >>b;
        for(int i=a; i<=b; i++)
        {
            if(isPrettyNumber(i))
                counter++;
        }
        cout<<counter<<endl;
    }
    return 0;
}