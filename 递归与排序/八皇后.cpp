#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int n;
//int ans;
//int row[20];
//bool col[20], x[41], y[41];
//void dfs(int u)
//{
//	if (u == n + 1)
//	{
//		ans++;
//		if (ans <= 3)
//		{
//			for (int i = 1; i <= n; i++)
//			{
//				printf("%d ", row[i]);
//			}
//			printf("\n");
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (!col[i] && !x[n + i - u] && !y[u + i - 1])
//		{
//			col[i] = true;
//			x[n + i - u] = true;
//			y[u + i - 1] = true;
//			row[u] = i;
//			dfs(u + 1);
//			col[i] = false;
//			x[n + i - u] = false;
//			y[u + i - 1] = false;
//		}
//	}
//}
//int main()
//{
//	scanf("%d", &n);
//	dfs(1);
//	printf("%d", ans);
//	return 0;
//}