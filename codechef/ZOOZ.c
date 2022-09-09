// https://www.codechef.com/problems/ZOOZ
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int j = 0; j < t; j++)
    {
        int n;
        scanf("%d", &n);
        char string[n];

        string[0] = '1';

        for (int i = 1; i < n - 1; i++)
        {
            string[i] = '0';
        }
        string[n - 1] = '1';

        string[n] = '\0';

        printf("%s\n", string);
    }
    return 0;
}
