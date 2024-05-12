//A
//#include <iostream>
//using namespace std;
//int main()
//{
//	int t;
//	cin >> t;
//	int a, b;
//	while (t--)
//	{
//		cin >> a >> b;
//		if (a > b)
//			cout << b << ' ' << a << '\n';
//		else
//			cout << a << ' ' << b << '\n';
//	}
//	return 0;
//}
//B
//#include <iostream>
//using namespace std;
//int main()
//{
//	int t;
//	cin >> t;
//	string s;
//	while (t--)
//	{
//		int k = 0;
//		cin >> s;
//		string ans;
//		for (int i = 1; i < s.size(); i++)
//		{
//			if (s[i] == s[0])
//				k++;
//		}
//		if (k == s.size()-1)
//			cout << "NO"<<'\n';
//		else
//		{
//			cout << "YES" << '\n';
//			for (int i = 1; i < s.size(); i++)
//				cout << s[i];
//			cout << s[0] << '\n';
//		}
//	}
//	return 0;
//}
//C
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int a[3], b[3];
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int k1 = 0, k2 = 0;
//		cin >> a[0] >> a[1] >> b[0] >> b[1];
//		if (b[0] == a[0] || b[0] == a[1] || b[1] == a[1] || b[1] == a[0])
//		{
//			cout << "YES" << '\n';
//			continue;
//		}
//		sort(a, a + 2);
//		if (b[0] > a[0] && b[0] < a[1])
//			k1 = 1;
//		if (b[1] > a[0] && b[1] < a[1])
//			k2 = 1;
//		if (k1 + k2 == 1)
//			cout << "YES" << '\n';
//		else
//			cout << "NO" << '\n';
//
//	}
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//	int t;
//	cin >> t;
//	string s;
//	while (t--)
//	{
//		cin >> s;
//		int m = 0;
//		for (int i = 0; i < s.size(); i++)
//		{
//
//		}
//	}
//	return 0;
//}

//D
#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	string s;
	while (t--)
	{
		int ans = 0;
		cin >> s;
		int l = 0, r = 0,k=0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '0')
			{
				k = i;
				int flag = 0;
				while (s[i] == '0')
					i++;
				while (s[i] == '1')
				{
					flag = 1;
					i++;
				}
				if (i - 1 - k > r - l&&flag)
				{
					l = k;
					r = i - 1;
				}
			}
		}
		for (int i = 0; i < s.size(); i++)
		{
			if (i == l)
			{
				i = r + 1;
				if(l)
				ans++;
			}
			if (i&&s[i] != s[i - 1]&&i<s.size())
				ans++;
		}
		cout << ans+1 << '\n';
	}
	return 0;
}
//E
//#include <iostream>
//using namespace std;
//#define ll long long
//ll a[100010];
//ll b[100010];
//int k, n, q,d;
//int main()
//{
//	int t;
//	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//	cin >> t;
//	while (t--)
//	{
//		cin >> n >> k >> q;
//		for (int i = 1; i <= k; i++)
//		{
//			cin >> a[i];
//		}
//		for (int i = 1; i <= k; i++)
//		{
//			cin >> b[i];
//		}
//		while (q--)
//		{
//			int i = 0;
//			cin >> d;
//			for (i = 0; i <= k; i++)
//			{
//				if (a[i] > d)
//					break;
//			}
//			cout << b[i - 1] + (int)((d - a[i - 1]) / ((double)(a[i] - a[i - 1]) / (b[i] - b[i - 1]))) << '\n';
//		}
//		//memset(a, 0, sizeof(a));
//		//memset(b, 0, sizeof(b));
//	}
//	return 0;
//}