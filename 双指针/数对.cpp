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
#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
	int n, c,ans=0;
	int a[10005] = { 0 };
	scanf("%d %d", &n, &c);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	//int r = upper_bound(a, a + n, 2) - a;
	//int l = lower_bound(a, a + n, 2) - a;
	//printf("%d %d", l, r);
	sort(a, a + n);
	for (int i = 0; i < n; i++)
	{
		int l=lower_bound(a+i, a + n, c + a[i])-a;
		int r = upper_bound(a+i, a + n, c + a[i]) - a;
		if (a[l]==c+a[i]&&a[r-1]==c+a[i])
			ans += r - l;
	}
	printf("%d", ans);
	return 0;
}