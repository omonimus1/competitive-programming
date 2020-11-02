// https://www.codechef.com/problems/ZCOSCH
#include<iostream>
using namespace std;

int main()
{
    unsigned long long rank;
    cin >> rank;
    if (rank > 100)
    {
        cout << 0 << endl;
        return 0;
    }
    else if (rank >= 1 && rank <= 50)
        cout << 100 << endl;
    else if (rank >= 51 && rank <= 100)
        cout << 50 << endl;
    return 0;
}
