#define _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//int read(int n)
//{
//	int x = 0, f = 1;
//	char c = getchar();
//	while (c < '0' || c>'9' && c < 'A' || c>'F')
//	{
//		if (c == '-')
//			f = -1;
//		c = getchar();
//	}
//	while (c >= '0' && c <= '9' || c >= 'A' && c <= 'F')
//	{
//		if (c >= '0' && c <= '9')
//		{
//			x = x * n + c - 48;
//			c = getchar();
//		}
//		else if (c >= 'A' && c <= 'F')
//		{
//			x = x * n+ c - 65+10;
//			c = getchar();
//		}
//	}
//	return x * f;
//}
//void print(int x, int m)
//{
//	if (x == 0)
//		return;
//	print(x / m, m);
//	if(x%m>=0&&x%m<=9)
//		putchar(x % m+48);
//	if(x%m>=10&&x%m<=15)
//		putchar(x % m + 65-10);
//}
//int main()
//{
//	int n, m;
//	scanf("%d", &n);
//	int x = read(n);
//	scanf("%d", &m);
//	if (x < 0)
//	{
//		printf("-");
//		x = -x;
//	}
//	print(x,m);
//	return 0;
//}