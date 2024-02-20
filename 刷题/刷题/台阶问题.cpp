#define  _CRT_SECURE_NO_WARNINGS
#include <cstdio>
int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	int a[10000] = { 0 };
	a[0] = a[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j <= k; j++)
		{
			if (i >= j)
				a[i] = (a[i] + a[i - j])%100003;
		}
	}
	printf("%d", a[n]);
	return 0;
}