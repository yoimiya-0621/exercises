#define _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//struct GIFT 
//{
//	int id;
//	int p;
//}a[100];
//bool cmp(struct GIFT a1, struct GIFT a2)
//{
//	return a1.p < a2.p;
//}
//bool cmp2(int a, int b)
//{
//	return a < b;
//}
//int main()
//{
//	int n, k, sum = 0, ans = 0;
//	int b[100] = { 0 };
//	scanf("%d %d", &n, &k);
//	for (int i = 0; i < n; i++)
//	{
//		a[i].id = i;
//		scanf("%d", &a[i].p);
//	}
//	sort(a, a + n, cmp);
//	int j;
//	for (j = n - 1; j >= 0; j--)
//	{
//		sum += a[j].p;
//		ans++;
//		if (sum >= k)
//		{
//			break;
//		}
//	}
//	printf("%d\n", ans);
//	for (int k = n - 1; k >= j; k--)
//		printf("%d ", a[k].id);
//	printf("\n");
//	ans = 0;
//	sum = 0;
//	for (j = 0; j < n; j++)
//	{
//		sum += a[j].p;
//		b[j] = a[j].id;
//		ans++;
//		if (sum > k)
//		{
//			break;
//		}
//	}
//	printf("%d\n", ans);
//	for (int k = 0; k <= j; k++)
//		printf("%d ", a[k].id);
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int m, n;
//    scanf("%d %d", &n, &m);
//    int a[502][502] = { 0 };
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= m; j++)
//        {
//            scanf("%d", &a[i][j]);
//        }
//    }
//    long long sum = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= m; j++)
//        {
//            if (fabs(a[i][j] - a[i + 1][j]) > sum && i != n)
//                sum = fabs(a[i][j] - a[i + 1][j]);
//            if (fabs(a[i][j] - a[i - 1][j]) > sum && i - 1 != 0)
//                sum = fabs(a[i][j] - a[i - 1][j]);
//            if (fabs(a[i][j] - a[i][j + 1]) > sum && j != m)
//                sum = fabs(a[i][j] - a[i][j + 1]);
//            if (fabs(a[i][j] - a[i][j - 1]) > sum && j != 1)
//                sum = fabs(a[i][j] - a[i][j - 1]);
//        }
//    }
//    printf("%lld", sum);
//    return 0;
//}
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int n, q;
//	scanf("%d %d", &n, &q);
//	long long a[10000] = { 0 };
//	long long x[10000] = { 0 };
//	for (int i = 1; i <= n; i++)
//		scanf("%d", &a[i]);
//	for(int i=0;i<q;i++)
//		scanf("%d", &x[i]);
//	sort(a+1, a + n+1);
//	for (int i = 0; i < q; i++)
//	{
//		long long* c=lower_bound(a+1,a+n+1, x[i]);
//		long long* d = upper_bound(a + 1, a + n + 1, x[i]);
//
//		printf("%lld %lld %lld\n", c - a-1,d-c,a+n-d+1);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n, sum = 0, ans = 0, p = 0, x, y;
//    int a[100000] = { 0 };
//    int b[100000] = { 0 };
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//        scanf("%d", &a[i]);
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = p; j < i; j++)
//        {
//            if (a[j] == a[i])
//            {
//                p = i;
//                sum = 0;
//            }
//        }
//        if (a[i] == a[p]&&i!=p)
//        {
//            p++;
//            sum -= a[p];
//        }
//        sum += a[i];
//        if (sum > ans)
//        {
//            ans = sum;
//            x = p;
//            y = i;
//        }
//    }
//    printf("%d\n", ans);
//    printf("%d", y - x+1);
//    return 0;
//}
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//struct B
//{
//	int di;
//	int si;
//}a[100000];
//bool cmp(struct B a1, struct B a2)
//{
//	return a1.di < a2.di;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d %d", &a[i].di, &a[i].si);
//	}
//	sort(a, a + n, cmp);
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		if (a[i].si == 1)
//			break;
//	}
//	printf("%d", i + 1);
//	return 0;
//}
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
    int x[100] = { 0 };
    for (int i = 0; i < q; i++)
    {
        scanf("%d", x[i]);
        if (k == 1)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[j] == x[i])
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
                    if (a[j] + a[r] == x[i])
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