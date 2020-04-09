#include <iostream>
#include <vector>
using namespace std;


void solve_test()
{
    int n; 
    cin >>n;
    if(n==1)
        cout <<1<<'\n';
    else
    {
        vector<int>s;
        unsigned int speed; 
        for(int i =0; i< n; i++)
        {
            cin >> speed;
            s.push_back(speed);
        }

        unsigned int counter=0;
        for(int i=0; i< n-1; i++)
        {
            if(s[i] > s[i+1])
                counter++;
        } 
        cout <<counter<<'\n';
    }
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    unsigned int t;
    cin >>t;
    for(int i =0; i< t; i++)
        solve_test(); 
    
	return 0;
}
