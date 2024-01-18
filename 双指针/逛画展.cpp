#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int n, m,x=0,y=0;
//	scanf("%d %d", &n, &m);
//	int l = 100;
//	int a[100000] = { 0 };
//	int pm[5] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i; j < n; j++)
//		{
//			pm[a[j]-1]++;
//			if (pm[a[i] - 1] > 1)
//			{
//				pm[a[i] - 1]--;
//				i++;
//			}
//			for (int k = 0; k < m; k++)
//			{
//				if (pm[k] <1)
//					break;
//				if (k==m-1&&l > j - i + 1 )
//				{
//					l = j - i + 1;
//					x = i+1;
//					y = j+1;
//				}
//			}
//		}
//		for (int j = 0; j < m; j++)
//			pm[j] = 0;
//	}
//	printf("%d %d", x, y);
//	return 0;
//}