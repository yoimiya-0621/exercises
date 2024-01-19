#define  _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int n;
//	long long ans = 0;
//	long long int c;
//	long long int a[2001];
//	cin >> n >> c;
//	for (long long int i = 1; i <= n; i++)
//		cin >> a[i];
//	sort(a + 1, a + 1 + n);
//	long long int l = 1;
//	long long int r = n;
//	for (r = n; r >= 1; r--)
//	{
//		for (l = 1; l < r; l++)
//		{
//			if (a[r] - a[l] == c)
//				ans++;
//		}
//	}
//	cout << ans;
//	return 0;
//}