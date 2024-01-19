#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void qsort(int a[], int l, int r)
//{
//	if (l == r)
//		return;
//	int x = a[l + r >> 1];
//	int t = 0;
//	int i = l - 1, j = r + 1;
//	while (i < j)
//	{
//		do { i++; } while (a[i] < x);
//		do { j--; } while (a[j] > x);
//		if (i < j)
//		{
//			t = a[i];
//			a[i] = a[j];
//			a[j] = t;
//		}
//	}
//	qsort(a, l, j);
//	qsort(a, j + 1, r);
//}
//int main()
//{
//	int n;
//	long long m;
//	int a[2000000];
//	scanf("%d %lld", &n, &m);
//	for (int i = 1; i <= m; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	qsort(a, 1, m);
//	for (int i = 1; i <= m; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}