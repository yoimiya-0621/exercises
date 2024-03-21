//#include <iostream>
//#include <algorithm>
//using namespace std;
//long long dp[3000] = { 0 };
//long long m = 1000000000000;
//int f(int x, int y)
//{
//	int i = x,j=y;
//	int z = j % i;
//	while (z != 0)
//	{
//		j = i;
//		i = z;
//		z = j % i;
//	}
//	return x*y/i;
//}
//int main()
//{
//	for (int i = 2; i <= 2021; i++)
//	{
//		dp[i] = m;
//		for (int j = i - 21; j < i; j++)
//		{
//			if (j <= 0)
//				continue;
//			dp[i] = min(dp[j] + (long long)f(i, j), dp[i]);
//		}
//	}
//	cout << dp[2021];
//	return 0;
//}