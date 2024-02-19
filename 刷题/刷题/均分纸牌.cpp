#define  _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//int main()
//{
//	int n,sum=0,ans=0;
//	int a[100];
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//		sum += a[i];
//	}
//	sum = sum / n;
//	for (int i = 0; i < n-1; i++)
//	{
//		if (a[i] < sum)
//		{
//			a[i + 1] -= sum - a[i];
//			ans++;
//		}
//		else if (a[i] > sum)
//		{
//			a[i + 1] += a[i] - sum;
//			ans++;
//		}
//	}
//	printf("%d", ans);
//	return 0;
//}