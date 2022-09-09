// https://www.codechef.com/problems/CABS
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int n = 0; n < t; n++)
    {
        int x, y;
        cin >> x >> y;

        if (x == y)
        {
            cout << "ANY" << endl;
        }
        else if (x < y)
        {
            cout << "FIRST" << endl;
        }
        else
            {
                cout << "SECOND" << endl;
            }
    }
        return 0;
}
