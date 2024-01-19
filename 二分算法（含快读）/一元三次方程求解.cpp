#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//double a, b, c, d;
//double f(double x)
//{
//	return a * x * x * x + b * x * x + c * x + d;
//}
//int main()
//{
//	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
//	double l = -100,r=l+1;
//	for (int i = 1; i <= 3; i++) {
//		while (f(l) * f(r) > 0)
//		{
//			l++;
//			r++;
//		}
//		while (1)
//		{
//			double x = (l + r) / 2;
//			if (f(x) == 0)
//			{
//				printf("%.2lf ", x);
//				l = x + 1;
//				r = l + 1;
//				break;
//			}
//			if (f(x) < 0 && f(l) > 0 || f(x) > 0 && f(l) < 0)
//				r = x;
//			else
//				l = x;
//		}
//	}
//	return 0;
//}