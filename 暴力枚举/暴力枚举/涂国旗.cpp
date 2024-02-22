//#define _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//#include <cmath>
//char a[50][50];
//int ans = 0,min=5000;
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s", a[i]);
//	}
//	int i,j;
//	for (i = 1; i <n-1; i++)
//	{
//		for (j = i; j < n - 1; j++)
//		{
//			ans = 0;
//			for (int x = 0; x < n; x++)
//			{
//				for (int y = 0; y < m; y++)
//				{
//					if (x < i && a[x][y] != 'W')
//						ans++;
//					if (x >= i && x <= j && a[x][y] != 'B')
//						ans++;
//					if (x > j && a[x][y] != 'R')
//						ans++;
//				}
//			}
//			if (ans < min)
//				min = ans;
//		}
//	}
//	printf("%d", min);
//}