////#include <iostream>
////#include <algorithm>
////using namespace std;
////int main()
////{
////	int a[10010] = { 0 };
////	int n, m;
////	cin >> n >> m;
////	int x, l, r;
////	for (int i = 1; i <= n; i++)
////	{
////		cin >> a[i];
////	}
////	while (m--)
////	{
////		cin >> x >> l >> r;
////		if (x == 0)
////		{
////			a[l] = r;
////		}
////		else
////		{
////			int mi = 0, ma = 0;
////			for (int i = l; i <= r; i++)
////			{
////				if (a[i] > ma)
////				{
////					mi = i;
////					ma = a[i];
////				}
////			}
////			cout << mi << ' ' << ma << '\n';
////		}
////	}
////	return 0;
////}
#include <iostream>
#include <map>
#include <vector>
using namespace std;
struct W
{
	string x;
	string y;
	int t;
}w[1000];
map<string, int>c;
vector<string>ok;
vector<string>anns;
string s1, s2;
int n, m;
int len=1,lk=0;
int ans = 100000, k = 0;
map<string, int>flag;
void dfs(string s,int time)
{
	if (s == s2)
	{
		k++;
		if (ans > time||ans==time&&len<lk)
		{
			ans = time;
			lk = len;
			while (anns.size())
			{
				anns.pop_back();
			}
			for (int i = 0; i < ok.size(); i++)
			{
				anns.push_back(ok[i]);
			}
		}
		len = 1;
		return;
	}
	time += c[s];
	for (int i = 0; i < n; i++)
	{
		if (w[i].x == s&&flag[w[i].y]==0)
		{
			len++;
			time += w[i].t;
			flag[w[i].y] = 1;
			ok.push_back(w[i].y);
			dfs(w[i].y, time);
			ok.pop_back();
			flag[w[i].y] = 0;
			time -= w[i].t;
			len--;
		}
		if (w[i].y == s && flag[w[i].x] == 0)
		{
			len++;
			time += w[i].t;
			flag[w[i].x] = 1;
			ok.push_back(w[i].x);
			dfs(w[i].x, time);
			ok.pop_back();
			flag[w[i].x] = 0;
			time -= w[i].t;
			len--;
		}
	}
}
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s1 >> k;
		c[s1] = k;
	}
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> w[i].x >> w[i].y >> w[i].t;
	}
	cin >>s1 >> s2;
	flag[s1] = 1;
	dfs(s1,0);
	if (ans!=100000) {
		cout << ans -c[s2]<< '\n';
		cout << s1;
		for (int i = 0; i < anns.size(); i++)
		{
			cout << "->" << anns[i];
		}
	}
	else
		cout << "Why not go home by plane?";
	return 0;
}
//#include <iostream>
//using namespace std; 
//#define ll unsigned long long
//ll mod = 1e9 + 7;
//int a[2010][2010];
//ll ans = 0;
//int n;
//void dfs(int x, int y)
//{
//	if (x == n && y == n)
//	{
//		ans++;
//		return;
//	}
//	if (x > n || y > n)
//		return;
//	if (a[x + 1][y] == 0)
//		dfs(x + 1, y);
//	if (a[x][y + 1] == 0)
//		dfs(x, y + 1);
//}
//int main()
//{
//	int m;
//	cin >> n >> m;
//	int x, y;
//	for(int i=0;i<m;i++)
//	{
//		cin >> x >> y;
//		a[x][y] = 1;
//	}
//	if(m)
//	dfs(1, 1);
//	else
//	{
//		ans = 1;
//		for (int i = 2 * (n - 1); i >= 1; i--)
//		{
//			if (i > (n - 1))
//				ans = ans * i % mod;
//			else if (i <= n - 1 && ans > i)
//				ans = ans / i % mod;
//		}
//	}
//	cout << ans;
//	return 0;
//}