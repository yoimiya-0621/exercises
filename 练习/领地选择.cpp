#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, m, c;
	int a[1001][1001] = { 0 };
	int sum[1001][1001] = { 0 };
	scanf("%d %d %d", &n, &m, &c);
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			scanf("%d", &a[i][j]);
			sum[i][j] = sum[i - 1][j] - sum[i][j - 1] - sum[i - 1][j - 1] + a[i][j];
		}
	}
	int max = -100;
	int x = 1, y = 1;
	for (int i = 1; i + c - 1<= m; i++)
	{
		for (int j = 1; j +c-1<= n; j++)
		{
			if (max < sum[i - 1 + c][j - 1 + c] - sum[i][j - 1 + c] - sum[i - 1 + c][j] + sum[i - 1][j - 1])
			{
				x = i;
				y = j;
			}
		}
	}
	printf("%d %d", x, y);
	return 0;
}