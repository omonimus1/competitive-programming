// https://www.codechef.com/problems/DOLL
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int n = 0; n < t; n++)
    {
        int count = 0;
        int numberOfPlayers;
        cin >> numberOfPlayers;

        int Height;
        cin >> Height;

        int array[numberOfPlayers];

        for (int i = 0; i < numberOfPlayers; i++)
        {
            cin >> array[i];
        }
        for (int i = 0; i < numberOfPlayers; i++)
        {
            if (array[i] > Height)
            {
                count++;
            }
        }
        cout << count << endl;
    }
        return 0;
    }
