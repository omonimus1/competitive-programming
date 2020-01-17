// UVa10550.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std; 

int main()
{
    //  UVA 11172 - Relational Operator
    string line; 
    int a, b, n; 
    cin >> n; 
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a < b)
            cout << "<" <<endl;
        else if (a > b)
            cout << ">" << endl;
        else
            cout << "=" << endl;
    }
}
