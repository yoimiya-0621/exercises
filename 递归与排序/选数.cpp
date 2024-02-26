//#include <iostream>
//#include <cmath>
//using namespace std;
//int ans = 0;
//long long a[250] = { 0 };
//int n, k;
//int isprime(long long n)
//{
//	if (n == 0 || n == 1)
//		return 0;
//	for(int i=2;i<=sqrt(n);i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//void dfs(int i, long long sum,int k)
//{
//	if (isprime(sum)&&k==0&&i<=n)
//		ans++;
//	if (i >= n||k<=0)
//		return;
//	if(a[i+1])
//		dfs(i + 1, sum + a[i+1], k - 1);
//	dfs(i + 1, sum, k);
//}
//int main()
//{
//	long long sum = 0;
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//	}
//	dfs(0, 0,k);
//	cout << ans;
//	return 0;
//}