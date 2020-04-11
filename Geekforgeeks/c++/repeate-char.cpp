#include <iostream>
using namespace std;

void solve_test()
{
    string s;
    cin >> s;

    
    for(int i=0; i<s.size(); i++)
    {
        for(int a =i+1; a < s.size(); a++)
        {
            if(s[i] == s[a])
            {
                cout << s[i]<<endl;
                return;
            }
        }
    }
    cout << "-1" <<endl; 
}

int main()
{
    int t=1; 
    cin >> t; 
    
    for(int i=0; i<t; i++)
    {
        solve_test();
    }
	
	return 0;
}