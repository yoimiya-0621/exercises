//#define _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//int a[50][50] = { 0 };
//int dx[4] = { 0,0,1,-1 };
//int dy[4] = { 1,-1,0,0 };
//int x0, y0, x1, y1,xx[50], yy[50];
//int m, n, t;
//long long ans = 0;
//void dfs(int x, int y)
//{
//	for (int i = 0; i < t; i++)
//	{
//		if (x == xx[i] && y == yy[i])
//			return;
//	}
//	if (x<1 || x>n || y<1 || y>m)
//		return;
//	if (x == x1 && y == y1)
//		ans++;
//	for (int i = 0; i < 4; i++)
//	{
//		if (a[x + dx[i]][y + dy[i]] == 0)
//		{
//			a[x + dx[i]][y + dy[i]] = 1;
//			dfs(x + dx[i], y + dy[i]);
//			a[x + dx[i]][y + dy[i]] = 0;
//		}
//	}
//}
//int main()
//{
//	scanf("%d %d %d", &n, &m, &t);
//	scanf("%d %d %d %d", &x0, &y0, &x1, &y1);
//	for(int i=0;i<t;i++)
//	scanf("%d %d", &xx[i], &yy[i]);
//	a[x0][y0] = 1;
//	dfs(x0, y0);
//	printf("%lld", ans);
//	return 0;
//}

