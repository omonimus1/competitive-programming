// https://www.codechef.com/problems/ZOZ
#include <iostream>

using namespace std;

int solve_test()
{
    /*
    4 4
    2 1 6 7
    4 2
    2 1 5 4
    */

    int n, k;
    cin >> n >> k;
    int arr[n]; // = {2,1,6,7};
    for (int i = 0; i < n; i++) cin >> arr[i];


    int magic = 0;
    int sum;
    int incremented_value;
    for (int i = 0; i < n; i++)
    {
        incremented_value = arr[i] + k;
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            sum += arr[j];
        }

        if (incremented_value > sum)
            magic++;

    }

    return magic;
}


int main()
{
    int t = 1;
    cin >> t;
    while (t--)
        cout << solve_test() << endl;
    return 0;
}
