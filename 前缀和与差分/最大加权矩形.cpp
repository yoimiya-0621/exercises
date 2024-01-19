#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int n,ans=-10000;
//	int arr[121][121] = { 0 };
//	int sum[121][121] = { 0 };
//	int r=ans;
//
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + arr[i][j];
//
//			for (int x=1;x<=i;x++)
//			{
//				for (int y = 1; y <= j; y++) 
//				{
//					r = sum[i][j] - sum[x - 1][j] - sum[i][y - 1] + sum[x - 1][y - 1];
//					if (ans < r)
//						ans = r;
//				}
//			}
//		}
//	}
//	printf("%d", ans);
//	return 0;
//}