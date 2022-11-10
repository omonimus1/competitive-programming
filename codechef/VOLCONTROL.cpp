// https://www.codechef.com/problems/VOLCONTROL
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t && t <= 100; i++)
    {
        int x=0, y=0;
        cin >> x >> y;
        if (x <= 100 && y <= 100)
        {

            cout << ((x > y) ? x - y : y - x) << endl;
        }
    }
    return 0;
}
