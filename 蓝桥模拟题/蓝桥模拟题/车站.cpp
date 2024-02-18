//#define  _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//int arr[1000][2];
//int i = 4;
//int j;
//int main()
//{
//	int a, n, m, x,ans=0;
//	scanf("%d %d %d %d", &a, &n, &m, &x);
//	arr[0][0] = { a }; arr[0][1] = { 0 };
//	arr[1][0] = { 0 }; arr[1][1] = { 0 };
//	arr[2][0] = { a }; arr[2][1] = { 0 };
//	arr[3][0] = { 0 }; arr[3][1] = { 1 };
//	int sa = 2*a,sb=1;
//	for (; i < n-1; i++)
//	{
//		arr[i][0] = arr[i - 1][0] + arr[i - 2][0];
//		arr[i][1] = arr[i - 1][1] + arr[i - 2][1];
//		sa += arr[i][0];
//		sb += arr[i][1];
//	}
//	int y = (m - sa)/sb;
//	for (j = 0; j < x; j++)
//	{
//		ans = ans + arr[j][0] + y*arr[j][1];
//	}
//	printf("%d", ans);
//	return 0;
//}