#include <iostream>
using namespace std;

void solve_test()
{
    long long int a , b;
    cin >> a >> b; 
    if(a > b)
        cout << '>'<<endl;
    else if(a < b)
        cout << '<' <<endl;
    else
        cout <<'='<<endl;
}

int main()
{
    // number of test cases
    int t;
    // Read number of test cases
    cin >>t;
    for(int i =0; i<t; i++)
    {
        solve_test(); 
    }
    return 0;
}