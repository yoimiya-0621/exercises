//#define  _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//using namespace std;
////int dfs(int n)
////{
////	if (n == 1)
////		return 1;
////	int ans = 1;
////	for (int i = 1; i <= n / 2; i++)
////	{
////		ans += dfs(i);
////	}
////	return ans;
////}
////int main()
////{
////	int n;
////	scanf("%d", &n);
////	int sum=dfs(n);
////	printf("%d", sum);
////	return 0;
////}
//int main()
//{
//	int n;
//	int a[1001] = { 1 };
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i / 2; j++)
//		{
//			a[i] += a[j];
//		}
//		a[i]++;
//	}
//	printf("%d", a[n]);
//	return 0;
//}