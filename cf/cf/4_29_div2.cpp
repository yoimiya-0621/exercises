//A
//#include <iostream>
//#include <map>
//#include <string>
//using namespace std;
//int a[105] = { 0 };
//int main()
//{
//	int t, n;
//	cin >> t;
//	while (t--)
//	{
//		int flag = 3;
//		cin >> n;
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> a[i];
//		}
//		for (int i = 1; i <= n; i++) {
//			if (flag == 2)
//				break;
//			for (int j = i + 1; j <= n; j++)
//			{
//				if (a[i] == j && a[j] == i && i != j)
//				{
//					flag--;
//					break;
//				}
//			}
//		}
//		cout << flag << '\n';
//		memset(a, 0, sizeof(a));
//	}
//	return 0;
//}
//B
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	int t;
//	string s;
//	string str;
//	int l, r, j, k, ans = 0;
//	cin >> t;
//	while (t--)
//	{
//		cin >> s;
//		ans = 0;
//		l = 0, r = 0,j=0,k=0;
//		while (1)
//		{
//			int flag = 0;
//			while (s[l] == '0')
//			{
//				l++;
//				if (l > s.size() - 1)
//				{
//					flag = 1;
//					break;
//				}
//			}
//			while (s[l+j] == '1')
//			{
//				j++;
//				if (l+j > s.size() - 1)
//				{
//					flag = 1;
//					break;
//				}
//			}
//			r = l+j;
//			k = 0;
//			if (!flag) {
//				while (s[r] == '0')
//				{
//					r++;
//					k++;
//					if (r > s.size() - 1)
//					{
//						flag = 1;
//						break;
//					}
//				}
//			}
//			str = s.substr(l, r - l);
//			reverse(str.begin(), str.end());
//			s.erase(l, r - l);
//			s.insert(l, str);
//			ans += (1+j)*k;
//			l += k;
//			if (l > s.size() - 1 || r > s.size() - 1)
//				break;
//			if (flag)
//				break;
//		}
//		cout << ans << '\n';
//	}
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//	int t;
//	string s;
//	cin >> t;
//	while (t--)
//	{
//		cin >> s;
//		int ans = 0;
//		int l = 0, r = 0;
//		while (1)
//		{
//			int flag = 0;
//			while (s[l] == '0')
//			{
//				l++;
//				if (l > s.size() - 1)
//				{
//					flag = 1;
//					break;
//				}
//			}
//			r = l;
//			if (!flag) {
//				while (s[r] == '1')
//				{
//					r++;
//					if (r > s.size() - 1)
//					{
//						flag = 1;
//						break;
//					}
//				}
//			}
//			if (flag)
//				break;
//			ans += (r + 1 - l);
//			s[l] = '0';
//			s[r] = '1';
//			l++;
//			if (l > s.size() - 1 || r > s.size() - 1)
//				break;
//		}
//		cout << ans << '\n';
//	}
//	return 0;
//}