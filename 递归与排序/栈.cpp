//#include <iostream>
//using namespace std;
//int n;
//long long dfs(int n,int top,int put)
//{
//	if (n < 0 || top < 0)
//		return 0;
//	if (top == 1 && n == 0)
//		return 1;
//	if (n==0&&top==0)
//		return 0;
//	if (top == 0)
//		return dfs(n - 1, 1, put);
//	return dfs(n - 1, top + 1, put) + dfs(n, top - 1, put + 1);
//}
//int main()
//{
//	cin >> n;
//	int top = 0;
//	long long x=dfs(n,top,0);
//	printf("%lld", x);
//	return 0;
//}
//#define  _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//int f[20][20] = { 0 };
//#define ll long long
//ll dfs(int top, int n)
//{
//	if (f[top][n])
//		return f[top][n];
//	if (n == 0)
//		return 1;
//	if (top > 0)
//		f[top][n] += dfs(top - 1, n);
//	f[top][n] += dfs(top + 1, n - 1);
//	return f[top][n];
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%lld", dfs(0, n));
//	return 0;
//}