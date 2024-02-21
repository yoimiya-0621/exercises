//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//#include <algorithm>
//using namespace std;
//int emin(int a, int b)
//{
//	if (a <= b)
//		return a;
//	else
//		return b;
//}
//int main()
//{
//	int n;
//	int a[1000] = { 0 };
//	int b[1000] = { 0 };
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//		b[i] = a[i];
//	}
//	sort(b, b + n);
//	int fi=0,fe=0,zi=0,ze=0;
//	for (int i = 0; i < n; i++)
//	{
//		b[i] = b[i] - a[i];
//		if (b[i] == 1)
//			zi++;
//		else if (b[i] == 2)
//			ze++;
//		else if (b[i] == -1)
//			fi++;
//		else if (b[i] == -2)
//			fe++;
//	}
//	int i = emin(fi,zi);
//	i += emin(fe,ze);
//	i += 2 * fabs(fe - ze);
//	printf("%d",i);
//}