#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//struct SEG
//{
//	char s;
//	long a;
//	char ch;
//	long b;
//}arr[100];
//struct SEG read()
//{
//	struct SEG x;
//	scanf("%ld%c%ld", &x.a, &x.ch, &x.b);
//	if (x.a < 0)
//	{
//		x.s = '-';
//		x.a = -x.a;
//	}
//	else
//		x.s = '+';
//	return x;
//}
//long f(long a, long b)
//{
//	long f,x=a,y=b;
//	if (x < y)
//	{
//		long z = y % x;
//		while (z)
//		{
//			y = x;
//			x = z;
//			z = y % x;
//		}
//		f = x;
//	}
//	else
//	{
//		long z = x % y;
//		while (z)
//		{
//			x = y;
//			y = z;
//			z = x % y;
//		}
//		f = y;
//	}
//	return a*b/f;
//}
//long ff(long x, long y)
//{
//	long z = y % x;
//	while (z)
//	{
//		y = x;
//		x = z;
//		z = y % x;
//	}
//	return  y;
//}
//struct SEG add(struct SEG x, struct SEG y)
//{
//	if (x.s == y.s)
//	{
//		x.a = x.a + y.a;
//	}
//	else if (x.s == '-')
//	{
//		if (x.a <= y.a)
//		{
//			x.a = y.a - x.a;
//			x.s = '+';
//		}
//		else
//		{
//			x.a = x.a - y.a;
//		}
//	}
//	else
//	{
//		if (x.a <= y.a)
//		{
//			x.a = y.a - x.a;
//			x.s = '-';
//		}
//		else
//		{
//			x.a = x.a - y.a;
//		}
//	}
//	return x;
//}
//int main()
//{
//	long n, max = 1;
//	scanf("%ld", &n);
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = read();
//		max = f(arr[i].b, max);
//	}
//	struct SEG sum = { '+',0,'/',max };
//	for (int i = 0; i < n; i++)
//	{
//		arr[i].a = arr[i].a * (max / arr[i].b);
//		arr[i].b = max;
//		sum = add(sum, arr[i]);
//	}
//	int x = sum.a / sum.b;
//	int y = sum.a % sum.b;
//	if (sum.s == '-')
//		printf("-");
//	printf("%d", x);
//	if (y)
//	{
//		if (ff(y, max) == 1)
//			printf(" %d/%d", y, max);
//		else
//		{
//			int z = ff(y, max);
//			printf(" %d/%d", y / z, max / z);
//		}
//	}
//	return 0;
//}