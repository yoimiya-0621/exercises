//#include <iostream>
//using namespace std;
//char s[105][105];
//bool a[105][105];
//void dfs(int i, int j, int k)
//{
//	
//}
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			cin >> s[i];
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (s[i][j] == 'y')
//			{
//				dfs(i, j, 1);
//			}
//		}
//	}
//	return 0;
//}
#include <iostream>
using namespace std;
char a[100][100] = { 0 };
char ch[10] = "yizhong";
int dx[8] = { -1,0,1,-1,1,-1,0,1 };
int dy[8] = { 1,1,1,0,0,-1,-1,-1 };
int b[100][3] = { 0 };
int n, m = 0;
bool dfs(int x, int y,int k)
{
	for (int i = 0; i < 7; i++)
	{
		if (x<1 || x>n || y<1 || y>n)
			return false;
		if (a[x][y] != ch[i])
			return false;
		x += dx[k];
		y += dy[k];
	}
	return true;
}

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> a[i][j];
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (a[i][j] == 'y')
			{
				int k = 0;
				for (k = 0; k < 8; k++)
				{
					if (dfs(i, j, k))
					{
						b[m][0] = i;
						b[m][1] = j;
						b[m][2] = k;
						m++;
					}
				}
			}
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			a[b[i][0]][b[i][1]] = j;
			j++;
			b[i][0] += dx[b[i][2]];
			b[i][1] += dy[b[i][2]];
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (isdigit(a[i][j]))
				cout << ch[a[i][j]];
			else
				cout << "*";
		}
		cout << "\n";
	}
	return 0;
}