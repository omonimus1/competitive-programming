// https://www.codechef.com/problems/HEADBOB
#include<iostream>
using namespace std;


string solve_test()
{
    int NO,YES, I, n=4;
    NO = YES = I = 0;
    cin >> n;
    string signs;
    cin >> signs;
    for(int i =0; i < n; i++)
    {
        if(signs[i] == 'I')
            return "INDIAN";
        else if(signs[i] == 'Y')
            return "NOT INDIAN";
    } 
    return "NOT SURE";
}


int main()
{
    int t;
    cin >> t;
    while(t--)
        cout << solve_test()<<endl;
    return 0;
}

