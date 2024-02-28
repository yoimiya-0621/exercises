#include <iostream>
#include <algorithm>
using namespace std;
struct S
{
	int l;
	int w;
	int p;
}a[10000];
int main()
{
	int n, x;
	cin >> n >> x;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i].l >> a[i].w >> a[i].p;
	}
	int dp[1005] = { 0 };
	for (int i = 0; i < n; i++)
	{
		for (int j = x; j >=a[i].p; j--)
		{
			dp[j] = max(dp[j] + a[i].l, dp[j - a[i].p] + a[i].w);
		}
		for (int j = a[i].p - 1; j >= 0; j--)
		{
			dp[j] = dp[j] + a[i].l;
		}
	}
	cout << 5*dp[x];
	return 0;
}