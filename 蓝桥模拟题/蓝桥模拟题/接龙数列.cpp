#define  _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int emax(int a, int b)
{
	if (a <= b)
		return b;
	else
		return a;
}
int main()
{
	int n,ans=0;
	scanf("%d", &n);
	char s[10];
	int dp[10] = { 0 };
	for (int i = 0; i < n; i++)
	{
		scanf("%s", s);
		int len = strlen(s);
		dp[s[len - 1] - 48] = emax(dp[s[0]-48]+1, dp[s[len - 1]-48]);
	}
	for (int i = 0; i < 10; i++)
	{
		ans = emax(ans, dp[i]);
	}
	printf("%d", n - ans);
	return 0;
}