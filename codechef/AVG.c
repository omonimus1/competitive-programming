// https://www.codechef.com/problems/AVG
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, k, v;
        scanf("%d%d%d", &n, &k, &v);

        int array[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &array[i]);
            sum += array[i];
        }
        int expression = (v * (n + k) - sum);
        int x;
        if (expression % k != 0)
        {
            printf("-1\n");
        }
        else
        {

            x = expression / k;

            if (x <=0)
            {
                printf("-1\n");
            }
            else
            {

                printf("%d\n", x);
            }
        }
    }

    return 0;
}