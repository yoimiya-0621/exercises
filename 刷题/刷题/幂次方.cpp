#define  _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//#include <cmath>
//void print(int n)
//{
//	int flag = 0;
//	if (n <= 0)
//	return;
//	if (n == 1)
//	{
//		printf("2(0)");
//		return;
//	}
//	if (n == 2)
//	{
//		printf("2");
//		return;
//	}
//	if ((n&(n-1))==0)
//	{
//		printf("2(");
//		print(log(n) / log(2));
//		printf(")");
//		return;
//	}
//	for (int i = 14; i >= 0; i--)
//	{
//		if (pow(2, i) <= n)
//		{
//			print(pow(2,i));
//			n -= pow(2, i);
//			if(n!=0)
//			printf("+");
//			if (n == 2)
//			{
//				printf("2");
//				return;
//			}
//			else if (n == 1)
//			{
//				printf("2(0)");
//				return;
//			}
//		}
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}