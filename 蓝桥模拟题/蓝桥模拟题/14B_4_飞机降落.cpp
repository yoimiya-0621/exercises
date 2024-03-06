//#include <iostream>
//#include <algorithm>
//#include <string>
//using namespace std;
//struct S
//{
//	int a;
//	int b;
//	int c;
//}s[10];
//int n, t;
//bool cmp(S x, S y)
//{
//	if (x.b != y.b)
//		return x.b < y.b;
//	else
//		return x.a < y.a;
//}
//int main()
//{
//	cin >> t;
//	for (int i = 0; i < t; i++)
//	{
//		memset(s, 0, sizeof(s));
//		cin >> n;
//		for (int j = 0; j < n; j++)
//		{
//			cin >> s[j].a >> s[j].b >> s[j].c;
//			s[j].b += s[j].a;
//		}
//		sort(s, s + n, cmp);
//		int time = 0;
//		int j = 0;
//		for (; j < n; j++)
//		{
//			if (time<s[j].a || time>s[j].b)
//			{
//				cout << "No" << "\n";
//				break;
//			}
//			else
//			{
//				time += s[j].c;
//			}
//		}
//		if (j == n)
//			cout << "YES" << "\n";
//	}
//	return 0;
//}