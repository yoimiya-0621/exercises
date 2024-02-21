//#define  _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//#include <cmath>
//#include <algorithm>
//using namespace std;
//struct SITE
//{
//	int x;
//	int y;
//	int z;
//}a[50000];
//bool cmp(struct SITE a, struct SITE b)
//{
//	return a.z < b.z;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d %d %d", &a[i].x, &a[i].y, &a[i].z);
//	}
//	sort(a, a + n, cmp);
//	double sum = 0;
//	for (int i = 0; i + 1 < n; i++)
//	{
//		sum += sqrt(pow(a[i + 1].x - a[i].x, 2) + pow(a[i + 1].y - a[i].y, 2) + pow(a[i + 1].z - a[i].z, 2));
//	}
//	printf("%.3lf", sum);
//	return 0;
//}