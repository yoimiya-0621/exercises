//A
//#include <iostream>
//#include <map>
//using namespace std;
//char ch[55];
//int main()
//{
//	int T;
//	cin >> T;
//	int n,m,ans;
//	while (T--)
//	{
//		cin >> n>>m;
//		ans = 0;
//		map<char, int>mp;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> ch[i];
//			mp[ch[i]] += 1;
//		}
//		for (char x = 'A'; x <= 'G'; x++)
//		{
//			if (mp[x] < m)
//				ans += m - mp[x];
//		}
//		cout << ans << '\n';
//		memset(ch, 0, sizeof(ch));
//	}
//	return 0;
//}

//B
//#include <bits/stdc++.h>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//struct S {
//	int a;
//	int flag = 0;
//}s[110];
//bool cmp(S a, S b)
//{
//	if (a.a != b.a)
//		return a.a > b.a;
//	else
//		return a.flag > b.flag;
//}
//int main()
//{
//	int T;
//	cin >> T;
//	int n, f,k;
//	while (T--)
//	{
//		cin >> n >> f>>k;
//		
//		for (int i = 0; i < n; i++)
//		{
//			cin >> s[i].a;
//		}
//		s[f - 1].flag = 1;
//		int x = s[f - 1].a;
//		sort(s, s + n,cmp);
//		if (s[k].a < x)
//			cout << "YES" << '\n';
//		else if (s[k-1].a > x)
//			cout << "NO" << '\n';
//		else
//			cout << "MAYBE" << '\n';
//		memset(s, 0, sizeof(s));
//	}
//	return 0;
//}

//C
//#include <bits/stdc++.h>
//#include <bits/stdc++.h>
//#include <iostream>
//#include <algorithm>
//#include <map>
//using namespace std;
//#define ll long long 
//const int N = 2e5 + 10;
//ll a[N];
//ll b[N];
//ll d[N];
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	int T;
//	cin >> T;
//	int n, m;
//	while (T--)
//	{
//		cin >> n;
//		map<ll, ll>mp;
//		map<ll, ll>mp2;
//		ll sum = 0;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> a[i];
//		}
//		for (int i = 0; i < n; i++)
//		{
//			cin >> b[i];
//			mp2[b[i]] += 1;
//			if (b[i] != a[i])
//			{
//				mp[b[i]] += 1;
//				sum++;
//			}
//		}
//		cin >> m;
//		int flag = 0;
//		for (int i = 0; i < m; i++)
//		{
//			cin >> d[i];
//			if (i == m - 1) {
//				if (!mp2[d[i]])
//				{
//					flag = 1;
//					break;
//				}
//			}
//			if (mp[d[i]]) {
//				mp[d[i]] -= 1;
//				sum--;
//			}
//		}
//		if (sum > 0)
//			flag = 1;
//		if (flag)
//			cout << "NO" << '\n';
//		else
//			cout << "YES" << '\n';
//		memset(a, 0, sizeof(a));
//		memset(b, 0, sizeof(b));
//		memset(d, 0, sizeof(d));
//	}
//	return 0;
//}

//D
//#include <iostream>
//#include <algorithm>
//using namespace std;
//#define ll long long
//const int N = 2e5 + 10;
//ll a[N];
//ll b[N];
//ll gcd(ll a, ll b)
//{
//	if (a < b)
//		swap(a, b);
//	ll z = a % b;
//	while (z) {
//		a = b;
//		b = z;
//		z = a % b;
//	}
//	return b;
//}
//int main()
//{
//	int T;
//	cin >> T;
//	int n;
//	while (T--)
//	{
//		cin >> n;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> a[i];
//			if (i)
//			{
//				b[i] = gcd(a[i], a[i - 1]);
//			}
//		}
//		int flag = 0;
//		for (int i = 1; i < n; i++)
//		{
//			if (i >= 2 && b[i] < b[i - 1]) {
//				flag++;
//
//				if (flag >= 2){
//					break;
//				}
//
//				if (i == n - 1) {
//					break;
//				}
//				if (gcd(a[i - 1], a[i + 1])>=b[i-1]) {
//					b[i] = gcd(a[i - 1], a[i + 1]);
//					b[i+1] = gcd(a[i - 1], a[i + 1]);
//					//b[i-1] = gcd(a[i - 1], a[i + 1]);
//					i++;
//				}
//				else {
//					flag++;
//					break;
//				}
//			}
//
//		}
//		if (flag < 2)
//			cout << "YES" << '\n';
//		else
//			cout << "NO" << '\n';
//		memset(a, 0, sizeof(a));
//		memset(b, 0, sizeof(b));
//
//	}
//	return 0;
//}
