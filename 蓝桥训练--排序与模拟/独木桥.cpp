#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int l, n;
//	int a[10000];
//	int min[10000];
//	int max[10000];
//
//	scanf("%d", &l);
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//		if (a[i] > fabs(l + 1 - a[i]))
//		{
//			min[i] = fabs(l + 1 - a[i]);
//			max[i] = a[i];
//		}
//		else
//		{
//			max[i] = fabs(l + 1 - a[i]);
//			min[i] = a[i];
//		}
//	}
//	sort(max, max + n);
//	sort(min, min + n);
//	printf("%d %d", min[n-1], max[n - 1]);
//	return 0;
//}