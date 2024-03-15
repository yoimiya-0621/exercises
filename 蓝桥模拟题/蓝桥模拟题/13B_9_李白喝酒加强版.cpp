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
//	dfs(x - 1, y, jiu * 2);
//	dfs(x, y - 1, jiu - 1);
//}
//int main()
//{
//	int jiu = 2;
//	cin >> n >> m;
//	dfs(n, m, jiu);
//	cout << ans;
//	return 0;
//}