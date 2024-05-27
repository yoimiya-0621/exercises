//A
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n;
//    cin >> n;
//    cout << n / 3;
//    return 0;
//}
//#include <iostream>
//#include <algorithm>
//#include <map>
//using namespace std;
//#define ll long long
//const int N = 1e5 + 10;
//ll a[N];
//int main()
//{
//	int n;
//	cin >> n;
//	map<ll, ll>mp;
//	ll m = 0;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//		mp[a[i]] += 1;
//		m = max(mp[a[i]], m);
//	}
//	cout << m;
//	return 0;
//}
// //C
//#include <iostream>
//using namespace std;
//int main()
//{
//	int t,k=0,ans=0;
//	cin >> t;
//	string s;
//	while (t--)
//	{
//		cin >> s;
//		for (int i = 0; i < s.size(); i++)
//		{
//			if (s[i] == '0')
//				k++;
//		}
//		if (k == s.size() - 1)
//			cout << ans<<'\n';
//		else
//		{
//			int flag = 0;
//			for (int i = s.size() - 1; i >= 1; i--)
//			{
//				if (flag)
//				{
//					if (s[i] == '9')
//						continue;
//					else
//					{
//						flag = 0;
//						s[i] += 1;
//					}
//				}
//				if (s[i] == '0')
//					;
//				else
//				{
//					ans += 1+'9' - s[i];
//					flag = 1;
//				}
//			}
//			cout << ans<<'\n';
//		}
//		ans = 0;
//		k = 0;
//	}
//	return 0;
//}

//D
//#include <iostream>
//#include <algorithm>
//#include <map>
//#include <vector>
//using namespace std;
//#define ll long long
//const int N = 1e5 + 5;
//int a[N];
//int f(int x)
//{
//	int ans = 0;
//	for (int i = 1; i < sqrt(x); i++)
//	{
//		if (x % i == 0)
//			ans += 2;
//	}
//	if ((int)sqrt(x) *(int) sqrt(x) == x)
//		ans += 1;
//	return ans;
//}
//int n, q;
//void solve() {
//	cin >> n >> q;
//	//vector<int> f(maxn, 0); // f[i] 数i的因子数
//	//for (int i = 1; i <= 100000; i++) {
//	//	for (int j = i; j <= 100000; j += i) {
//	//		f[j] += 1;
//	//	}
//	//}
//	vector<vector<int>> pos(130);
//	for (int i = 1; i <= n; i++) {
//		int x;
//		cin >> x;
//		x = f(x);
//		pos[x].push_back(i);
//	}
//
//	while (q--) {
//		int l, r;
//		cin >> l >> r;
//		ll res = 0;
//		for (int i = 1; i <= 128; i++) {
//			auto it1 = upper_bound(pos[i].begin(),pos[i].end(),r);
//			auto it2 = lower_bound(pos[i].begin(), pos[i].end(), l);
//			int u = it1 - it2;
//			res += (ll)u * (u - 1) / 2;
//		}
//		cout << res << '\n';
//	}
//}
//int main()
//{
//	int b[10] = { 1,2,3,5,5,5,6,7 };
//	cout << lower_bound(b, b + 8, 5)-b<<'\n';
//	cout << upper_bound(b, b + 8, 5)-b << '\n';
//	cout << lower_bound(b, b + 8, 4) - b << '\n';
//	cout << upper_bound(b, b + 8, 4) - b << '\n';
//	//int n, q,l,r,ans=0,i1,i2;
//	//cin >> n >> q;
//	//for (int i = 1; i <= n; i++)
//	//{
//	//	cin >> a[i];
//	//	a[i] = f(a[i]);
//	//	//cout << a[i] << ' ';
//	//}
//	////cout << '\n';
//	//while (q--)
//	//{
//	//	ans = 0;
//	//	cin >> l >> r;
//	//	map<int, int>mp;
//	//	for (int i = l; i <= r; i++)
//	//	{
//	//		if (mp[a[i]] == 0)
//	//		{
//
//	//		}//
//	//		mp[a[i]] += 1;
//	//	}
//	//	cout << ans <<'\n';
//	//}
//
//	solve();
//	return 0;
//}
//
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int f(int x)
{
	int ans = 0;
	for (int i = 1; i < sqrt(x); i++)
	{
		if (x % i == 0)
			ans += 2;
	}
	if ((int)sqrt(x) * (int)sqrt(x) == x)
		ans++;
	return ans;
}
int main()
{
	int n, q,x;
	cin >> n >> q;
	vector<vector<int>>a(250);
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		x = f(x);
		a[x].push_back(i);
	}
	int l, r;
	long long ans = 0;
	while (q--)
	{
		cin >> l >> r;
		ans = 0;
		for (int i = 1; i <= 128; i++)
		{
			auto c1 = lower_bound(a[i].begin(), a[i].end(), l);
			auto c2 = upper_bound(a[i].begin(), a[i].end(), r);
			long long res = c2 - c1;
			ans += res*(res-1)/2;
		}
		cout << ans << '\n';
	}
	return 0;
}