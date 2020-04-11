// https://practice.geeksforgeeks.org/problems/sort-string/0
#include <bits/stdc++.h>
using namespace std;

void solve_test()
{
    string s; 
    cin >> s;
    sort(s.begin(), s.end());
    cout << s<<endl;
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