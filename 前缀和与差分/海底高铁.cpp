//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int n, m,w=0;
//	scanf("%d %d", &n, &m);
//	int p[10001] = { 0 };
//	for (int i = 1; i <= m; i++)
//	{
//		scanf("%d", &p[i]);
//	}
//	int a[10001][3] = { 0 };
//	int sum[10001] = { 0 };
//	for (int i = 1; i <= n-1; i++)
//	{
//		scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
//		if (a[i][0] > a[i][1] + a[i][2])
//			sum[i] = sum[i - 1] + a[i][1];
//		else
//			sum[i] = sum[i - 1] + a[i][0];
//	}
//	for (int i = 1; i<=m-1; i++)
//	{
//		
//		w += (int)fabs(sum[p[i+1]-1] - sum[p[i]-1]);
//	}
//	printf("%d", w);
//	return 0;
//}