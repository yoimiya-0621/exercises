////A
////#include <iostream>
////#include <algorithm>
////using namespace std;
////int main()
////{
////	int t;
////	cin >> t;
////	int a[3] = { 0 };
////	while (t--)
////	{
////		cin >> a[0]>>a[1]>>a[2];
////		sort(a, a + 3);
////		if ((a[0]+a[1]+a[2]) % 2 == 0)
////		{
////			if(a[2]<=a[0]+a[1])
////			   cout << (a[0]+a[1]+a[2]) / 2 << '\n';
////			else
////				cout << (a[0] + a[1] + a[2]) / 2 -(a[2]-a[1]-a[0])/2<< '\n';
////
////		}
////		else
////			cout << -1 << '\n';
////		memset(a, 0, sizeof(a));
////	}
////	return 0;
////}
////B
////#include <iostream>
////using namespace std;
////int a[100010];
////int main()
////{
////	int t,n;
////	cin >> t;
////	while (t--)
////	{
////		cin >> n;
////		for (int i = 0; i < n; i++)
////		{
////			cin >> a[i];
////		}
////		int k = 1;
////		bool flag = false;
////		for (; k <= n; k++)
////		{
////			int f = a[0];
////			int zz = a[0];
////			for (int i = 0; i < k; i++)
////			{
////				f |= a[i];
////			}
////			int i = 1;
////			for (i = 1; i + k - 1 < n; i++)
////			{
////				zz = a[i];
////				for (int j = i; j - i < k; j++)
////				{
////					zz |= a[j];
////				}
////				if (zz != f)
////					break;
////			}
////			if (i + k - 1 == n)
////			{
////				break;
////			}
////		}
////		cout << k<<'\n';
////		memset(a,0, sizeof(a));
////	}
////	return 0;
////}
//
//#include <iostream>
//using namespace std;
//int a[100010];
//int b[100010];
//int main()
//{
//	int t,n;
//	cin >> t;
//	while (t--)
//	{
//		cin >> n;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> a[i];
//			b[i] = a[i];
//		}
//		int k = 0;
//		int flag = 0;
//		do
//		{
//			flag = 0;
//			k++;
//			for (int i = 0; i + k - 1 < n; i++)
//			{
//				b[i] = b[i] | a[i + k - 1];
//			}
//			for (int i = 0; i + k - 1 < n; i++)
//			{
//				if (b[i] != b[0])
//				{
//					flag = 1;
//					break;
//				}
//			}
//		} while (flag&&k<n);
//		cout << k << '\n';
//		memset(a, 0, sizeof(a));
//		memset(b, 0, sizeof(b));
//	}
//	return 0;
//
//}