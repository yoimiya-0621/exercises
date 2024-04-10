//#include <iostream>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//int a[25][25] = { 0 };
//int m, n,t,k=0;
//struct S
//{
//	int x;
//	int y;
//	int num;
//}s[200];
//bool cmp(S a, S b)
//{
//	return a.num > b.num;
//}
//int main()
//{
//	cin >> n >> m >> t;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cin >> a[i][j];
//			if (a[i][j])
//			{
//				s[k].x = i;
//				s[k].y = j;
//				s[k].num = a[i][j];
//				k++;
//			}
//		}
//	}
//	sort(s, s + k, cmp);
//	int i = 0,j=s[0].y, time = 0, ans = 0, kk = 0;
//	while (1)
//	{
//		if (time +1+ fabs(s[kk].x - i) + fabs(s[kk].y - j) + s[kk].x <= t)
//		{
//			time += fabs(s[kk].x - i) + fabs(s[kk].y - j)+1;
//			i = s[kk].x;
//			j = s[kk].y;
//			ans += s[kk].num;
//			kk++;
//		}
//		else
//			break;
//	}
//	cout << ans;
//	return 0;
//}

#include <iostream>
#include <algorithm>
using namespace std;
int n;
int dp[20005][2] = { 0 };
int l[20005] = { 0 }, r[20005] = { 0 };
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> l[i] >> r[i];
	}
	dp[1][0] = r[1]-1 + r[1] - l[1];
	dp[1][1] = r[1]-1;
	for (int i = 2; i <= n; i++)
	{
		dp[i][0] = min(dp[i - 1][0] + abs(r[i] - l[i - 1]) + r[i] - l[i], dp[i - 1][1] + abs(r[i-1] - r[i])+r[i]-l[i]);
		dp[i][1] = min(dp[i - 1][0] + abs(l[i] - l[i - 1]) + r[i] - l[i], dp[i - 1][1] + abs(r[i - 1] - l[i]) + r[i] - l[i]);
	}
	cout << min(dp[n][0]+n-l[n], dp[n][1]+n-r[n]) + n - 1;
	return 0;
}