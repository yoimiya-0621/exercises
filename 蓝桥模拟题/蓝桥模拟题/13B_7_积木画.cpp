//#include <iostream>
//using namespace std;
//#define MOD 1000000007;
//long long ans = 0;
//long long a[10000000] = { 0 };
//int i = 0;
//long long nn;
//void dfs(long long n)
//{
//	if (n <= 0)
//	{
//		long long sum = 0, s = 0;
//		for (int k = 0; k < i; k++)
//		{
//			sum += a[k];
//			if (a[k] == 3)
//				s++;
//		}
//		if (sum == nn)
//		{
//			ans += 1 + s;
//			ans %= MOD;
//		}
//		return;
//	}
//	if (n >= 1)
//	{
//		a[i] = 1;
//		i++;
//		dfs(n - 1);
//		i--;
//	}
//	if (n >= 2)
//	{
//		a[i] = 2;
//		i++;
//		dfs(n - 2);
//		i--;
//	}
//	if (n >= 3)
//	{
//		a[i] = 3;
//		i++;
//		dfs(n - 3);
//		i--;
//	}
//}
//int main()
//{
//	cin >> nn;
//	dfs(nn);
//	cout << ans;
//	return 0;
//}