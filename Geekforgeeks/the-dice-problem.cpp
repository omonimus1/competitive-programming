// https://practice.geeksforgeeks.org/problems/the-dice-problem/0
#include <bits/stdc++.h>
using namespace std;

void solve_test()
{
    int number; 
    cin >> number; 
    cout << 6-number+1 << endl; 
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