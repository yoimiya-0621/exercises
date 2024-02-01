#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//struct S
//{
//	int t;
//	int id;
//}a[1001];
//bool cmp(struct S a, struct S b)
//{
//	return a.t < b.t;
//}
//int main()
//{
//	int n;
//	int b[1001] = { 0 };
//	scanf("%d", &n);
//	a[0].t = 0;
//	a[0].id = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &a[i].t);
//		a[i].id = i;
//	}
//	sort(a + 1, a + n+1,cmp);
//	double sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		b[i] = b[i - 1] + a[i-1].t;
//		sum += b[i];
//		printf("%d ", a[i].id);
//	}
//	double s = sum / n;
//	printf("\n%.2lf",s);
//	return 0;
//}