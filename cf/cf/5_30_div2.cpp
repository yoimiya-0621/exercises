//A
//#include <iostream>
//using namespace std;
//int main()
//{
//	int t,n;
//	cin >> t;
//	string s;
//	int flag = 0;
//	while (t--)
//	{
//		cin >>n>> s;
//		flag = 0;
//		for (int i = 0; i < s.size(); i++)
//		{
//			if (flag == -1)
//				break;
//			if (isdigit(s[i]))
//			{
//				if (flag == 0) {
//					if (i && s[i] < s[i - 1])
//						flag = -1;
//				}
//				else
//					flag = -1;
//			}
//			else
//			{
//				if (flag==0)
//					flag = 1;
//				else if (flag == 1)
//				{
//					if (s[i] < s[i - 1])
//						flag = -1;
//				}
//			}
//		}
//		if (flag == -1)
//			cout << "NO" << '\n';
//		else
//			cout << "YES" << '\n';
//	}
//	return 0;
//}

//B
//#include <iostream>
//#include <map>
//#include <algorithm>
//using namespace std;
//#define ll long long
//const int N = 2e5 + 5;
//ll a[N];
//ll b[N];
//int main()
//{
//	int t,n;
//	cin >> t;
//	ll ans = 0;
//	while (t--)
//	{
//		cin >> n;
//		ans = 0;
//		for (int i = 0; i < n; i++)
//			cin >> a[i];
//		for (int i = 0; i < n + 1; i++)
//			cin >> b[i];
//		map<ll, ll>mp;
//		mp[b[n]] = 1e9;
//		for (int i = 0; i < n; i++)
//		{
//			ans += abs(a[i] - b[i]);
//			if (b[n] <= a[i] && b[n] >= b[i] || b[n] <= b[i] && b[n] >= a[i]||mp[b[n]]==0&&b[n]!=0)
//				mp[b[n]] = 0;
//			else
//			{
//				mp[b[n]] = min(mp[b[n]], abs(b[n] - a[i]));
//				mp[b[n]] = min(mp[b[n]], abs(b[n] - b[i]));
//
//			}
//		}
//		//if (b[n])
//			cout << ans + 1 + mp[b[n]] << '\n';
//	    //else
//			//cout << ans << '\n';
//		memset(a, 0, sizeof(a));
//		memset(b, 0, sizeof(b));
//	}
//	return 0;
//}

//C
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//#define ll long long
//const int N = 2e5 + 5;
//ll a[N];
//ll b[N];
//ll as[N];
//ll bs[N];
//ll asf[N];
//ll bsf[N];
//int main()
//{
//	int t,n,m;
//	cin >> t;
//	while (t--)
//	{
//		cin >> n >> m;
//		for (int i = 1; i <= n + m + 1; i++)
//			cin >> a[i];
//		for (int i = 1; i <= n + m + 1; i++)
//			cin >> b[i];
//		vector<ll>ak;
//		vector<ll>bk;
//		for (int i = 1; i <= n + m + 1; i++)
//		{
//			if (a[i] > b[i]) {
//				ak.push_back(i);
//				as[i] = as[i - 1] + a[i];
//				bs[i] = bs[i - 1];
//				bsf[i] = bsf[i - 1] + b[i];
//			}
//			else {
//				bk.push_back(i);
//				bs[i] = bs[i - 1] + b[i];
//				as[i] = as[i - 1];
//				asf[i] = asf[i - 1] + a[i];
//
//			}
//		}
//		for (int i = 1; i <= n + m + 1; i++)
//		{
//			if (find(ak.begin(), ak.end(), i)!=ak.end())
//			{
//				if (ak.size() <= n)
//				{
//					cout << as[n + m + 1] + bs[n + m -n-ak.size()] - a[i]+bsf[];
//				}
//				else if (ak.size() > n)
//				{
//					cout << as[n + m + 1] - a[i] + b[n + m + 1] + b[i];
//				}
//			}
//			else
//			{
//				if (bk.size() <= m)
//				{
//					cout << as[n + m + 1] + bs[n + m + 1] + (cs[n + m + 1] - cs[n + m - (n - bk.size())]);
//				}
//				else if (ak.size() > m)
//				{
//					cout << as[n + m + 1] + a[i] + b[n + m + 1] - b[i];
//				}
//			}
//			cout << ' ';
//		}
//		memset(a, 0, sizeof(a));
//		memset(as, 0, sizeof(as));
//		memset(b, 0, sizeof(b));
//		memset(bs, 0, sizeof(bs));
//		cout << '\n';
//	}
//	return 0;
//}