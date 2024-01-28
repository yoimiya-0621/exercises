#define  _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//#include <math.h>
//int fact(long long n)
//{
//	if (n == 1)
//		return 0;
//	for (int i = 2; i < sqrt(n); i++)
//	{
//		if (n % i == 0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	long long n,start=0,l=0;
//	scanf("%lld", &n);
//	if (fact(n) == 0)
//	{
//		printf("1\n%lld", n);
//	}
//	else
//	{
//		for (long long i = 2; i < sqrt(n); i++)
//		{
//			long long s = 1;
//			for (long long j = i; s*j <= n; j++)
//			{
//				s = s * j;
//				if (n % s == 0&&j-i+1>l)
//				{
//					start = i;
//					l = j - i + 1;
//				}
//			}
//		}
//		printf("%lld\n", l);
//		for (long long i = start; i < start + l; i++)
//		{
//			if (i == start)
//				printf("%lld", i);
//			else
//				printf("*%lld", i);
//		}
//	}
//	return 0;
//}
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//int main()
//{
//    long long n, m, sum = 0, ans = 0;
//    int a[100000];
//    scanf("%lld %lld", &n, &m);
//    for (int i = 0; i < n; i++)
//        scanf("%d", &a[i]);
//    sort(a, a + n);
//    for (int j = n - 1;; j--)
//    {
//        sum += a[j];
//        ans++;
//        if (sum >= m)
//        {
//            printf("%lld", ans); break;
//        }
//    }
//    return 0;
//}
#include <stdio.h>
int main()
{
    int n, ans = 0, t = 0;
    int a[10000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (a[j] > a[j+1])
            {
                t = a[j+1];
                a[j+1] = a[j];
                a[j] = t;
                ans++;
            }
        }
    }
    printf("%d", ans);
    return 0;
}