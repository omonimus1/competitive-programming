// https://www.codechef.com/problems/BALLBOX
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int x = 0; x < t; x++)
    {
        int ball;
        cin >> ball;
        int k;
        cin >> k;

        int result;

        result = (k * (k + 1)) / 2;

        if (ball >= result)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}