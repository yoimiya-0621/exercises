#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int n;
//struct PEO
//{
//    int k;
//    int a[1000];
//}p[1000];
//int main()
//{
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &p[i].k);
//        for (int j = 0; j < p[i].k; j++)
//            scanf("%d", &p[i].a[j]);
//    }
//    int m;
//    scanf("%d", &m);
//    int ans = m;
//    int b[10000];
//    int c[10000];
//    int w = 0;
//    for (int k = 0; k < m; k++)
//    {
//        scanf("%d", &b[k]);
//        for (int j = 0; j < k; j++)
//        {
//            if (b[j] == b[k])
//                b[k] = 0;
//        }
//        if (b[k])
//        {
//            for (int i = 0; i < n; i++)
//            {
//                for (int j = 0; j < p[i].k; j++)
//                    if (p[i].a[j] == b[k])
//                    {
//                        b[k] = 0; ans--;
//                        break;
//                    }
//                if (b[k] == 0)
//                    break;
//            }
//            if (b[k])
//            {
//                c[w] = b[k]; w++;
//            }
//        }
//    }
//    for (int i = 0; i <= w; i++)
//    {
//        printf("%d", c[i]);
//        if (i != w - 1)
//            printf(" ");
//    }
//    if (ans == 0)
//        printf("No one is handsome");
//    return 0;
//}
