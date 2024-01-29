#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int n, m;
//	long long b[1000000];
//	long long c[1000000];
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%lld", &b[i]);
//	}
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%lld", &c[i]);;
//	}
//	sort(c, c + m);
//	for (int i = 0; i < n; i++)
//	{
//		int l = 0, r = m - 1;
//		int mid = (l + r) / 2;
//		while (l <= r)
//		{
//			if (b[i] > c[mid])
//			{
//				l = mid + 1;
//			}
//			else if (b[i] < c[mid])
//			{
//				r = mid - 1;
//			}
//			else
//			{
//				printf("%lld ", b[i]);
//				break;
//			}
//			mid = (l + r) / 2;
//		}
//	}
//	return 0;
//}