#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	
//	int n, m;
//	int a[1001][1001] = { 0 };
//	int b[1001][1001] = { 0 };
//	scanf("%d %d", &n, &m);
//	int x1, y1, x2, y2;
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
//		for (int j = x1; j <= x2; j++)
//		{
//			b[j][y1]++;
//			b[j][y2 + 1]--;
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			a[i][j] = a[i][j - 1] + b[i][j];
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}