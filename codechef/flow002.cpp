//https://www.codechef.com/problems/FLOW002

#include <iostream>
using namespace std;

int main()
{
    unsigned int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        cout << a % b << endl;
    }
    return 0;
}