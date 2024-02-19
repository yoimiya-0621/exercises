#define  _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//struct STD
//{
//	char s[25];
//	int a;
//	int b;
//	char c;
//	char d;
//	int t;
//	int sum;
//}td[100];
//int main()
//{
//	int n,ans=0,max=0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s %d %d %c %c %d", td[i].s, &td[i].a, &td[i].b, &td[i].c, &td[i].d, &td[i].t);
//		td[i].sum = 0;
//		if (td[i].a > 80 && td[i].t >= 1)
//			td[i].sum += 8000;
//		if (td[i].a > 85 && td[i].b > 80)
//			td[i].sum += 4000;
//		if (td[i].a > 90)
//			td[i].sum += 2000;
//		if (td[i].a > 85 && td[i].d == 'Y')
//			td[i].sum += 1000;
//		if (td[i].b > 80 && td[i].c == 'Y')
//			td[i].sum += 850;
//		ans += td[i].sum;
//		if (td[max].sum < td[i].sum)
//			max = i;
//	}
//	printf("%s\n%d\n%d", td[max].s, td[max].sum, ans);
//	return 0;
//}