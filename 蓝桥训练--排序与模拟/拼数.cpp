#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
using namespace std;
struct S
{
	char a[11];
}s[10000];
bool cmp(struct S a, struct S b)
{
	int i = 0;
	while (a.a[i] == b.a[i] && a.a[i] != '\0')
	{
		i++;
	}
	if (a.a[i] != b.a[i]&& a.a[i]!='\0'&& b.a[i]!='\0')
	{
		return a.a[i] > b.a[i];
	}
	else
	{
		if(a.a[i]=='\0'&&b.a[i]<=b.a[i-1]||b.a[i]=='\0'&&a.a[i]>a.a[i-1])
			return a.a[i] < b.a[i];
		if(a.a[i] == '\0' && b.a[i] > b.a[i - 1]||b.a[i]=='\0'&&a.a[i]<=a.a[i-1])
			return a.a[i] > b.a[i];
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", s[i].a);
	}
	sort(s, s + n, cmp);
	for (int i = 0; i < n; i++)
	{
		printf("%s", s[i].a);
	}
	return 0;
}