#include <bits/stdc++.h>
using namespace std;

/*
WARNING: THIS SOLUTION DOES NOT PASS ALL THE TESTS
*/
void solve_test()
{
    int number; 
    cin >> number; 
    long int power = number*number; 
    
    // Let's convet now the two numbers;
    string n , p;
    n = to_string(number);
    p= to_string(power);
    
    int starting_point = p.size() - n.size();
    
    for(int i = starting_point; i< p.size(); i++)
    {
        for(int a=0; a<n.size(); a++)
        {
            if(p[i] != n[a])
            {
                cout << "Not Automorphic"<<endl;
                return; 
            }
        }
        
    }
    
    cout<<"Automorphic"<<endl;
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