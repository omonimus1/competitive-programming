#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print_second_biggest()
{
    long long a;
    vector<int> vett;
    for(int i =0; i<3 ;i++)
    {
        cin >>a;
        vett.push_back(a);
    }
    sort(vett.begin(), vett.end());
    cout << vett[vett.size()-2] <<endl;
}

int main()
{
    // number of test cases
    int t;
    // Read number of test cases
    cin >>t;
    for(int i =0; i<t; i++)
        print_second_biggest();
    return 0;
}