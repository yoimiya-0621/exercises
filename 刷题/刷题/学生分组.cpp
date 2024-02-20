//#define  _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int n,sum=0,l,r,ans=0,b=0,c=0;
//	int a[50];
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//		sum += a[i];
//	}
//	scanf("%d %d", &l, &r);
//	if ((sum / n)<l || (sum / n)>r)
//	{
//		printf("-1");
//		return 0;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] < l)
//			b += l - a[i];
//		else if (a[i] > r)
//			c += a[i] - r;
//	}
//	/*sort(a, a + n);
//	for (int i = 0; i < n; i++)
//	{
//		while (a[i] < l)
//		{
//			static int m= 0;
//			m++;
//			if (m > 1)
//			{
//				for (int j = n - 1; a[i] < l; j--)
//				{
//					if (a[j] > l)
//					{
//						while (a[i] < l && a[j] >l)
//						{
//							a[i]++;
//							a[j]--;
//							ans++;
//						}
//					}
//				}
//			}
//				for (int j = n - 1; a[i]<l; j--)
//				{
//					if (a[j] > r)
//					{
//						while (a[i] < l && a[j] >r)
//						{
//							a[i]++;
//							a[j]--;
//							ans++;
//						}
//					}
//				}
//		}
//		while (a[i] > r)
//		{
//			static int n = 0;
//			n++;
//			if (n > 1)
//			{
//				for (int j = 0; a[i] > r; j++)
//				{
//					if (a[j] < r) {
//						while (a[j] <r && a[i]>r)
//						{
//							a[i]--;
//							a[j]++;
//							ans++;
//						}
//					}
//				}
//			}
//				for (int j = 0; a[i]>r; j++)
//				{
//					if (a[j] < l) {
//						while (a[j] <l && a[i]>r)
//						{
//							a[i]--;
//							a[j]++;
//							ans++;
//						}
//					}
//				}
//		}
//	}*/
//	ans = max(b, c);
//	printf("%d", ans);
//	return 0;
//}