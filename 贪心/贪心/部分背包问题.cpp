//#define  _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//struct S
//{
//	int w;
//	int p;
//	double pr;
//}a[10000];
//bool cmp(struct S a, struct S b)
//{
//	return a.pr > b.pr;
//}
//int main()
//{
//	int n, t;
//	scanf("%d %d", &n, &t);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d %d", &a[i].w, &a[i].p);
//		a[i].pr = a[i].p / a[i].w;
//	}
//	sort(a, a + n, cmp);
//	int j = 0;
//	double ans = 0;
//	while (t > 0||j>n)
//	{
//		if (t >= a[j].w)
//		{
//			t -= a[j].w;
//			ans += a[j].p;
//		}
//		else
//		{
//			ans += t * a[j].pr;
//			t = 0;
//		}
//		j++;
//	}
//	printf("%.2lf", ans);
//	return 0;
//}