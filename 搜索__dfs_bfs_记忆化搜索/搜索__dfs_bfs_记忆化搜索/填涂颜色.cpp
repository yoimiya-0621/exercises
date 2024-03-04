//#include <iostream>
//#include <algorithm>
//using namespace std;
//int a[35][35] = { 0 };
//int n;
//int dx[4] = { 0,0,1,-1 };
//int dy[4] = { 1,-1,0,0 };
//void dfs(int x, int y)
//{
//	if (x<1 || x>n || y<1 || y>n)
//		return;
//	if (a[x][y] == 0)
//	{
//		a[x][y] = 3;
//		for (int i = 0; i < 4; i++)
//			dfs(x + dx[i], y + dy[i]);
//	}
//}
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; ++i)
//		for (int j = 1; j <= n; ++j)
//			cin >> a[i][j];
//	for (int i = 1; i <= n; i++)
//	{
//		dfs(1, i);
//		dfs(i, 1);
//		dfs(n, i);
//		dfs(i, n);
//	}
//
//	for (int i = 1; i <= n; ++i)
//	{
//		for (int j = 1; j <= n; ++j)
//		{
//			if (a[i][j] == 3)
//				a[i][j] = 0;
//			else if (a[i][j] == 0)
//				a[i][j] = 2;
//			cout << a[i][j] << " ";
//		}
//		cout << "\n";
//	}
//	return 0;
//}
//#include <iostream>
//#include <algorithm>
//#include <string>
//using namespace std;
//int main()
//{
//	int n;
//	char ch;
//	cin >> n >> ch;
//	char c = getchar();
//	string s, x;
//	getline(cin, s);
//	int j = s.size();
//	for (int i = 0; i <= n; i++)
//	{
//		if (j >= 0)
//		{
//			x.push_back(s[j]);
//			j--;
//		}
//		else
//			x.push_back(ch);
//	}
//	reverse(x.begin(), x.end());
//	cout << x;
//	return 0;
//}
