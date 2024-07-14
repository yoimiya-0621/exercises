//////A
////#include <iostream>
////using namespace std;
////void solve()
////{
////    long long m;
////    cin >> m;
////    long long i = 1;
////    while (1)
////    {
////        if ((1 + i * m) % 2 == 0)
////        {
////            cout << (1 + i * m) / 2;
////            return;
////        }
////        i++;
////    }
////}
////int main()
////{
////
////    solve();
////    return 0;
////}
//
////B
////#include <iostream>
////using namespace std;
////int main()
////{
////	int n;
////	long long sum = 0;
////	cin >> n;
////	string a[110];
////	for (int i = 0; i < n; i++)
////	{
////		cin >> a[i];
////		for (int j = 0; j < a[i].size(); j++)
////		{
////			sum += a[i][j] - '0';
////		}
////	}
////	if (sum % 3 == 0)
////		cout << "YES";
////	else
////		cout << "NO";
////	return 0;
////}
//
////C
////#include <iostream>
////#include <algorithm>
////using namespace std;
////int main()
////{
////	double x, y, a, b, c, t;
////	cin >> x >> y >> t >> a >> b >> c;
////	double time = 0;
////	if (x <= t) {
////		time = (double)(100 - x) / c;
////	}
////	else
////	{
////		time = min((double)(100 - x) / b, (double)(x - t) / y + (double)(100 - t) / c);
////	}
////	printf("%.8lf", time);
////	return 0;
////}
//
////D
////#include <iostream>
////#include <algorithm>
////#include <deque>
////using namespace std;
////#define ll long long
////int main()
////{
////	ios::sync_with_stdio(false);
////	cin.tie(0);
////	string a;
////	ll b;
////	cin >> a >> b;
////	deque<ll>ans;
////	for (int i = sqrt(b); i >=1; i--)
////	{
////		if (b % i == 0)
////		{
////			ans.push_back(i);
////			ans.push_front(b / i);
////		}
////	}
////	for (int i = 0; i < ans.size(); i++)
////	{
////		int k = 0;
////		ll sum = 0;
////		if ((a[a.size() - 1] - '0') % 2 == 1 && ans[i] % 2 == 0)
////			continue;
////		for (int j = 0; j < a.size(); j++)
////		{
////			sum = sum * 10 + a[j] - '0';
////			k++;
////			if (sum >= ans[i])
////			{
////				sum -= sum / ans[i]*ans[i];
////			}
////		}
////		if (sum == 0)
////		{
////			cout << ans[i];
////			break;
////		}
////	}
////	return 0;
////}
//
////E
////#include <iostream>
////using namespace std;
////#define ll long long
////ll a[510][510];
////int n;
////ll ans = 1e9;
////ll b[510] = { 0 };
////void dfs(int x, int y,ll k)
////{
////	if (k > ans)
////		return;
////	if (x == n - 1 && y == n - 1)
////	{
////		ans = min(ans, k);
////	}
////	if (x > n - 1 || y > n - 1)
////		return;
////	dfs(x, y + 1, max(k, a[x][y + 1]));
////	dfs(x + 1, y, max(k, a[x + 1][y]));
////
////}
////int main()
////{
////	cin >> n;
////	for (int i = 0; i < n; i++)
////	{
////		for (int j = 0; j < n; j++)
////		{
////			cin >> a[i][j];
////		}
////	}
////	dfs(0, 0,a[0][0]);
////	cout << ans;
////	return 0;
////}
//
////F
//#include <iostream>
//using namespace std;
//const int N = 5e5 + 10;
//#define ll long long
//ll a[N];
//int n, q;
//ll ans;
//ll dp1[N] = { 0 };
//ll dp2[N] = { 0 };
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//	}
//	ll l, r;
//	cin >> q;
//	while (q--)
//	{
//		cin >> l >> r;
//		for (int i = l; i <= r; i++)
//		{
//			dp1[i] = max(dp1[i - 1] + a[i], a[i]);
//			dp2[i] = min(dp2[i - 1] + a[i], a[i]);
//		}
//		for (int i = l; i <= r; i++)
//		{
//			ans = max(abs(dp1[i]), abs(dp2[i]),ans);
//		}
//		cout << ans << '\n';
//		memset(dp1, 0, sizeof(dp1));
//		memset(dp2, 0, sizeof(dp2));
//		ans = -1e9;
//	}
//	return 0;
//}