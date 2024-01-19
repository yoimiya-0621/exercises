#define  _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//struct STD
//{
//	int id;
//	int yu;
//	int shu;
//	int ying;
//	int sum;
//}c[10000];
//bool cmp(struct STD c1,struct STD c2)
//{
//	if (c1.sum == c2.sum)
//	{
//		if (c1.yu == c2.yu)
//			return c1.id < c2.id;
//		else
//			return c1.yu > c2.yu;
//	}
//	else
//		return c1.sum > c2.sum;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d %d %d", &c[i].yu, &c[i].shu, &c[i].ying);
//		c[i].id = i;
//		c[i].sum = c[i].yu + c[i].shu + c[i].ying;
//	}
//	sort(c + 1, c + n+1, cmp);
//	for (int i = 1; i <= 5; i++)
//	{
//		printf("%d %d\n", c[i].id, c[i].sum);
//	}
//	return 0;
//}