#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//int ans = 0;
//int f(int n)
//{
//	if (n == 0)
//		return 0;
//	while (1)
//	{
//		for (int i = 24; i >= 1; i--)
//		{
//			if (sqrt((double)(n + 1) / 2) == i)
//			{
//				return n;
//			}
//		}
//			n--;
//			ans++;
//	}
//}
//void print(int m, char c)
//{
//	int r = sqrt((double)(m + 1) / 2);
//	for (int row = 1; row <= r; row++)
//	{
//		for (int col = 1; col <= 2 * r - 1-row+1; col++)
//		{
//			if (col <= row - 1)
//				printf(" ");
//			else
//				printf("%c", c);
//		}
//		printf("\n");
//	}
//	for (int row = 1; row < r; row++)
//	{
//		for (int col = 1; col <= 2*r-1-(r-row)+1; col++)
//		{
//			if (col >=r-row)
//				printf("%c",c);
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n;
//	char c;
//	scanf("%d %c", &n,&c);
//	int m = f(n);
//	print(m, c);
//	printf("%d", ans);
//	return 0;
//}