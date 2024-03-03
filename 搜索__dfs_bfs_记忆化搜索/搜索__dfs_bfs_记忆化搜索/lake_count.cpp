#include <iostream>
using namespace std;
char a[105][105] = { 0 };
int ans = 0;
int m, n;

void dfs(int x, int y)
{
	a[x][y] = '.';
	for (int i = -1; i <= 1; i++)
	{
		for (int j = -1; j <= 1; j++)
		{
			if (a[x+i][y+j] == 'W')
			{
				dfs(x+i, y+j);
			}
		}
	}
}
int main()
{
	cin >> m >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	for(int i=0;i<m;i++)
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == 'W')
			{

				dfs(i, j);
				ans++;
			}
		}
	cout << ans;
	return 0;
}