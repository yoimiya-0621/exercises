//#include <iostream>
//using namespace std;
//long long ans = 0;
//void dfs(int x, int y)
//{
//	if (x == 1 && y == 1)
//		return;
//	ans++;
//	if (x > y)
//	{
//		dfs(x - 1, y);
//		dfs(1, y);
//	}
//	else
//	{
//		dfs(x, y - 1);
//		dfs(x, 1);
//	}
//}
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	dfs(n, m);
//	cout << ans + 4;
//	return 0;
//}