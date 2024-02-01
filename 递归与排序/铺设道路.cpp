#define  _CRT_SECURE_NO_WARNINGS
//³¬Ê±
//#include <stdio.h>
//int ans = 0;
//void dps(int a[], int l, int r)
//{
//	if (l > r)
//		return;
//	int min = 10000;
//	for (int i = l; i <= r; i++)
//	{
//		if (min > a[i])
//			min = a[i];
//	}
//	ans += min;
//	for (int i = l; i <= r; i++)
//	{
//		a[i]-=min;
//	}
//	for (int i = l; i <= r; i++)
//	{
//		if (a[i] == 0)
//		{
//			dps(a, l, i - 1);
//			dps(a, i + 1, r);
//		}
//	}
//}
//int main()
//{
//	int n;
//	int a[100001] = { 0 };
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
//	dps(a, 1, n);
//	printf("%d", ans);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n;
//	int a[100001] = { 0 };
//	int b[100001] = { 0 };
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &a[i]);
//		if (a[i] >= a[i - 1])
//		{
//			b[i] = b[i - 1] + (a[i] - a[i - 1]);
//		}
//		else
//			b[i] = b[i - 1];
//	}
//	printf("%d", b[n]);
//	return 0;
//}