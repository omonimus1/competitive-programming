// https://www.codechef.com/problems/FEVER
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int temp;
        cin >> temp;

        temp > 98 ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}
