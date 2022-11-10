// https://www.codechef.com/problems/PROGLANG
#include <stdio.h>

int main()
{
    int testcase;
    scanf("%d", &testcase);

    for (int i = 0; i < testcase && testcase <= 288; i++)
    {

        int a, b, a1, b1, a2, b2, ans = 0;

        scanf("%d%d%d%d%d%d", &a, &b, &a1, &b1, &a2, &b2);

        if ((1 <= a <= 4) && (1 <= b <= 4) && (1 <= a1 <= 4) && (1 <= b1 <= 4) && (1 <= a2 <= 4) && (1 <= b2 <= 4) && (a != b) && (a1 != b1) && (a2 != b2))
        {
            if (((a == a1)&& (b == b1)) || ((a == b1) && (b == a1)))
            {
                ans = 1;
            }

            if (((a == a2)&& (b == b2)) || ((a == b2) && (b == a2)))
            {
                ans = 2;
            }
        }
        printf("%d\n", ans);
    }

    return 0;
}