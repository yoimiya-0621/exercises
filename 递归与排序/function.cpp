//#define  _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//#include <cstring>
//#define ll long long
//ll w[25][25][25];
//bool flag[25][25][25];
//ll dfs(ll a, ll b, ll c)
//{
//	if (flag[a][b][c])
//		return w[a][b][c];
//	if (a <= 0 || b <= 0 || c <= 0)
//		return 1;
//	if (a > 20 || b > 20 || c > 20)
//		return dfs(20,20,20);
//	
//	if (a < b && b < c)
//		return (dfs(a,b,c - 1) + dfs(a,b - 1,c - 1) - dfs(a,b - 1,c));
//	else
//		return dfs(a - 1,b,c) + dfs(a - 1,b - 1,c) + dfs(a - 1,b,c - 1) - dfs(a - 1,b - 1,c - 1);
//	flag[a][b][c] = true;
//	return w[a][b][c];
//}
//int main()
//{
//	ll a, b, c;
//	scanf("%lld %lld %lld", &a, &b, &c);
//	while (a != -1 || b != -1 || c != -1)
//	{
//		memset(flag, false, sizeof(flag));
//		printf("w(%d,%d,%d)=%lld\n", a, b, c, dfs(a, b, c));
//		scanf("%lld %lld %lld", &a, &b, &c);
//	}
//	return 0;
//}