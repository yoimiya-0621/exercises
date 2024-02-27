//#define _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int n,sum=0;
//	scanf("%d", &n);
//	int d[100000] = { 0 };
//	for (int i = 1; i <= n; i++)
//	{
//		int c[100000] = { 1 };
//		int w = 1;
//		for (int j = 2; j <= i; j++)
//		{
//			int y = 0;
//			for (int k = 0; k < w; k++)
//			{
//				c[k] = c[k] * j + y;
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
//		int z = 0;
//		for (int j = 0; j < w; j++)
//		{
//			d[j] += c[j]+z;
//			z = d[j] / 10;
//			d[j] %= 10;
//		}
//		while (z > 0)
//		{
//			d[w] += c[w] + z;
//			z = d[w] / 10;
//			d[w] %= 10;
//			w++;
//		}
//		sum = max(sum,w);
//	}
//	for (int i = sum-1; i >= 0; i--)
//		printf("%d", d[i]);
//	return 0;
//}