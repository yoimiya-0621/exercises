#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
int a[401][401] = { 0 };
int n, m, x, y;
void dps(int a[401][401], int x, int y,int t)
{
	if (x - 2 >= 1 && y - 1 >= 1 && a[x - 2][y - 1] == 0)
	{
		a[x - 2][y - 1] = t + 1;
		dps(a, x - 2, y - 1, t + 1);
	}
	if (x - 2 >= 1 && y + 1 <= m && a[x - 2][y + 1] == 0)
	{
		a[x - 2][y + 1] = t + 1;
		dps(a, x - 2, y + 1, t + 1);
	}
	if (x + 2 <= n && y - 1 >= 1 && a[x + 2][y - 1] == 0)
	{
		a[x + 2][y - 1] = t + 1;
		dps(a, x + 2, y - 1, t + 1);
	}
	if (x + 2 <= 1 && y + 1 <= m && a[x + 2][y + 1] == 0)
	{
		a[x + 2][y + 1] = t + 1;
		dps(a, x + 2, y + 1, t + 1);
	}

	if (x - 1 >= 1 && y - 2 >= 1 && a[x - 1][y - 2] == 0)
	{
		a[x - 1][y - 2] = t + 1;
		dps(a, x - 1, y - 2, t + 1);
	}
	if (x - 1 >= 1 && y + 2 <= m && a[x - 1][y + 2] == 0)
	{
		a[x - 1][y + 2] = t + 1;
		dps(a, x - 1, y + 2, t + 1);
	}
	if (x + 1 <= n && y - 2 >= 1 && a[x + 1][y - 2] == 0)
	{
		a[x + 1][y - 2] = t + 1;
		dps(a, x + 1, y - 2, t + 1);
	}
	if (x + 1 <= n && y + 2 <= m && a[x + 1][y + 2] == 0)
	{
		a[x + 1][y + 2] = t + 1;
		dps(a, x + 1, y + 2, t + 1);
	}
}
int main()
{
	scanf("%d %d %d %d", &n, &m, &x, &y);
	a[x][y] = 1;
	dps(a, x, y,1);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
			printf("%4d", a[i][j]-1);
		printf("\n");
	}
	return 0;
}