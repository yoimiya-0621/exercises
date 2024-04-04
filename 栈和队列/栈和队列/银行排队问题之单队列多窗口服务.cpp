//#include <iostream>
//#include <algorithm>
//#include <stack>
//#include <map>
//using namespace std;
//struct S
//{
//	int t;
//	int p;
//}s[1005];
//int n = 0, k = 0, sum = 0, m = 0;
//int a[11] = { 0 };
//map<int, int>ans;
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> s[i].t >> s[i].p;
//		if (s[i].p > 60)
//			s[i].p = 60;
//	}
//	cin >> k;
//	for (int i = 0; i < n; i++)
//	{
//		int flag = 0, minn = a[1], mn = 1;
//		for (int j = 1; j <= k; j++)
//		{
//			if (a[j] <= s[i].t)
//			{
//				a[j] = s[i].t + s[i].p;
//				ans[j] += 1;
//				flag = 1;
//				break;
//			}
//			if (minn > a[j])
//			{
//				mn = j;
//				minn = a[j];
//			}
//		}
//		if (!flag)
//		{
//			m = max(m, a[mn] - s[i].t);
//			sum += a[mn] - s[i].t;
//			a[mn] = a[mn] + s[i].p;
//			ans[mn] += 1;
//		}
//	}
//	int maxn = 0;
//	for (int i = 1; i <= k; i++)
//	{
//		maxn = max(maxn, a[i]);
//	}
//	printf("%.1lf ", (double)sum / n);
//	cout << m << " " << maxn << "\n";
//	for (int i = 1; i <= k; i++)
//	{
//		if (i != 1)
//			cout << " ";
//		cout << ans[i];
//	}
//	return 0;
//}