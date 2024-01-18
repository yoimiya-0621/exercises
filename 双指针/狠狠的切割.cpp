#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int ans = 1;
//	long long  n, m;
//	scanf("%lld %lld", &n, &m);
//	long long a[50001] = { 0 };
//	long long b[50001] = { 0 };
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%lld", &a[i]);
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		scanf("%lld", &b[i]);
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (a[j] == b[i])
//			{
//				a[j] = 0;
//			}
//		}
//	}
//	for (int j = 1; j <= n; j++)
//	{
//		if (a[j] == 0 && a[j - 1] != 0)
//			ans++;
//	}
//	if (a[n] == 0)
//		ans--;
//	printf("%d", ans);
//	return 0;
//}