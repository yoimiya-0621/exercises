//#define  _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//int m, n, x, y;
//int ans = 0;
//void dps(int i, int j)
//{
//	if (i<0 || i>n || j<0 || j>m)
//		return;
//	if ((i == x - 2 || i == x + 2) && (j == y - 1 || j == y + 1))
//		return;
//	if ((i == x - 1 || i == x + 1) && (j == y - 2 || j == y + 2))
//		return;
//	if (i == x && j == y)
//		return;
//	if (i == n && j == m)
//	{
//		ans++;
//		return;
//	}
//	dps(i + 1, j);
//	dps(i, j + 1);
//}
//int main()
//{
//	scanf("%d %d %d %d", &n, &m, &x, &y);
//	dps(0, 0);
//	printf("%d", ans);
//	return 0;
//}