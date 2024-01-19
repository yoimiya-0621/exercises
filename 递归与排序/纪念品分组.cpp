#define  _CRT_SECURE_NO_WARNINGS
//第一版，含快排
//#include <stdio.h>
//int w;
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
//int divide(int a[], int l, int r)
//{
//	int i = l;
//	int j = r;
//	int ans = 0;
//	while (i <= j)
//	{
//		if (i == j)
//		{
//			ans++;
//			break;
//		}
//		if (a[i] + a[j] <= w)
//		{
//			i++;
//			j--;
//			ans++;
//		}
//		else
//		{
//			j--;
//			ans++;
//		}
//	}
//	return ans;
//}
//int main()
//{
//	int  n;
//	int a[30001];
//	scanf("%d", &w);
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	qsort(a, 1, n);
//	int z = divide(a, 1, n);
//	printf("%d", z);
//	return 0;
//}



//第二版，省事
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int w, n,sum=0;
//	int a[10000] = { 0 };
//	scanf("%d", &w);
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	sort(a, a + n);
//	int l = 0, r = n - 1;
//	while (l <= r)
//	{
//		if (l == r)
//		{
//			sum++;
//			break;
//		}
//		if (a[l] + a[r] <= w)
//		{
//			l++;
//			r--;
//			sum++;
//		}
//		else
//		{
//			r--;
//			sum++;
//		}
//	}
//	printf("%d", sum);
//}