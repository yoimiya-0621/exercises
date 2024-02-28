//#define  _CRT_SECURE_NO_WARNINGS
////排序做法
////#include <cstdio>
////#include <algorithm>
////using namespace std;
////struct S
////{
////	int a;
////	int b;
////	double c;
////}s[10000];
////bool cmp(S a, S b)
////{
////	return a.c > b.c;
////}
////int main()
////{
////	long long t, m;
////	long long ans = 0;
////	scanf("%lld %lld", &t, &m);
////	for (int i = 0; i < m; i++)
////	{
////		scanf("%d %d", &s[i].a, &s[i].b);
////		s[i].c = (double)s[i].b / s[i].a;
////	}
////	sort(s, s + m, cmp);
////	int i = 0;
////	while (t > 0&&i<m)
////	{
////		long long j = t / s[i].a;
////		t -= j * s[i].a;
////		ans += j * s[i].b;
////		i++;
////	}
////	printf("%lld", ans);
////	return 0;
////}
////dp做法
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//long long t, m;
//int a[10000][2] = { 0 };
//long long dp[10000] = {0};
//long long ans = 0;
//int main()
//{
//	scanf("%lld %lld", &t, &m);
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d %d", &a[i][0], &a[i][1]);
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = a[i][0]; j <= t; j++)
//		{
//			dp[j] = max(dp[j], dp[j - a[i][0]] + a[i][1]);
//		}
//	}
//	printf("%lld", dp[t]);
//	return 0;
//}
//#include <iostream>
//#include <algorithm>
//using namespace std;
//struct S
//{
//	int a;
//	int b;
//	double c;
//}s[1000];
//bool cmp(S a, S b)
//{
//	return a.c > b.c;
//}
//int main()
//{
//	int t, m;
//	cin >> t >> m;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> s[i].a >> s[i].b;
//		s[i].c = (double)s[i].b / s[i].a;
//	}
//	sort(s, s + m, cmp);
//	int i = 0;
//	long long ans = 0;
//	while (i<m)
//	{
//		if (t >= s[i].a) {
//			t -= s[i].a;
//			ans += s[i].b;
//		}
//		i++;
//	}
//	cout << ans;
//	return 0;
//}
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int t, m;
//	cin >> t >> m;
//	int a[10000][2] = { 0 };
//	for (int i = 0; i < m; i++)
//	{
//		cin >> a[i][0] >> a[i][1];
//	}
//	int dp[10000] = { 0 };
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = t; j>=a[i][0]; j--)
//		{
//			dp[j] = max(dp[j], dp[j - a[i][0]] + a[i][1]);
//		}
//	}
//	cout << dp[t];
//	return 0;
//}