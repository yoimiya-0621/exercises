#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int a[25][25] = { 0 };
int m, n,t,k=0;
struct S
{
	int x;
	int y;
	int num;
}s[200];
bool cmp(S a, S b)
{
	return a.num > b.num;
}
int main()
{
	cin >> n >> m >> t;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> a[i][j];
			if (a[i][j])
			{
				s[k].x = i;
				s[k].y = j;
				s[k].num = a[i][j];
				k++;
			}
		}
	}
	sort(s, s + k, cmp);
	int i = 0,j=s[0].y, time = 0, ans = 0, kk = 0;
	while (1)
	{
		if (time +1+ fabs(s[kk].x - i) + fabs(s[kk].y - j) + s[kk].x <= t)
		{
			time += fabs(s[kk].x - i) + fabs(s[kk].y - j)+1;
			i = s[kk].x;
			j = s[kk].y;
			ans += s[kk].num;
			kk++;
		}
		else
			break;
	}
	cout << ans;
	return 0;
}