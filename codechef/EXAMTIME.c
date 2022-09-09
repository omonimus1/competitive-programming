// https://www.codechef.com/problems/EXAMTIME
#include <stdio.h>

typedef struct stu
{
    int DSA;
    int TOC;
    int DM;

} student;

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        student DRAGON;
        student SLOTH;

        scanf("%d %d %d", &DRAGON.DSA, &DRAGON.TOC, &DRAGON.DM);
        scanf("%d %d %d", &SLOTH.DSA, &SLOTH.TOC, &SLOTH.DM);

        if ((DRAGON.DSA <= 100) && (DRAGON.TOC <= 100) && (DRAGON.DM <= 100) && (SLOTH.DSA <= 100) && (SLOTH.TOC <= 100) && (SLOTH.DM <= 100))
        {
            int dsum = DRAGON.DSA + DRAGON.TOC + DRAGON.DM;
            int slsum = SLOTH.DM + SLOTH.DSA + SLOTH.TOC;

            if (dsum != slsum)
            {
                printf("%s\n", (dsum > slsum) ? "DRAGON" : "SLOTH");
            }
            else if (DRAGON.DSA != SLOTH.DSA)
            {
                printf("%s\n", (DRAGON.DSA > SLOTH.DSA) ? "DRAGON" : "SLOTH");
            }
            else if (DRAGON.TOC != SLOTH.TOC)
            {
                printf("%s\n", (DRAGON.TOC > SLOTH.TOC) ? "DRAGON" : "SLOTH");
            }
            else
            {
                printf("TIE\n");
            }
        }
    }

    return 0;
}