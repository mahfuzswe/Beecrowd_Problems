#include <stdio.h>
int main()
{
    int rw, clm, i, j, cndtn = 0, n = 0, m = 0;
    scanf("%d%d", &rw, &clm);
    int ara[rw][clm];
    for (i = 0; i < rw; i++)
        for (j = 0; j < clm; j++)
            scanf("%d", &ara[i][j]);

    for (i = 1; i < rw - 1; i++)
    {
        for (j = 1; j < clm - 1; j++)
        {
            if (ara[i][j] == 42)
                if (ara[i - 1][j - 1] == 7 && ara[i - 1][j] == 7 && ara[i - 1][j + 1] == 7)
                    if (ara[i][j - 1] == 7 && ara[i][j + 1] == 7)
                        if (ara[i + 1][j - 1] == 7 && ara[i + 1][j] == 7 && ara[i + 1][j + 1] == 7)
                        {
                            cndtn = 1;
                            n = i + 1;
                            m = j + 1;
                        }
        }
    }
    printf("%d %d\n", n, m);
    return 0;
}