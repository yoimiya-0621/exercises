//A
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int	T;
//	cin >> T;
//	int a[3] = { 0 };
//	while(T--)
//	{
//		int i = 5;
//		cin >> a[0]>>a[1]>>a[2];
//		sort(a, a + 3);
//		while (i--)
//		{
//			a[0]++;
//			sort(a, a + 3);
//		}
//		cout << a[0] * a[1] * a[2] << "\n";
//	}
//	return 0;
//}

//B
//#include <iostream>
//#include <algorithm>
//using namespace std;
//#define ll long long
//const int N = 1E5 + 10;
//ll a[N];
//ll t, n, k;
//int main()
//{
//	cin >> t;
//	while (t--) {
//		cin >> n >> k;
//		ll m = 0;
//		ll ans = 0;
//		for (int i = 0; i < k; i++)
//		{
//			cin >> a[i];
//			m = max(m, a[i]);
//			ans += 2 * a[i] - 1;
//		}
//		ans -= 2 * m - 1;
//		cout << ans << '\n';
//	}
//		return 0;
//}

//C
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int t;
//	cin >> t;
//	int n, m, k;
//	while (t--)
//	{
//		cin >> n >> m >> k;
//		for (int i = n; i >= k; i--)
//			cout << i << ' ';
//		for (int i = m + 1; i < k; i++)
//			cout << i << ' ';
//		for (int i = 1; i <= m; i++)
//		{
//			cout << i << ' ';
//		}
//		cout << '\n';
//	}
//	return 0;
//}

//D
//#include <iostream>
//using namespace std;
//const int N = 2e5 + 10;
//char a[N];
//int main()
//{
//	int t;
//	int n, m, k;
//	cin >> t;
//	while (t--)
//	{
//		cin >> n >> m >> k;
//		for (int i = 1; i <= n; i++)
//			cin >> a[i];
//		int flag = 0,jump=0,wa=0;
//		int l = 0, r = 1;
//		for (int i = 0; i <= n; i++)
//		{
//			if (a[i] == 'L')
//			{
//				if (jump == 1) {
//					if (i - l > m)
//					{
//						for (int j = l; j <= i; ) {
//							if (a[j + m] == 'W')
//							{
//								k--;
//								j = j + m;
//							}
//							else
//							{
//								if(a[])
//							}
//						}
//						flag = 1;
//					}
//					jump = 0;
//				}
//				else {
//					if (i - l > m) {
//						while (l + m < i) {
//							l += m;
//							k--;
//						}
//					}
//				}
//				l = i;
//				wa = 0;
//			}
//			else
//			{
//				if (a[i] == 'C')
//				{
//					jump = 1;
//				}
//				else {
//					wa++;
//				}
//			}
//			if (k < 0)
//				flag = 1;
//			if (flag)
//				break;
//		}
//		if (l != n) {
//			if (jump) {
//				if (n+1 - l > m)
//					flag = 1;
//			}
//			else
//			{
//				if (n +1- l > m) {
//					k -= wa;
//					if (k < 0)
//						flag = 1;
//				}
//			}
//		}
//		if (flag)
//			cout << "NO" << '\n';
//		else
//			cout << "YES" << '\n';
//		memset(a, 0, sizeof(a));
//	}
//	return 0;
//}

#include <iostream>
#include <vector>
using namespace std;
const int N = 2e5 + 10;
char a[N];
int main()
{
	int t;
	int n, m, k;
	cin >> t;
	while (t--)
	{
		cin >> n >> m >> k;
		for (int i = 1; i <= n; i++)
			cin >> a[i];
		int flag = 0, jump = 0, wa = 0;
		int l = 0, r = 1;
		for (int i = 0; i <= n; i++)
		{
			if (a[i] == 'L')
			{
				if (i - l <= m)
					;
				else
				{
					vector<int>site;
					vector<int>ok;
					for (int j = l; j <= i; j++)
					{
						if (a[j] == 'W')
							site.push_back(j);
					}
					if (site.size() == 0 || site[0] - l > m || i - site[site.size() - 1] > m)
					{
						flag = 1;
						break;
					}
					for (int j = 0; j < site.size(); j++)
					{
						if (l + m < site[j])
						{
							ok.push_back(site[j - 1]);
							l = site[j - 1];
						}
					}
					if (i - l > m)
						k--;
					k -= ok.size();
				}
				l = i;
			}
		}
		if (l != n) {
			if (n + 1 - l <= m)
				;
			else
			{
				vector<int>site;
				vector<int>ok;
				for (int j = l; j <= n; j++)
				{
					if (a[j] == 'W')
						site.push_back(j);
				}
				if (site.size()==0||site[0] - l > m || n+1 - site[site.size() - 1] > m)
				{
					flag = 1;
				}
				for (int j = 0; j < site.size(); j++)
				{
					if (l + m < site[j])
					{
						ok.push_back(site[j - 1]);
						l = site[j - 1];
					}
				}
				if (n+1 - l > m)
					k--;
				k -= ok.size();
			}
		}
		if (k < 0)
			flag = 1;
		if (flag)
			cout << "NO" << '\n';
		else
			cout << "YES" << '\n';
		memset(a, 0, sizeof(a));
	}
	return 0;
}