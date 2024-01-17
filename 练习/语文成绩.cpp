#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	long n,p;
//	int a[100001] = { 0 };
//	int b[100001] = { 0 };
//	int min = 100;
//	scanf("%ld %ld", &n, &p);
//	for (long i = 1; i <= n; i++)
//	{
//		scanf("%d", &a[i]);
//		b[i] = a[i] - a[i - 1];
//	}
//	for (long i = 1; i <= p; i++)
//	{
//		int x, y, c;
//		scanf("%d %d %d", &x, &y, &c);
//		b[x] += c;
//		b[y + 1] -= c;
//	}
//	for (long i = 1; i <= n; i++)
//	{
//		a[i] = b[i] + a[i - 1];
//		if (min > a[i])
//			min = a[i];
//	}
//	printf("%d", min);
//	return 0;
//}