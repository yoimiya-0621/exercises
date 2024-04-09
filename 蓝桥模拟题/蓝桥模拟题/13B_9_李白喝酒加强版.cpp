//#include <iostream>
//using namespace std;
//#define MOD 1000000007;
//int n, m;
//long long ans = 0;
//void dfs(int x, int y, int jiu)
//{
//	if (x == 0 && y == 2 && jiu == 2)
//	{
//		ans++;
//		ans %= MOD;
//		return;
//	}
//	if (x < 0 || y < 0 || jiu < 0)
//		return;
////	dfs(x - 1, y, jiu * 2);
////	dfs(x, y - 1, jiu - 1);
////}
////int main()
////{
////	int jiu = 2;
////	cin >> n >> m;
////	dfs(n, m, jiu);
////	cout << ans;
////	return 0;
////}
//
//#include <iostream>
//using namespace std;
//int n,m,dp[105][105][105] = { 0 };
//int main()
//{
//	cin >> n>>m;
//	dp[2][0][0] = 1;
//	for(int i=0;i<=n;i++)
//		for(int j=0;j<=m;j++)
//			for (int k = 0; k <= 2 * n; k++)
//			{
//				if (j >= 1)
//				{
//					dp[k][i][j] += dp[k + 1][i][j - 1];
//				}
//				if (k % 2 == 0 && i >= 1)
//				{
//					dp[k][i][j] += dp[k / 2][i - 1][j];
//				}
//				dp[k][i][j] %= 1000000007;
//			}
//	cout << dp[1][n][m-1];
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int dp[105][105][105];
//int main() {
//	int n, m;
//	cin >> n >> m;
//	dp[2][0][0] = 1;
//	for (int i = 0; i <= n; i++) {
//		for (int j = 0; j <= m; j++) {
//			for (int k = 0; k <= 2*n; k++) {
//				if (j >= 1) 
//				{
//					dp[k][i][j] += dp[k + 1][i][j - 1];
//				}
//				if (k % 2 == 0 && i >=1 ) 
//				{
//					dp[k][i][j] += dp[k / 2][i - 1][j];
//				}
//				dp[k][i][j] %= 1000000007;
//			}
//		}
//	}
//	cout << dp[1][n][m-1];
//	return 0;
//}