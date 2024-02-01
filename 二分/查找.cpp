#define  _CRT_SECURE_NO_WARNINGS
//第一版，超时
//#include <stdio.h>
//int main()
//{
//	int n,m,ans=0;
//	scanf("%d %d", &n, &m);
//	int a[10000] = { 0 };
//	int b[10000] = { 0 };
//	long long c[10000] = { 0 };
//
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//		c[a[i]]++;
//	}
//	for (int i = 0; i < m; i++)scanf("%d", &b[i]);
//	for (int i = 0; i < m; i++)
//	{
//		ans = 0;
//		int l = 0, r = n - 1;
//		while (l < r)
//		{
//			if (a[(l + r) / 2] < b[i])
//				l++;
//			if (a[(l + r) / 2] > b[i])
//				r--;
//			if (a[(l + r) / 2] == b[i])
//			{
//				ans += c[a[(l + r) / 2]];
//				printf("%d ", ans);
//				break;
//			}
//		}
//		if (l > r)
//			printf("-1 ");
//	}
//	
//	return 0;
//}
//第二版
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//int read()//快读
//{
//	char c=getchar();
//	int x = 0, f = 1;
//	while (c < '0' || c>'9')
//	{
//		if (c == '-')
//			f = -1;
//		c=getchar();
//	}
//	while (c > '0' && c<'9')
//	{
//		x = x * 10 + c - '0';
//		c=getchar();
//	}
//	return x * f;
//}
//int main()
//{
//	int n, m;
//	n = read();
//	m = read();
//	int a[10001] = { 0 };
//	for (int i = 1; i <= n; i++)
//		a[i] = read();
//	for (int i = 0; i < m; i++)
//	{
//		int x = read();
//		int ans = lower_bound(a, a + n,x)-a;
//		if(x!=a[ans])
//			printf("-1 ");
//		else
//			printf("%d ", ans);
//	}
//	return 0;
//}