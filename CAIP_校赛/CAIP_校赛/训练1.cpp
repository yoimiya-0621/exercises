//A
//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	double a[100010] = { 0 };
//	double sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//		sum += a[i];
//	}
//	sum /= n;
//	double ans = 0;
//	for (int i = 0; i < n; i++)
//	{
//		ans += pow(sum - a[i], 2);
//	}
//	ans /= n - 1;
//	printf("%.2lf", ans);
//	return 0;
//}
//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	string s;
//	vector<string>ans;
//	while (cin >> s)
//	{
//		ans.push_back(s);
//	}
//	for (int i = ans.size() - 1; i >= 0; i--)
//	{
//		for (int j = 0; j < ans[i].size(); j++)
//		{
//			if (isdigit(ans[i][j]))
//				cout << ans[i][j] + 'a' - '0';
//			else if (ans[i][j] >= 'a' && ans[i][j] <= 'z')
//				cout << ans[i][j] - 'a' + '0';
//			else
//				cout << ans[i][j];
//		}
//	}
//	return 0;
//}

//C
//#include <iostream>
//#include <map>
//using namespace std;
//#define ll long long 
//ll n;
//ll s, e, d;
//ll m;
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		map<ll, int>a;
//		int flag = 0;
//		cin >> n;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> s >> e >> d;
//			ll j = 0;
//			for (j = s; j <= e; j += d)
//			{
//				a[j] += 1;;
//			}
//			m = max(m, min(e,j-d));
//		}
//		for (int i = 1; i <= m; i++)
//		{
//			if (a[i] % 2 == 1)
//			{
//				flag = 1;
//				cout << i << ' ' << a[i] << '\n';
//				break;
//			}
//		}
//		if (!flag)
//		{
//			cout << "There's no weakness." << '\n';
//		}
//		m = 0;
//	}
//	return 0;
//}

//D
//#include <iostream>
//using namespace std;
//int main()
//{
//	int n, m, d;
//	cin >> n >> m >> d;
//	int dp[10000] = { 0 };
//	int w[10000] = { 0 }, v[10000] = { 0 }, t[10000] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		cin >> t[i] >> w[i] >> v[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = m; j >= w[i]; j--)
//		{
//			dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
//		}
//	}
//	cout << dp[m];
//	return 0;
//}

#include <iostream>
using namespace std;
int main()
{
	int n, m, d, t;
	cin >> n >> m >> d;
	int dp1[5010] = { 0 }, dp2[5010] = { 0 };
	int w1[5010] = { 0 }, w2[5010] = { 0 }, v1[5010] = { 0 }, v2[5010] = { 0 };
	int k1 = 0, k2 = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> t;
		if (t == 0)
		{
			cin >> w1[k1] >> v1[k1];
			k1++;
		}
		else
		{
			cin >> w2[k2] >> v2[k2];
			k2++;
		}
	}
	for (int i = 0; i < k1; i++)
	{
		for (int j = m; j >= w1[i]; j--)
		{
			dp1[j] = max(dp1[j], dp1[j - w1[i]] + v1[i]);
		}
	}
	for (int i = 0; i < k2; i++)
	{
		for (int j = m; j >= w2[i]; j--)
		{
			dp2[j] = max(dp2[j], dp2[j - w2[i]] + v2[i]);
		}
	}
	for (int i = m; i >= 1; i--)
	{
		if (dp1[i] == dp1[i - 1])
			dp1[i] = 0;
		if (dp2[i] == dp2[i - 1])
			dp2[i] = 0;
	}
	int ans = 0;
	for (int l = 1; l <= m; l++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (abs(l - j) <= d && l + j <= m)
				ans = max(ans, dp1[l] + dp2[j]);
		}
	}
	cout << ans;
	return 0;
}