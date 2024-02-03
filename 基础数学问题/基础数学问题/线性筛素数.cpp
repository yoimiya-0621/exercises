#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int s[10000] = { 0 };
int l = 1;
int read()
{
	int x = 0, f = 1;
	char c = getchar();
	while (c < '0' || c>'9')
	{
		if (c == '-')
			f = -1;
		c = getchar();
	}
	while (c >= '0' && c <= '9')
	{
		x = x * 10 + c - '0';
		c = getchar();
	}
	return x * f;
}
void issu(int n)
{
	if (n == 1 || n == 0)
		return;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return;
	}
	s[l] = n;
	l++;
}
int main()
{
	int n,k;
	int a[10000] = { 0 };
	n = read();
	k = read();
	for (int i = 1; i <= n; i++)
	{
		issu(i);
	}
	for (int i = 1; i <= k; i++)
	{
		a[i] = read();
		printf("%d\n", s[a[i]]);
	}
	return 0;
}