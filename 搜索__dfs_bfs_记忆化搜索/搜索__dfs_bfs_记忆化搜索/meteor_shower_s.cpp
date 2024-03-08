//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//bool a[305][305] = { false };
//int aa[305][305] = { 0 };
//int aaa[305][305] = { 0 };
//int dx[5] = { 0,1,-1,0,0 };
//int dy[5] = { 1,0,0,-1,0 };
//int sum = 100000000;
//void dfs(int x, int y,int ans)
//{
//	if (ans >= sum)
//		return;
//	if (a[x][y] == false)
//	{
//		sum = min(sum, ans);
//		return;
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		if (x + dx[i] >= 0 && y + dy[i] >= 0 && x + dx[i] <= 300 && y + dy[i] <= 300)
//		{
//			if (a[x + dx[i]][y+dy[i]] && ans+1 < aa[x + dx[i]][y + dy[i]]||!a[x+dx[i]][y+dy[i]])
//			{
//				dfs(x + dx[i], y + dy[i],ans+1);
//			}
//		}
//	}
//}
//int main()
//{
//	int n,t=0,x=0,y=0;
//	cin >> n;
//	for (int i = 0; i <= 300; i++)
//		for (int j = 0; j <= 300; j++)
//			aaa[i][j] = sum;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> x >> y>>t;
//		for (int j = 0; j < 5; j++)
//		{
//			a[x + dx[j]][y + dy[j]] = true;
//			aa[x + dx[j]][y + dy[j]] = t;
//		}
//	}
//	dfs(0, 0, 0);
//	cout << sum;
//	return 0;
//}
#include <iostream>
using namespace std;
struct S {
	char c;
	float h;
}a[12];
int main()
{
	int n;
	cin >> n;
	char c = getchar();
	for (int i = 0; i < n; i++)
	{
		scanf("%c %f", &a[i].c, &a[i].h);
		if (a[i].c == 'M')
		{
			printf("%.2f\n", a[i].h / 1.09);
		}
		else
			printf("%.2f\n", a[i].h * 1.09);
		c = getchar();
	}
	return 0;
}