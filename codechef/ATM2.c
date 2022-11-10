//https://www.codechef.com/problems/ATM2
#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int j = 0; j < t; j++)
    {
        int total, n, withdraw;
        scanf(" %d", &n);
        char output[n];
        scanf(" %d", &total);

        for (int i = 0; i < n; i++)
        {
            scanf(" %d", &withdraw);

            if (withdraw <= total)
            {
                output[i] = '1';
                total = total - withdraw;
            }
            else
            {
                output[i] = '0';
            }
        }
        output[n]='\0';

        printf("%s\n", output);
    }

    return 0;
}