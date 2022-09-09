// https://www.codechef.com/problems/BROKPHON
#include <stdio.h>
/* 7 1 1 1 3 3 3 2
 */
// Got accepted in the first time.
// No Explaination used.
// By Mohd Azeem
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        int array[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &array[i]);
        }
        int count = 0;

        if (array[0] != array[1])
        {
            count++;
        }

        for (int i = 1; i < n - 1; i++)
        {
            if (array[i] != array[i - 1] || array[i] != array[i + 1])
            {
                count++;
            }
        }
        if (array[n - 1] != array[n - 2])
        {
            count++;
        }

        printf("%d\n", count);
    }
    return 0;
}