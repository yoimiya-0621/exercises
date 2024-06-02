//#include <iostream>
//#include <algorithm>
//using namespace std;
//#define ll long long 
//const int N = 1e3 + 10;
//ll p[N];
//ll s[N];
//struct S {
//	ll s1;
//	ll s2;
//}c[N];
//bool cmp(S c1, S c2)
//{
//	return c1.s1 < c2.s1;
//}
//int main()
//{
//	int n;
//	ll b;
//	cin >> n>>b;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> p[i] >> s[i];
//		c[i].s1 = s[i] + p[i];
//		c[i].s2 = p[i] / 2 + s[i];
//	}
//	sort(c, c + n, cmp);
//	int ans = 0;
//	int count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (b > c[i].s2) {
//			count = 1;
//			ll x = b - c[i].s2;
//			for (int j = 0; j < n; j++)
//			{
//				if (j != i && c[j].s1 <= x) {
//					count++;
//					x -= c[j].s1;
//				}
//			}
//			ans = max(count, ans);
//		}
//	}
//	cout << ans;
//	return 0;
//}