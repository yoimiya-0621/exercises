//A
//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int a, b, x;
//    cin >> a >> b >> x;
//    if (min(a, b) + x > max(a, b))
//        cout << "YES";
//    else
//        cout << "NO";
//    return 0;
//}

//B,c
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	/*if (a > b)
//		swap(a, b);
//	if (a > c)
//		swap(a, c);
//	if (b > c)
//		swap(b, c);
//		*/
//	int ma= 0;
//	ma = max(ma, a + b + c);
//	ma = max(ma, c * a * b);
//	ma = max(ma, (a + b) * c);
//	ma = max(ma, a * (b + c));
//	cout << ma;
//	return 0;
//}

//D
//#include <iostream>
//#include <algorithm>
//#include <cmath>
//#include <vector>
//using namespace std;
//const int N = 1e6 + 10;
//int aa[N];
//int cc[N];
//int main()
//{
//	int T;
//	cin >> T;
//	int a, b, c;
//	int a1, a2, b1, b2,k1,k2;
//	while (T--)
//	{
//		cin >> a >>b >> c;
//		k1 = 0;
//		k2 = 0;
//		if (c == 0)
//		{
//			if (b == 0)
//				cout << 1 << ' ' << 0 << " " << a << ' ' << 0 << '\n';
//			else
//			{
//				cout << a << " " << b << ' ' << 1 << ' ' << 0 << '\n';
//			}
//			continue;
//		}
//		for (int i = -abs(a); i <= abs(a); i++) {
//			if (i == 0)
//				continue;
//			if (a % i == 0)
//				aa[k1++] = i;
//		}for (int i = -abs(c); i <= abs(c); i++) {
//			if (i == 0)
//				continue;
//			if (c % i == 0)
//				cc[k2++] = i;
//		}
//		int flag = 0;
//		if (c == 0)
//		{
//			if (b == 0)
//				cout << 1<<' '<<0<<" "<<a << ' ' << 0 << '\n';
//			else
//			{
//				cout << a << " " << b <<' '<< 1 << ' ' << 0 << '\n';
//			}
//		}
//		for (int i = 0; i <k1; i++)
//		{
//			for (int j =0; j <k2; j++)
//			{
//				if (aa[i]*c/cc[j]+a/aa[i]*cc[j]==b)
//				{
//					flag = 1;
//					a1 = aa[i];
//					a2 = a/aa[i];
//					b1 = cc[j];
//					b2 = c / cc[j];
//					break;
//				}
//			}
//			if (flag)
//				break;
//		}
//
//		if (flag)
//			cout << a1<<" "<<b1<<" "<<a2<<" "<<b2 << '\n';
//		else
//			cout << "NO" << "\n";
//	}
//	return 0;
//}

//E
//#include <iostream>
//#include <algorithm>
//using namespace std;
//#define mod 998244353
//const int N = 1e6 + 10;
//struct T {
//
//};
//int main()
//{
//	int n;
//	cin >> n;
//	return 0;
//}
//

//#include <iostream>
//#include <vector>
//#include <map>
//using namespace std;
//const int N = 2e5 + 5;
//#define int long long
//const int mod = 998244353;
//int a[N], b[N], c[N], du[N];
//vector<int>v[N];
//int n, m, k, ans, maxx = 0, root = 0, x, y, maxdep = 0;
//bool temp;
//map<int, int>mp;
//int kuai(int x, int y) {
//	int sum = 1;
//	while (y) {
//		if (y % 2) {
//			y--;
//			sum *= x;
//			sum %= mod;
//		}
//		x *= x;
//		y /= 2;
//		x %= mod;
//	}
//	return sum;
//}
//void dfs(int now, int fu) {//目前的节点，这个节点的父节点，还有目前从起点开始链接到的权值 
//	du[now] = du[fu] + 1;//now这个节点的度是多少 （应该是深度）
//	maxdep = max(maxdep, du[now]);
//	a[du[now]]++;//度为du【now】的总数加一
//	b[du[now]] += (now > 1 && v[now].size() == 1);//叶子节点的数量
//	for (auto i : v[now]) {
//		if (i == fu) continue;
//		dfs(i, now);
//	}
//}
//void solve() {
//	cin >> n;
//	for (int i = 1; i < n; i++) {
//		cin >> x >> y;
//		v[x].push_back(y);
//		v[y].push_back(x);
//	}
//	dfs(1, 0);//根节点是1，直接开始遍历 
//	ans = 1;
//	c[1] = 1;
//	for (int i = 2; i <= maxdep; i++) {
//		c[i] = c[i - 1] * (a[i] - b[i]) % mod * (kuai(a[i], mod - 2)) % mod;
//		ans += c[i]; ans %= mod;
//	}
//	cout << ans << endl;
//}
//signed main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(0), cout.tie(0); // cin.tie(nullptr);
//	int T = 1;
//	//cin >> T;
//	for (int i = 1; i <= T; i++)
//	{
//		solve();
//	}
//	cin.get(); cin.get();
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <map>
//using namespace std;
//#define ll long long
//const int N = 1e5 + 10;
//vector<int>v[N];
//ll a[N], b[N], maxdeep;
//ll dp[N];
//ll n;
//long double c[N];
//ll ans = 0;
//const int mod = 998244353;
//void dfs(ll now, ll fu)
//{
//	dp[now] = dp[fu] + 1;
//	maxdeep = max(maxdeep, dp[now]);
//	if (v[now].size() == 1 && now > 1)
//		b[dp[now]]++;
//	a[dp[now]]++;
//	for (ll i = 0; i < v[now].size(); i++)
//	{
//		if (v[now][i] == fu)
//			continue;
//		dfs(v[now][i], now);
//	}
//}
//ll f(ll  x, ll mod)
//{
//	ll k = 0;
//	ll aa = 1;
//	while (1)
//	{
//		aa += k * mod;
//		if (aa % x == 0)
//			return aa / x;
//		k++;
//
//	}
//}
//int main()
//{
//	cin >> n;
//	ll x, y;
//	for (int i = 0; i < n - 1; i++)
//	{
//		cin >> x >> y;
//		v[x].push_back(y);
//		v[y].push_back(x);
//	}
//	dfs(1, 0);
//	c[1] = 1;
//	for (int i = 2; i <= maxdeep; i++)
//	{
//		//c[i] = (c[i - 1] * ((a[i] - b[i]) % mod) * f(a[i], mod)) % mod;
//		c[i] = c[i - 1] * (double)(a[i] - b[i]) / a[i];
//		ans = ans + (1 - c[i]) * (i - 1);
//		ans %= mod;
//	}
//	cout << ans;
//	return 0;
//}