#define  _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <algorithm>
using namespace std;
struct COW
{
	int x;
	int id;
}c[100];
bool cmp(struct COW a, struct COW b)
{
	return a.x < b.x;
}
bool bigcmp(int &a, int &b)
{
	return a > b;
}
int main()
{
	int n,l=100000,x=0,y=0;
	int id[100] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &c[i].x, &c[i].id);
		id[c[i].id]=1;
	}
	sort(c, c + n, cmp);
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			id[c[j].id]++;
			if (id[c[i].id] > 2)
			{
				id[c[i].id]--;
				i++;
			}
			for (int k = 0; k < 100; k++)
			{
				if (id[k]==1)
				{
					break;
				}
				if (k == 100 - 1 && l > c[j].x-c[i].x)
				{
					l = c[j].x - c[i].x;
					x = c[i].x;
					y = c[j].x;
				}
			}
		}
		for (int j = 0; j < 100; j++)
		{
			if(id[j]!=0)
			id[j] = 1;
		}
	}
	printf("%d", y-x);
	return 0;
}