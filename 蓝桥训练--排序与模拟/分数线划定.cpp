#define  _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//struct S
//{
//	int id;
//	int s;
//}a[10000];
//bool cmp(struct S a, struct S b)
//{
//	if (a.s == b.s)
//		return a.id < b.id;
//	else
//		return a.s > b.s;
//}
//int main()
//{
//	int n, m,ans=0;
//	scanf("%d %d", &n, &m);
//	m = m * 3 / 2;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d %d", &a[i].id, &a[i].s);
//	}
//	sort(a, a + n, cmp);
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i].s >= a[m - 1].s)
//			ans++;
//	}
//	printf("%d %d\n", a[m - 1].s, ans);
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i].s >= a[m - 1].s)
//			printf("%d %d\n", a[i].id, a[i].s);
//	}
//	return 0;
//}