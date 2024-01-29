#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//struct S
//{
//	char s[20];
//	int y;
//	int m;
//	int d;
//	int id;
//}a[100];
//bool cmp(struct S a, struct S b)
//{
//	if (a.y != b.y)
//		return a.y < b.y;
//	else
//	{
//		if (a.m != b.m)
//			return a.m < b.m;
//		else {
//			if (a.d != b.d)
//				return a.d < b.d;
//			else
//				return a.id > b.id;;
//		}
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s %d %d %d", a[i].s, &a[i].y, &a[i].m, &a[i].d);
//		a[i].id = i;
//	}
//	sort(a, a + n, cmp);
//	for (int i = 0; i < n; i++)
//	{
//		printf("%s\n", a[i].s);
//	}
//	return 0;
//}