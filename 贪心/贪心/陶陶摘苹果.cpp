//#define  _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <algorithm>
//using namespace std;
//struct S
//{
//	int x;
//	int y;
//}c[5000];
//bool cmp(struct S a, struct S b)
//{
//	return a.y < b.y;
//}
//int main()
//{
//	int n, s, a, b;
//	cin >> n >> s;
//	cin >> a >> b;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> c[i].x >> c[i].y;
//	}
//	sort(c, c + n, cmp);
//	int j = 0,ans=0;
//	while (s > 0&&j<n)
//	{
//		if (s >= c[j].y && a + b >= c[j].x)
//		{
//			s -= c[j].y;
//			ans++;
//		}
//		j++;
//	}
//	cout << ans;
//	return 0;
//}