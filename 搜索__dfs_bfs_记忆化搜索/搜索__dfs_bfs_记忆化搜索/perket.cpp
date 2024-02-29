//#define _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//#include <cmath>
//#include <algorithm>
//using namespace std;
//long long ans = 100000000;
//int n;
//int a[20][2] = { 0 };
//
//void dfs(int x, int s, int b)
//{
//	if (x >= n)
//	{
//		ans = min((long long)fabs(s - b), ans);
//		return;
//	}
//	dfs(x + 1, s * a[x][0], b + a[x][1]);
//	dfs(x + 1, s, b);
//}
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//		scanf("%d %d", &a[i][0], &a[i][1]);
//	dfs(0, 1, 0);
//	printf("%lld", ans);
//	return 0;
//}