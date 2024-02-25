//#include <iostream>
//using namespace std;
//long long dfs(int n)
//{
//	if (n == 2)
//		return 2;
//	if (n == 1)
//		return 1;
//	if (n <= 0)
//		return 0;
//	return dfs(n - 1) + dfs(n - 2);
//}
//int main()
//{
//	int n;
//	cin >> n;
//	long long x = dfs(n);
//	cout << x;
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int c[501][100] = { 0 };
//	c[1][0] = 1;
//	c[2][0] = 2;
//	int w = 1;
//	for (int i = 3; i <= n; i++)
//	{
//		for (int j = 0; j < w; j++)
//		{
//			c[i][j] += c[i - 1][j] + c[i - 2][j];
//			while (c[i][j] >= 10)
//			{
//				int y = c[i][j] / 10;
//				c[i][j] %= 10;
//				c[i][j+1] += y;
//				if (j == w - 1)
//					w++;
//			}
//		}
//	}
//	for (int i = w - 1; i >=0; i--)
//		printf("%d", c[n][i]);
//	return 0;
//}