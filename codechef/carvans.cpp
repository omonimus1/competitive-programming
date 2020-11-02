#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

int counter;
int n;

void solve_test()
{
    scanf("%d", &n);
    if (n == 1)
    {
        printf("1\n");
        return;
    }
    else
    {
        vector<int>s;
        int speed;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &speed);
            s.push_back(speed);
        }

        counter = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] > s[i + 1])
                counter++;
        }
        printf("%d\n", counter);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
        solve_test();

    return 0;
}

