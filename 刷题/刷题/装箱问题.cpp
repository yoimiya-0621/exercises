#include <iostream>
#include <algorithm>
using namespace std;
int emin(int a, int b)
{
	if (a >= 0 && b >= 0)
	{
		if (a > b)
			return a;
		else
			return b;
	}
	else
	{
		if (a < 0)
			return b;
		else
			return a;
	}
}
int main()
{
	int v, n;
	int a[35] = { 0 };
	cin >> v >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int dp[30000] = { 0 };
	for (int i = 0; i < 30000; i++)
		dp[i] = v;
	for (int i = 0; i < n; i++)
	{
		for (int j = v; j >=1; j--)
		{
			dp[j] = emin(dp[j-1],dp[j+a[i]]-a[i]);
		}
	}
	cout <<dp[v];
	return 0;
}