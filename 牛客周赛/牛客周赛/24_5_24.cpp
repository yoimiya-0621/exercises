////A
//#include <iostream>
//#include <map>
//using namespace std;
//int main()
//{
//	string s;
//	map<int, int>mp;
//	int x = 0;
//	for (int i = 1; i <= 9; i++)
//	{
//		cin >> x;
//		mp[i] = x;
//	}
//	cin >> s;
//	for (int i = 0; i < s.size(); i++)
//	{
//		cout << mp[s[i]-'0'];
//	}
//	return 0;
//}
//B
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int a[200010] = { 0 };
//	int m = 0,flag=0;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//		if (i)
//		{
//			m = max(m, a[i - 1]);
//			if (a[i] < m)
//			{
//				flag = 1;
//			}
//		}
//	}
//	if (flag)
//		cout << n;
//	else
//		cout << 0;
//	return 0;
//}
//C
//#include <iostream>
//#include <algorithm>
//using namespace std;
//#define ll long long
//ll a[200010] = { 0 };
//ll b[200010] = { 0 };
//ll c[200010] = { 1e9 };
//ll d[200010] = { 0 };
//
//int main()
//{
//	int n;
//	cin >> n;
//	ll ans = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//		b[i] = b[i - 1] + a[i];
//		c[i] = min(a[i], c[i - 1]);
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		ans = max(ans, b[n] - b[i] - c[i]);
//	}
//	for (int i = n; i >=1 ; i--)
//	{
//		d[n] = a[i];
//		if (i != n)
//		{
//			d[i] = min(a[i], d[i + 1]);
//		}
//		ans = max(ans, b[i-1] - d[i]);
//	}
//	cout << ans;
//	return 0;
//}
//D
//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 2e5 + 10;
//int a[N];
//int b[N];
//int main()
//{
//	int n, flag = 0;;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//		if (i)
//		{
//			if (a[i - 1] % a[i] != 0)
//				flag = 1;
//
//		}
//	}
//	if (flag)
//		cout << -1;
//	return 0;
//}