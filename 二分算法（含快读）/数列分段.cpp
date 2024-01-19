#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int read()
//{
//	int x = 0, f = 1;
//	char c = getchar();
//	while (c < '0' || c>'9')
//	{
//		if (c == '-')
//			f = -1;
//		c = getchar();
//	}
//	while (c >= '0' && c <= '9')
//	{
//		x = x * 10 + c - '0';
//		c = getchar();
//	}
//	return x * f;
//}
//int main()
//{
//	int n, m,s=0;
//	n = read();
//	m = read();
//	int a[1000] = { 0 };
//	int sum[1000] = { 0 };
//	for (int i = 1; i <= n; i++)
//	{
//		a[i] = read();
//		if (a[i] > s)
//			s = a[i];
//		sum[i] = sum[i - 1] + a[i];
//	}
//	int l = s, r = sum[n],x,max=100000;
//	while (l<r)
//	{
//		int mid = (l + r) / 2;
//		x=0;
//		int count = 1;
//		for (int i = 1; i <= n; i++)
//		{
//			if(x+a[i]<=mid)
//				x += a[i];
//			else
//			{
//				x = a[i];
//				count++;
//			}
//		}
//		if (count <= m)
//		{
//			r = mid;
//		}
//		if (count > m)
//		{
//			l = mid+1 ;
//		}
//	}
//	printf("%d", l);
//	return 0;
//}