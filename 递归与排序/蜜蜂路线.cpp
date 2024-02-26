//#include <iostream>
//using namespace std;
//int main()
//{
//	int n, m;
//	cin >> m >> n;
//	long long a[1001] = { 0 };
//	n = n - m;
//	a[1] = 1;
//	a[2] = 2;
//	for (int i = 3; i <= n; i++)
//	{
//		a[i] = a[i - 1] + a[i - 2];
//	}
//	cout << a[n];
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//	int m,n;
//	cin >> m >> n;
//	n = n - m;
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