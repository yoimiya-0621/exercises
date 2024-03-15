//#include <iostream>
//using namespace std;
//int a[105][105] = { 0 };
//int b[105][105] = { 0 };
//int x[8] = { 1,0,-1,1,-1,1,0,-1 };
//int y[8] = { 1,1,1,0,0,-1,-1,-1 };
//int n, m;
//int main()
//{
//	cin >> n >> m;
//	for(int i=1;i<=n;i++)
//		for (int j = 1; j <= m; j++)
//		{
//			cin >> a[i][j];
//		}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			if (a[i][j] == 1)
//			{
//				b[i][j] = 9;
//			}
//			else
//			{
//				for (int k = 0; k < 8; k++)
//				{
//					if (a[i + x[k]][j + y[k]] == 1)
//						b[i][j]++;
//				}
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++)
//		{
//			if (j != 1)
//				cout << " ";
//			cout << b[i][j];
//		}
//		cout << "\n";
//	}
//	return 0;
//}