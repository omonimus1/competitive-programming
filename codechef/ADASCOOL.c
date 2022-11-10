// https://www.codechef.com/problems/ADASCOOL
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t && t <= 5000; i++)
    {
        int n, m;
        scanf("%d%d", &n, &m);

        if ((n >= 2 && n <= 50) && (m>=2 && m <= 50))
        {
            if ((n * m) % 2 == 0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }

    return 0;
}