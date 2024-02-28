//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int v, n;
//	int a[35] = { 0 };
//	cin >> v >> n;
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//	int dp[30000] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = v; j >=a[i]; j--)
//		{
//			dp[j] = max(dp[j], dp[j - a[i]] + a[i]);
//		}
//	}
//	cout << v-dp[v];
//	return 0;
//}