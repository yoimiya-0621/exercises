//#include <cstdio>
//int t(int x)
//{
//	int y = 2 * x;
//	int z = 3 * x;
//	int a[10] = { 0 };
//	for (int i = 0; i < 3; i++)
//	{
//		a[x % 10]++;
//		a[y % 10]++;
//		a[z % 10]++;
//		x /= 10;
//		y /= 10;
//		z /= 10;
//	}
//	for (int i = 1; i <= 9; i++)
//	{
//		if (a[i] != 1)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	for (int i = 123; i <= 333; i++)
//	{
//		if (t(i))
//			printf("%d %d %d\n", i, 2 * i, 3 * i);
//	}
//	return 0;
//}