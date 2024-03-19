//#include <iostream>
//#include <map>
//#include <algorithm>
//using namespace std;
//struct C
//{
//	double s;
//	int xx;
//	int yy;
//}c[10000000];
//int k = 0;
//bool cmp(C a, C b)
//{
//	return a.s < b.s;
//}
//int main()
//{
//	map<double, int>a;
//	long long ans = 39;
//	for (int x = 0; x <= 19; x++)
//	{
//		for (int y = 0; y <= 20; y++)
//		{
//			for (int x1 = 0; x1 <= 19; x1++)
//			{
//				for (int y1 = 0; y1 <= 20; y1++)
//				{
//					if (x == x1 || y == y1)
//						continue;
//					double s = (double)(y1 - y)/(x1 - x);
//					if(a[s]==0)
//					{
//						a[s] = 1;
//						ans++;
//						c[k].s = s;
//						c[k].xx = x;
//						c[k].yy = y;
//						k++;
//					}
//					else if (a[s] != 0)
//					{
//						int flag = 1;
//						for (int z = 0; z < k; z++)
//						{
//							if (s == c[z].s) {
//								double ss = (double)(y - c[z].yy) / (x - c[z].xx);
//								if (ss == s)
//								{
//									flag = 0;
//									break;
//								}
//							}
//
//						}
//						if (flag)
//						{
//							ans++;
//							c[k].s = s;
//							c[k].xx = x;
//							c[k].yy = y;
//							k++;
//						}
//					}
//				}
//			}
//		}
//	}
//	cout << ans;
//	return 0;
//}