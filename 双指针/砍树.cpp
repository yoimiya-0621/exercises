#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
	long long n, m;
	int a[100000];
	scanf("%lld %lld", &n, &m);
	for (long long i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, a + n);
	int h = a[n - 1];
	long long sum = 0;
	int i = n - 1;
	while (sum < m)
	{
		h--;
		while (a[i] > h)
			i--;
		sum += (n - 1) - i;
	}
	printf("%d", h);
	return 0;
}