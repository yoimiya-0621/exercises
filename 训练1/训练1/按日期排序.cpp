#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
struct S
{
	int y;
	char a;
	int m;
	char b;
	int d;
}a[105];
bool cmp(S a, S b)
{
	if (a.y != b.y)
		return a.y < b.y;
	else
	{
		if (a.m != b.m)
			return a.m < b.m;
		else
			return a.d < b.d;
	}
}
int main()
{
	int n = 0;
	for (int i = 0; i < 100; i++)
	{
		char b[5] = { 0 };
		scanf("%s", &b);
		if (b[0] >= 0 && b[0] <= 9)
		{
			a[i].m = (b[0] - '0');
			n++;
		}
		else
			break;
		scanf("%c%d%c%d",  &a[i].a, &a[i].d, &a[i].b, &a[i].y);
	}
	sort(a, a + n, cmp);
	for (int j = 0; j <= n; j++)
		cout << a[j].d << "/" << a[j].m << "/" << a[j].y << "\n";
	return 0;
}
//#include <cstdio>
//int main()
//{
//	char s[25] = { 0 };
//	scanf("%s", s);
//	int m = 0, n = 0;
//	scanf("%d %d", &m, &n);
//	char arr[25] = { 0 };
//
//	for (int i=0; i < n; i++)
//	{
//		arr[i] = s[m];
//		m++;
//	}
//	printf("%s", arr);
//	return 0;
//}
//#include <cstdio>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//		int b = a / 100;
//		a %= 100;
//		if (b == 1)
//			printf("Ò¼");
//		if (b == 2)
//			printf("·¡");
//		if (b == 3)
//			printf("Èþ");
//		if (b == 4)
//			printf("ËÁ");
//		if (b == 5)
//			printf("Îé");
//		if (b == 6)
//			printf("Â½");
//		if (b == 7)
//			printf("Æâ");
//		if (b == 8)
//			printf("°Æ");
//		if (b == 9)
//			printf("¾Á");
//		if (b == 0)
//			printf("Áã");
//		 b = a / 10;
//		a %= 10;
//		if (b == 1)
//			printf("Ò¼");
//		if (b == 2)
//			printf("·¡");
//		if (b == 3)
//			printf("Èþ");
//		if (b == 4)
//			printf("ËÁ");
//		if (b == 5)
//			printf("Îé");
//		if (b == 6)
//			printf("Â½");
//		if (b == 7)
//			printf("Æâ");
//		if (b == 8)
//			printf("°Æ");
//		if (b == 9)
//			printf("¾Á");
//		if (b == 0)
//			printf("Áã");
//		 b = a;
//		if (b == 1)
//			printf("Ò¼");
//		if (b == 2)
//			printf("·¡");
//		if (b == 3)
//			printf("Èþ");
//		if (b == 4)
//			printf("ËÁ");
//		if (b == 5)
//			printf("Îé");
//		if (b == 6)
//			printf("Â½");
//		if (b == 7)
//			printf("Æâ");
//		if (b == 8)
//			printf("°Æ");
//		if (b == 9)
//			printf("¾Á");
//		if (b == 0)
//			printf("Áã");
//	return 0;
//}