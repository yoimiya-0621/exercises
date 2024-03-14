//#include <iostream>
//#include <cmath>
//using namespace std;
//long long a[1005][1005] = { 0 };
//long long ans = 0;
//int main()
//{
//	int n, m;
//	long long k;
//	cin >> n >> m >> k;
//	for(int i=1;i<=n;i++)
//		for (int j = 1; j <= m; j++)
//		{
//			cin >> a[i][j];
//			a[i][j] += a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
//		}
//	for (int y1 = 1; y1 <= n; y1++)
//	{
//		for (int x1 = 1; x1 <= m; x1++)
//		{
//			for (int y2 = y1; y2 <= n; y2++)
//			{
//				for (int x2 = x1; x2 <= m; x2++)
//				{
//					if (a[y2][x2] - a[y2][x1 - 1] - a[y1 - 1][x2] + a[y1 - 1][x1 - 1] <= k)
//						ans++;
//				}
//			}
//		}
//	}
//	cout << ans;
//	return 0;
//}