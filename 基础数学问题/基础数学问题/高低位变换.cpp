#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", (n << 16) + (n >> 16));
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	unsigned int n;
//	unsigned int sum = 0, x = 0;
//	scanf("%u", &n);
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			if (x < 16)
//				sum += pow(2, x + 16);
//			if (x >= 16)
//				sum += pow(2, x - 16);
//		}
//		n /= 2;
//		x++;
//	}
//	printf("%u", sum);
//}