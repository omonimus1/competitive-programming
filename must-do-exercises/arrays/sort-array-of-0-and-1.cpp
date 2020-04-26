// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s/0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve_test()
{
    int size_list, number;
    cin >> size_list;
    vector<int> vett;
    for(int i =0; i< size_list; i++)
    {
        cin >> number;
        vett.push_back(number);
    }
    // Sort the list of numbers
    sort(vett.begin(), vett.end());
    
    // Print sorted list
    for(int i=0; i< vett.size(); i++)
        cout<<vett[i]<<" ";
        
}

int main()
{
    int t; 
    cin >> t; 
    
    for(int i=0; i<t; i++)
    {
        solve_test();
        cout<<endl;
    }
	
	return 0;
}