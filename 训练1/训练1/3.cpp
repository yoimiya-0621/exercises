#include <iostream>
#include <string>
using namespace std;
int n, m;
int a[105][105] = { 0 };
bool b[105][105] = { false };
int k = 0, sum = 100000000;
struct S
{
	int x;
	int y;
}ans[105];
struct S aa[105];
void dfs(int x, int y)
{
	if (x<1 || x>m || y<1 || y>n)
		return;
	if (x == m && y == n)
	{
		if (sum > k)
		{
			for (int t = 0; t <= k; t++)
				aa[t] = ans[t];
			sum = k;
		}
		return;
	}
	if (x + 1 >= 1 && x + 1 <= m && b[x + 1][y] == false && a[x + 1][y] == 0) {
		k++;
		ans[k].x = x + 1;
		ans[k].y = y;
		b[x + 1][y] = true;
		dfs(x + 1, y);
		b[x + 1][y] = false;
		k--;
	}
	if (x - 1 >= 1 && x - 1 <= m && b[x - 1][y] == false && a[x - 1][y] == 0) {
		k++;
		ans[k].x = x - 1;
		ans[k].y = y;
		b[x - 1][y] = true;
		dfs(x - 1, y);
		b[x - 1][y] = false;
		k--;
	}
	if (y - 1 >= 1 && y - 1 <= n && b[x][y - 1] == false && a[x][y - 1] == 0) {
		k++;
		ans[k].x = x;
		ans[k].y = y - 1;
		b[x][y - 1] = true;
		dfs(x, y - 1);
		b[x][y - 1] = false;
		k--;
	}
	if (y + 1 >= 1 && y + 1 <= n && b[x][y + 1] == false && a[x][y + 1] == 0) {
		k++;
		ans[k].x = x;
		ans[k].y = y + 1;
		b[x][y + 1] = true;
		dfs(x, y + 1);
		b[x][y + 1] = false;
		k--;
	}
}

int main()
{
	while (cin >> m >> n)
	{
		if (m == -1)
			break;
		k = 0;
		memset(a, 0, sizeof(a));
		memset(b, false, sizeof(b));
		memset(ans, 0, sizeof(ans));
		memset(aa, 0, sizeof(aa));
		sum = 100000000;
		for (int i = 1; i <= m; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				cin >> a[i][j];
			}
		}
		b[1][1] = true;
		ans[k].x = 1;
		ans[k].y = 1;
		dfs(1, 1);
		if (sum == 100000000)
			cout << "NO FOUND" << "\n";
		else
		{
			for (int t = 0; t <= sum; t++)
			{
				cout << aa[t].x << "," << aa[t].y << "\n";
			}
			cout << "\n";
		}
	}
	return 0;
}