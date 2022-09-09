// https://www.codechef.com/problems/HOWMANYMAX
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        int count = 0;

        char str[n - 1];

        scanf("%s", str);

        if (str[0] == '0')
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (str[i] == '0' && str[i + 1] == '1')
                {
                    count++;
                }
            }

            if (str[n - 2] == '0')
            {
                count++;
            }
            printf("%d\n", count);
        }

        if (str[0] == '1')
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (str[i] == '1' && str[i + 1] == '0')
                {
                    count++;
                }
            }

            printf("%d\n", count+1);
        }
    }

    return 0;
}