#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int n, k, q, s = 0;
    scanf("%d %d", &n, &k);
    int a[1000] = { 0 };
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &q);
    for (int i = 0; i < q; i++)
    {
        int x = 0;
        scanf("%d", x);
        if (k == 1)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[j] == x)
                {
                    printf("Yes\n");
                    s = 1;
                    break;
                }
            }
        }
        if (k == 2)
        {
            for (int j = 0; j < n - 1; j++)
            {
                for (int r = j + 1; r < n; r++)
                {
                    if (a[j] + a[r] == x)
                    {
                        printf("Yes\n");
                        s = 1;
                        break;
                    }
                }
                if (s == 1)
                    break;
            }
        }
        if (s == 1)
            printf("No\n");
    }
    return 0;
}