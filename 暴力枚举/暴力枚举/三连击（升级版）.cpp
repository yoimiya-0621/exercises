#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
int t(int x,int a,int b,int c)
{
	if (x * b % a != 0)
		return 0;
	if (x * c % a != 0)
		return 0;
	int y = x * b / a;
	int z = x * c / a;
	if (y>999 || y < 100 || z>999 || z < 100)
		return 0;
	int arr[10] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		arr[x % 10]++;
		arr[y % 10]++;
		arr[z % 10]++;
		x /= 10;
		y /= 10;
		z /= 10;
	}
	for (int i = 1; i <= 9; i++)
	{
		if (arr[i] !=1)
			return 0;
	}
	return 1;
}
int main()
{
	int a, b, c,flag=0;
	scanf("%d %d %d", &a, &b, &c);
	for (int i = 123; i <= 987; i++)
	{
		if (t(i, a, b, c))
		{
			flag++;
			printf("%d %d %d\n", i, i * b / a, i * c / a);
		}
	}
	if (flag == 0)
		printf("No!!!");
	return 0;
}