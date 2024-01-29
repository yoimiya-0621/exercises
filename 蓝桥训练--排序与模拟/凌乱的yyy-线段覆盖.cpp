#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//struct T
//{
//	int a;
//	int b;
//}c[1000000];
//bool cmp(struct T a, struct T b)
//{
//	return a.b < b.b;
//}
//int main()
//{
//	int n,ans=0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d %d", &c[i].a, &c[i].b);
//	}
//	sort(c, c + n, cmp);
//	int t = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (t <= c[i].a)
//		{
//			t = c[i].b;
//			ans++;
//		}
//	}
//	printf("%d", ans);
//	return 0;
//}