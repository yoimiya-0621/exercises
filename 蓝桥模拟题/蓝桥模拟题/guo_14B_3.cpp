//#include <iostream>
//#include <algorithm>
//#include <map>
//using namespace std;
//const int N = 1e5 + 5;
//int a[N];
//int main()
//{
//	int n;
//	cin >> n;
//	map<int, int>mp;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//		if (!mp[a[i]])
//			mp[a[i]] = 1;
//	}
//	sort(a, a + n);
//	int ans = 0,x=0;
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (mp[i])
//		{
//			x = upper_bound(a, a + n, i) - lower_bound(a, a + n, i);
//			if (x != 2)
//			{
//				if (x % 2 == 1)
//				{
//					ans++;
//					x -= 1;
//				}
//				sum += x - 2;
//
//			}
//		}
//	}
//	cout << ans / 2+sum;
//	return 0;
//}

//¸Ä
//#include <iostream>
//#include <algorithm>
//#include <map>
//using namespace std;
//const int N = 1e5 + 5;
//int a[N];
//int main()
//{
//	int n;
//	cin >> n;
//	map<int, int>mp;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//		if (!mp[a[i]])
//			mp[a[i]] = 1;
//	}
//	sort(a, a + n);
//	int ans = 0, x = 0;
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (mp[i])
//		{
//			x = upper_bound(a, a + n, i) - lower_bound(a, a + n, i);
//			if (x == 1)
//				ans++;
//			else if (x == 2)
//				;
//			else {
//				sum += x - 2;
//			}
//		}
//	}
//	if (sum >= ans)
//		cout << sum;
//	else
//		cout << sum + (ans - sum) / 2;
//	return 0;
//}