#define  _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
//int main()
//{
//	int m, n,ans=0;
//	int a[100000] = { 0 };
//	int b[100000] = { 0 };
//	scanf("%d %d", &m, &n);
//	for (int i = 0; i <m; i++)scanf("%d", &a[i]);
//	sort(a, a + n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &b[i]);
//		int d = 100000;
//		int l = 0, r = m-1 ;
//		int mid = (l + r) / 2;
//		while (l<=r)
//		{
//			if (a[mid]< b[i])
//			{
//				l = mid+1;
//			}
//			if (a[mid] > b[i])
//			{
//				r = mid-1;
//			}
//			if (a[mid] == b[i])
//				break;
//			mid = (l + r) / 2;
//		}
//		if (fabs(b[i] - a[l]) < fabs(a[l-1] - b[i]))
//			d = fabs(b[i] - a[l]);
//		else
//			d = fabs(a[l - 1] - b[i]);
//		ans += d;
//	}
//	printf("%d", ans);
//	return 0;
//}
int a[100] = { 0 };
void print(int n, int* a, int cur)
{
	if (cur == n) {
		for (int i = 1; i <= n; i++) printf("%d ", a[i]);
		printf("\n");
	}
	else 
		for (int i = 1; i <= n; i++)
		{
			int ok = 1;
			for (int j = 1; j <= cur; j++)
			{
				if (a[j] == i)ok = 0;
				if (ok)
				{
					a[cur] = i;
					print(n, a, cur + 1);
				}
			}
		}
}
int main()
{
	/*if (binary_search(a, a + 8, 9))
		printf("found");
	else
		printf("no found");*/
	/*vector<int>b[20];
	int c;
	scanf("%d", &c);
	for (int i = 0; i < c; i++)
	{
		b[i].push_back(i);
	}*/
	int n;
	scanf("%d", &n);
	print(n, a, 1);
	return 0;
}