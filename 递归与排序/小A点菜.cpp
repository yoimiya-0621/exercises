//#include <iostream>
//using namespace std;
//int main()
//{
//	int dp[101][101] = { 0 };
//	int n, m;
//	cin >> n >> m;
//	int a[101] = { 0 };
//	for (int i = 1; i <= n; i++)
//		cin >> a[i];
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			if (a[i] == j)dp[i][j] = dp[i - 1][j] + 1;
//			else if (a[i] > j)dp[i][j] = dp[i - 1][j];
//			else
//				dp[i][j] = dp[i - 1][j] + dp[i - 1][j - a[i]];
//		}
//	}
//	cout << dp[n][m];
//	return 0;
//}