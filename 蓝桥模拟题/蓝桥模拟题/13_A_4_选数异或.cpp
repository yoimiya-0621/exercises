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
//#include <iostream>
//#include <algorithm>
//using namespace std;
//#define ll long long
//ll dp[100010] = { 0 };
//ll last[100010] = { 0 };
//ll n, m, x, a;
//int main()
//{
//	cin >> n >> m >> x;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a;
//		dp[i] = max(dp[i - 1], last[a ^ x]);
//		last[a] = i;
//	}
//	int l, r;
//	while (m--)
//	{
//		cin >> l >> r;
//		if (dp[r] >= l)
//			cout << "yes";
//		else
//			cout << "no";
//		cout << "\n";
//	}
//	return 0;
//}

//#include <iostream>
//#include <algorithm>
//#include <map>
//using namespace std;
//long long n, m, mi = 500000;
//struct C {
//	int a;
//	int b;
//}c[200005];
//bool cmp(C a, C b)
//{
//	if (a.a != b.a)
//		return a.a < b.a;
//	else
//		return a.b < b.b;
//}
//map<int, long long>ma;
//int main()
//{
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//		cin >> c[i].a;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> c[i].b;
//		ma[i] = c[i].b + c[i].a;
//		mi = min(mi, ma[i]);
//	}
//	sort(c, c + n, cmp);
//	long long sum = 0, i = 0, ans = c[0].a;
//	while (i + 1 < n) {
//		if (c[i + 1].a - c[i].a <= c[i].b)
//		{
//			sum += (c[i + 1].a - c[i].a) * (i + 1);
//			if (sum > m)
//				break;
//			ans = c[i + 1].a;
//			if (ans > mi)
//			{
//				ans = mi;
//				break;
//			}
//		}
//		else
//			break;
//		i++;
//	}
//	cout << ans;
//	return 0;
//}

#include <iostream>
using namespace std;
string s, ans;
int main()
{
	cin >> s;
	for (int i = 0; i + 1 < s.size(); i++)
	{
		if (s[i] == s[i + 1] && s[i] == 'L')
		{

		}
		else
		{
			ans.push_back(s[i]);
		}
	}
	ans.push_back(s[s.size() - 1]);
	cout << ans;
	return 0;
}