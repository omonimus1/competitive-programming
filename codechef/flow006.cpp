//https://www.codechef.com/problems/FLOW006
#include <iostream>
using namespace std;

int main()
{
    int t, total;
    long long n = 12345;
    cin >> t;
    while (t--)
    {

        total = 0;
        cin >> n;
        while (n != 0)
        {
            total += n % 10;
            n = n / 10;
        }
        cout << total << endl;
    }
    return 0;
}