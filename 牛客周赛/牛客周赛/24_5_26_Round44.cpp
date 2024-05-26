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
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
const int N = 1e5 + 5;
int a[N];
int f(int x)
{
	int ans = 0;
	for (int i = 1; i < sqrt(x); i++)
	{
		if (x % i == 0)
			ans += 2;
	}
	if ((int)sqrt(x) *(int) sqrt(x) == x)
		ans += 1;
	return ans;
}
int main()
{
	int n, q,l,r,ans=0;
	cin >> n >> q;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		a[i] = f(a[i]);
		//cout << a[i] << ' ';
	}
	//cout << '\n';
	while (q--)
	{
		ans = 0;
		cin >> l >> r;
		map<int, int>mp;
		for (int i = l; i <= r; i++)
		{
			mp[a[i]] += 1;
			ans += mp[a[i]] - 1;
		}
		cout << ans <<'\n';
	}
	return 0;
}