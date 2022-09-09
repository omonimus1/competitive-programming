// https://www.codechef.com/problems/LONGSEQ
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int x = 0; x < t; x++)
    {
        string number;
        cin >> number;

        long long int zero_count = 0;
        long long int one_count = 0;
        long long int length = number.length();

        for (long long int i = 0; i < length; i++)
        {
            if (number[i] == '0')
            {
                zero_count++;
            }
            else
            {
                one_count++;
            }
        }

        if (zero_count == 1 || one_count == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
