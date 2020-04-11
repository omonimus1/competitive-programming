// https://practice.geeksforgeeks.org/problems/last-index-of-1/0
#include <bits/stdc++.h>
using namespace std;

void solve_test()
{
    int index = -1;
    string s;
    cin >> s;
    for(int i =0; i< s.size(); i++)
    {
        if(s[i] == '1')
            index = i;
    }
    cout << index <<endl;
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