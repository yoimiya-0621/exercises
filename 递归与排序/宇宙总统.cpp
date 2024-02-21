//#define  _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//struct S
//{
//	char s[102];
//	int id;
//	int len;
//}a[25];
//bool cmp(struct S a, struct S b)
//{
//	if (a.len != b.len)
//		return a.len > b.len;
//	else
//	{
//		return (strcmp(a.s, b.s) > 0);
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s", a[i].s);
//		a[i].id = i+1;
//		a[i].len = strlen(a[i].s);
//	}
//	sort(a, a + n, cmp);
//	printf("%d\n%s", a[0].id, a[0].s);
//	return 0;
//}