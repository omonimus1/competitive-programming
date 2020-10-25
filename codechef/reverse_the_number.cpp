// https://www.codechef.com/problems/FLOW007// SOLUTION NOT READY
#include <iostream>
#include<vector>
using namespace std;

void reverse_string()
{
    string number;
    cin >> number;
    int start_point = number.size()-1;
    // If the last numebr is 0
    if(number[number.size()-1] =='0')
    {
        for(int i = number.size()-1; i>=0; i--)
        {
            if(number[i] != number[i-1])
            {
                start_point =  i-1;
                break;
            }
                 
        }
    }

    for(int i=start_point; i>=0; i--)
    {
        cout<<number[i];
    }
    cout<<""<<endl;
}

int main()
{
    // number of test cases
    int t;
    string number; 
    // Read number of test cases
    cin >>t;
    for(int i =0; i<t; i++)
    {
        reverse_string();
    }
    return 0;
}
