#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a, b;
    string s[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (i <= 9)
            cout << (s[i - 1]) << endl;
        else if (i > 9)
        {
            if ((i % 2) == 0)
                cout << "even" << endl;
            else
                cout << "odd" << endl;
        }
    }

    return 0;
}
