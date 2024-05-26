//A
//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 1e6 + 10;
//int a[N];
//int ma[N];
//int mi[N];
//
//int main()
//{
//	int t, n;
//	cin >> t;
//	while (t--)
//	{
//		cin >> n;
//		int ans = 1;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> a[i];
//			if (i == 0)
//			{
//				mi[i] = a[i];
//				continue;
//			}
//			if (i)
//			{
//				if (a[i] < a[i - 1])
//					ans = 0;
//			}
//			mi[i] = min(a[i], mi[i - 1]);
//		}
//		ma[n - 1] = a[n - 1];
//		for (int i = n - 2; i >= 0; i--)
//		{
//			ma[i] = max(ma[i + 1], a[i]);
//		}
//		for (int i = 0; i+1 < n; i++)
//		{
//			if (mi[i] >= ma[i + 1])
//			{
//				int flag = 1;
//				for (int j = 0; j <= i; j++)
//				{
//					if (j&&a[j] < a[j - 1])
//					{
//						flag = 0;
//						break;
//					}
//				}
//				if(flag)
//					for (int j = i + 1; j < n; j++)
//					{
//						if (j > i + 1 && a[j] < a[j - 1])
//						{
//							flag = 0;
//							break;
//						}
//					}
//				if (flag)
//				{
//					ans = 1;
//					break;
//				}
//			}
//		}
//		if (ans)
//			cout << "YES" << '\n';
//		else
//			cout << "NO" << '\n';
//		memset(a, 0, sizeof(a));
//		memset(ma, 0, sizeof(ma));
//		memset(mi, 0, sizeof(mi));
//	}
//	return 0;
//}

//B
//#include <iostream>
//#include <algorithm>
//using namespace std;
//#define ll long long
//const int N = 1e6 + 5;
//ll a[N];
//int main()
//{
//	int t,n;
//	cin >> t;
//	while (t--)
//	{
//		cin >> n;
//		int ans = 0;
//		for (int i = 0; i < n; i++)
//			cin >> a[i];
//		sort(a, a + n);
//		if (a[0] == 1)
//		{
//			ans = 1;
//		}
//		ll ai = 0, aj = 0;
//		if (!ans)
//		{
//			ai = a[0];
//			for (int i = 1; i < n; i++)
//			{
//				if (!aj)
//				{
//					if (a[i] % ai != 0)
//						aj = a[i];
//				}
//				else
//				{
//					if (a[i] % ai != 0 && a[i] % aj != 0)
//					{
//						ans = 0;
//						break;
//					}
//					
//				}
//				if (i == n - 1)
//					ans = 1;
//			}
//		}
//		if (aj == 0)
//			ans = 1;
//		if (ans)
//			cout << "YES" << '\n';
//		else
//			cout << "NO" << '\n';
//		memset(a, 0, sizeof(a));
//	}
//	return 0;
//}
//C
////#include <bits/stdc++.h>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//#define ll long long
//const int N = 1e5 + 10;
//ll a[N];
//ll b[N];
//int main()
//{
//	int t, n;
//	cin >> t;
//	while (t--)
//	{
//		cin >> n;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> a[i];
//			b[i] = a[i];
//		}
//		sort(b, b + n);
//		for (int i = n - 1; i >= 0; i++)
//		{
//			
//		}
//		memset(a, 0, sizeof(a));
//	}
//	return 0;
//}