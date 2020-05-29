#include <bits/stdc++.h>
using namespace std;

void fill_array(int (*arr), int n)
{
    int number; 
    for(int i =0; i< n; i++)
    {
        cin >> number; 
        arr[i] = number;
    }
}

void solve_test()
{
    int size_x, size_y;
    // Read Lenght of the arrays
    cin >> size_x >> size_y;
    int X[size_x], Y[size_y];
    // Store input
    fill_array(X, size_x);
    fill_array(Y, size_y);
    // Search nuber of pairs
    int number_of_pairs = 0;
    for(int i=0; i< size_x; i++)
    {
        for(int j=0; j < size_y; j++)
        {
            if(X[i] == Y[j])
                continue;
            else if(pow(X[i], Y[j])  > pow(Y[j], X[i]))
                number_of_pairs++;
        }
    }
    cout << number_of_pairs<<endl;
    
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