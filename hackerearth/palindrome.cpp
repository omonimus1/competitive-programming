// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/submissions/
#include<iostream>
#include <string.h>
using namespace std; 

int main()
{
    string name;
    cin >> name; 
    int len = name.size();
    int end = len-1;
    bool flag = true; 
    for(int i =0; i < len/2; i++)
    {
        if(name[i] != name[end])
        {
            flag = false;
            break; 
        }
        end--;
    }
    if(flag)
        cout <<"YES"<<endl;
    else
        cout <<"NO"<<endl;
    return 0; 
}
