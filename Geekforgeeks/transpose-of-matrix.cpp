#include <bits/stdc++.h>
using namespace std;

void solve_test()
{
    int n;
    cin >> n;
    int mat[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> mat[i][j];   
        }
    }
    
    // Print its transpose
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << mat[j][i] << " ";   
        }
        
    }
    cout << endl;
        
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