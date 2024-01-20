#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int t, n;
    char s[100];
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        getchar();
        gets_s(s);
        for (int j = 0; j < n; j++)
        {
            char p[100];
            gets_s(p);
            int pl = 0, sl = 0, sy = 0;
            while (1)
            {
                if (p[pl] == s[sl])
                {
                    if (pl == 0)
                        sy = sl;
                    pl++;
                    sl++;
                }

                else
                {
                    if (pl == 0)
                    {
                        sl++;
                        sy++;
                    }
                    else {
                        pl = 0;
                        sy++;
                        sl = sy;
                    }
                }
                if (p[pl] == '\0')
                {
                    printf("duile\n");
                    break;
                }
                if (s[sy] == '\0')
                {
                    printf("cuole\n");
                    break;
                }
            }
        }
    }
    return 0;
}