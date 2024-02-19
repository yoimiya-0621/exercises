#define  _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cmath>
int t(int x, int y, int z)
{
	int m = x;
	while (y%x)
	{
		x = y % x;
		y = m;
		m = x;
	}
	if (m == z)
		return 1;
	else
		return 0;
}
int main()
{
	long x, y;
	scanf("%ld %ld", &x, &y);
	long p = x, q=0, ans = 0;
	if (x > y)
	{
		printf("0");
		return 0;
	}
	else
	{
		for (; p <= sqrt(x * y); p += x)
		{
			if (y % p == 0)
			{
				q = y * x / p;
				if (t(p, q, x))
				{
					printf("%d %d\n", p, q);
					if (q != p)
					{
						ans += 2;
					}
					else
					{
						ans++;
					}
				}
			}
		}
		printf("%ld", ans);
	}
	return 0;
}