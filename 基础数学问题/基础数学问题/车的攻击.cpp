//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int n,xi=0,yi=0,k;
//	int x[1000] = { 0 }, y[1000] = { 0 };
//	scanf("%d %d", &n,&k);
//	for (int i = 0; i < k; i++)
//	{
//		scanf("%d %d", &x[i], &y[i]);
//	}
//	sort(x, x + k);
//	sort(y, y + k);
//	for (int i = 0; i < k; i++)
//	{
//		if (x[i] != x[i + 1])
//			xi++;
//		if (y[i] != y[i + 1])
//			yi++;
//	}
//	int s = n * (xi + yi) - xi * yi;
//	printf("%d", s);
//}