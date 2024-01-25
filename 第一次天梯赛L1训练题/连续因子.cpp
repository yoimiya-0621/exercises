#define  _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <math.h>
int fact(long long n)
{
	if (n == 1)
		return 0;
	for (int i = 2; i < sqrt(n); i++)
	{
		if (n % i == 0)
			return 1;
	}
	return 0;
}
int main()
{
	long long n,start=0,l=0;
	scanf("%lld", &n);
	if (fact(n) == 0)
	{
		printf("1\n%lld", n);
	}
	else
	{
		for (long long i = 2; i < sqrt(n); i++)
		{
			long long s = 1;
			for (long long j = i; s*j <= n; j++)
			{
				s = s * j;
				if (n % s == 0&&j-i+1>l)
				{
					start = i;
					l = j - i + 1;
				}
			}
		}
		printf("%lld\n", l);
		for (long long i = start; i < start + l; i++)
		{
			if (i == start)
				printf("%lld", i);
			else
				printf("*%lld", i);
		}
	}
	return 0;
}