#include <iostream>
#include <algorithm>
using namespace std;
#define MOD 1000007
int main()
{
	long long ans = 0;
	int n, m;
	cin >> n >> m;
	int a[105] = { 0 };
	int dp[105][105] = { 0 };
	dp[0][0] = 1;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j<=m; j++)
		{
			for (int k = 0; k <= min(a[i], j); k++)
			{
				dp[i][j] += dp[i - 1][j - k];
			}
		}
	}
	cout << dp[n][m];
	return 0;
}