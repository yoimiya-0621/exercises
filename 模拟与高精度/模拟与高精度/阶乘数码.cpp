//#define _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//int main()
//{
//	int t;
//	scanf("%d", &t);
//	for (int i = 0; i < t; i++)
//	{
//		int n, a,sum=0;
//		scanf("%d %d", &n, &a);
//		int c[100000] = { 1 };
//		int w = 1;
//		for (int j = 2; j <= n; j++)
//		{
//			int y = 0;
//			for (int k = 0; k < w; k++)
//			{
//				c[k] = c[k] * j+y;
//				y = c[k] / 10;
//				c[k] %= 10;
//			}
//			while (y > 0)
//			{
//				c[w] = y % 10;
//				w++;
//				y /= 10;
//			}
//		}
//		for (int j = 0; j < w; j++)
//		{
//			if (c[j] == a)
//				sum++;
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//}