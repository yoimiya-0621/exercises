//A
//#include <iostream>
//using namespace std;
//int main()
//{
//	int t;
//	int x, y;
//	cin >> t;
//	while (t--)
//	{
//		cin >> x >> y;
//		int n = y / 2;
//		int sum = 0;
//		sum += 7 * n;
//		if (y % 2 == 1)
//		{
//			n++;
//			sum += 11;
//		}
//		if (sum < x)
//		{
//			x -= sum;
//			n += x / 15;
//			if (x % 15 != 0)
//				n++;
//
//		}
//		cout << n << '\n';
//	}
//	return 0;
//}

//B
//#include <iostream>
//#include <map>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int t,n;
//	cin >> t;
//	string s;
//	char ch[30] = { 0 };
//	while (t--)
//	{
//		cin >> n;
//
//		cin >> s;
//		int k = 0;
//		map<char, int>mp;
//		for (int i = 0; i < s.size(); i++)
//		{
//			if (mp[s[i]] == 0)
//			{
//				mp[s[i]] = 1;
//				ch[k++] = s[i];
//			}
//		}
//		sort(ch, ch + mp.size());
//		for (int i = 0; i < k; i++)
//		{
//			mp[ch[i]] = i;
//		}
//		for (int i = 0; i < s.size(); i++)
//		{
//			s[i] = ch[k - 1 - mp[s[i]]];
//		}
//		cout << s << '\n';
//	}
//	return 0;
//}

//C
//#include <bits/stdc++.h>
//#include <iostream>
//#include <vector>
//#include <map>
//#include <algorithm>
//using namespace std;
//int a[200010];
////int b[200010][3];
//struct B
//{
//	int x;
//	int y;
//	int z;
//};
//bool cmp(B a, B b)
//{
//	if (a.x != b.x)
//		return a.x < b.x;
//	else
//	{
//		if (a.y != b.y)
//			return a.y < b.y;
//		else
//			return a.z < b.z;
//	}
//}
//B b[100000] = { 0 };
//int c[100000] = { 0 };
//
//int main()
//{
//	int t,n;
//	cin >> t;
//
//	while (t--)
//	{
//		cin >> n;
//		int ans = 0;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> a[i];
//			if (i >= 2)
//			{
//				b[i - 2].x = a[i - 2];
//				b[i - 2].y= a[i - 1];
//				b[i - 2].z = a[i];
//			}
//		}
//		sort(b, b + n - 2, cmp);
//		for (int i = 1; i < n - 2; i++)
//		{
//			if (b[i].x != b[i - 1].x)
//				c[b[i - 1].x] = i;
//		}
//		for (int i = 0; i < n - 2; i++)
//		{
//			for (int j = i + 1; j < n-2; j++)
//			{
//				if (b[i].x != b[j].x && b[i].y == b[j].y && b[i].z == b[j].z)
//					ans++;
//				if (b[i].x == b[j].x && b[i].y != b[j].y && b[i].z == b[j].z)
//					ans++;
//				if (b[i].x == b[j].x && b[i].y == b[j].y && b[i].z != b[j].z)
//					ans++;
//				if (b[i].x != b[j].x && b[i].y != b[j].y)
//					j = c[b[j].x];
//				if (j <= i || j > n - 2)
//					break;
//			}
//		}
//		memset(b, 0, sizeof(b));
//		memset(c, 0, sizeof(c));
//		cout << ans << '\n';
//	}
//	return 0;
//}
//#include <iostream>
//#include <vector>
//#include <map>
//#include <algorithm>
//using namespace std;
//int a[200010];
////int b[200010][3];
//typedef struct B
//{
//	int x;
//	int y;
//	int z;
//	bool operator<(const B& b2)const
//	{
//		if (x != b2.x)
//			return x < b2.x;
//		else
//			if (y != b2.y)
//				return y < b2.y;
//			else
//				return z < b2.z;
//	}
//};
//B b[4];
//int main()
//{
//	int t, n;
//	cin >> t;
//	B flag;
//	while (t--)
//	{
//		map <B,int>mp;
//		cin >> n;
//		long long ans = 0;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> a[i];
//			if (i >= 2)
//			{
//				b[0].x = a[i - 2], b[0].y = a[i - 1], b[0].z = 0;
//				b[1].x = a[i - 2], b[1].y = 0, b[1].z = a[i];
//				b[2].x = 0, b[2].y = a[i - 1], b[2].z = a[i];
//				b[3].x = a[i - 2], b[3].y = a[i - 1], b[3].z = a[i];
//				mp[b[0]] += 1;
//				mp[b[1]] += 1;
//				mp[b[2]] += 1;
//				mp[b[3]] += 1;
//				if(i>=3)
//				{
//					flag = { a[i - 2],a[i - 1],a[i] };
//					ans += mp[b[0]];
//					ans += mp[b[1]];
//					ans += mp[b[2]];
//					ans -= 3 * mp[b[3]];
//				}
//
//			}
//		}
//		cout << ans << '\n';
//	}
//	return 0;
//}