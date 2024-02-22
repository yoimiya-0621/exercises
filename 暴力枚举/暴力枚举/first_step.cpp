//#include <iostream>
//#include <algorithm>
//using namespace std;
//int ans = 0;
//int main()
//{
//	int r, c,p;
//	cin >> r >> c>>p;
//	char a[105][105];
//	for (int i = 0; i < r; i++)
//		for (int j = 0; j < c; j++)
//			cin >> a[i][j];
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			int k=0;
//			if (j + p - 1 < c) {
//				for (k = j; k < p + j; k++)
//				{
//					if (a[i][k] != '.')
//						break;
//				}
//				if (k == p + j)
//					ans++;
//			}
//			if (i + p - 1 < r) {
//				for (k = i; k < p + i; k++)
//				{
//					if (a[k][j] != '.')
//						break;
//				}
//				if (k == p + i)
//					ans++;
//			}
//		}
//	}
//	cout << ans;
//	return 0;
//}
