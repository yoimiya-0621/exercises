#define  _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//int main()
//{
//	int n,x,y;
//	int a[10000][4];
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//		scanf("%d %d %d %d", &a[i][0], &a[i][1], &a[i][2], &a[i][3]);
//	scanf("%d %d", &x, &y);
//	n--;
//	while (n>=0)
//	{
//		if (a[n][0] <= x && a[n][0] + a[n][2] >= x && a[n][1] <= y && a[n][1] + a[n][3] >= y)
//		{
//			printf("%d", n + 1);
//			break;
//		}
//		n--;
//	}
//	if (n < 0)
//		printf("-1");
//	return 0;
//}