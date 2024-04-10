//#include <iostream>
//#include <map>
//using namespace std;
//#define ll long long
//int main()
//{
//	int n,m,x;
//	int a[100005] = { 0 };
//	cin >> n>>m>>x;
//	for (int i = 1; i <= n; i++)
//		cin >> a[i];
//	int l, r;
//	while (m--)
//	{
//		cin >> l >> r;
//		map<ll, int>ans;
//		int flag = 0;
//		for (int i = l; i <= r; i++)
//		{
//			ans[a[i]] = 1;
//		}
//		for (int i = l; i <= r; i++)
//		{
//			if (ans[x ^ a[i]] == 1)
//			{
//				flag = 1;
//				cout << "yes" << "\n";
//				break;
//			}
//		}
//		if (!flag)
//			cout << "no" << "\n";
//	}
//	return 0;
//}
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
ll dp[100010] = { 0 };
ll last[100010] = { 0 };
ll n, m, x, a;
int main()
{
	cin >> n >> m >> x;
	for (int i = 1; i <= n; i++)
	{
		cin >> a;
		dp[i] = max(dp[i - 1], last[a ^ x]);
		last[a] = i;
	}
	int l, r;
	while (m--)
	{
		cin >> l >> r;
		if (dp[r] >= l)
			cout << "yes";
		else
			cout << "no";
		cout << "\n";
	}
	return 0;
}