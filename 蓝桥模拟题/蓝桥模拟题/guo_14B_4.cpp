//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <array>
//using namespace std;
//vector<int>x;
//vector<int>y;
//int main()
//{
//	int n,m,k;
//	cin >> n>>m;
//	long long ans = 0;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> k;
//		x.push_back(k);
//	}
//	for (int i = 0; i < m; i++)
//	{
//		cin >> k;
//		y.push_back(k);
//	}
//		for (int i = 0; i < min(x.size(), y.size()); i++)
//		{
//			while(x[i] != y[i])
//			{
//					if (x[i] > y[i]) {
//						y[i] += y[i + 1];
//						y.erase(y.begin() + i + 1);
//						ans++;
//					}
//					else
//					{
//						x[i] += x[i + 1];
//						x.erase(x.begin() + i + 1);
//						ans++;
//					}
//			}
//		}
//		cout << ans;
//	return 0;
//}