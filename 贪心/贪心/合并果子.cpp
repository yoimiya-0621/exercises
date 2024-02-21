//#include <iostream>
//#include <algorithm>
//using namespace std;
//bool cmp(long long a, long long b)
//{
//	return a > b;
//}
//int main()
//{
//	long long n;
//	long long a[10000];
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	sort(a, a + n,cmp);
//	long long ans = 0;
//	for (long long i = 0; i < n; i++)
//	{
//		if (i == n - 1)
//			ans += a[i]*(n-1);
//		else
//			ans += a[i] * (i + 1);
//	}
//	printf("%lld", ans);
//	return 0;
//}