#include <iostream>
#include <vector>
#include <map>
using namespace std;
const int N = 1e5 + 5;
int f[N];
int find(int x)
{
	if (f[x] == x)
		return x;
	else
		return f[x] = find(f[x]);
}
struct Node {
	vector<int>a;
}node[N];
int ser(int x, int y,int ooo,int kk[N]) {
	if (x==y)
		return ooo;
	for (int i = 0; i < node[x].a.size(); i++) {
		kk[node[x].a[i]] = 1;
		if(node[x].a[i]==0)
		ser(node[x].a[i], y,ooo+1,kk);
	}
}
int main()
{
	int T;
	int n, m;
	int x, y;
	cin >> T;
	while (T--)
	{
		cin >> n >> m;
		int ans[N] = { 0 };
		int p[N] = { 0 };
		for (int i = 1; i <= n; i++)
			f[i] = i;
		for (int i = 0; i < m; i++)
		{
			cin >> x >> y;
			
			if (find(x) == find(y)) {
				int kk[N] = { 0 };
				ans[find(x)]++;
				int sum = 0;
				p[find(x)] =ser(x,y,0,kk);
			}
			else
				f[find(y)] = find(x);
			node[x].a.push_back(y);
		}
		int k = 0;
		for (int i = 1; i <= n; i++)
		{
			if (f[i] == i)
				k++;
		}
		if (k > 1) {
			cout << "No" << ' ';
			int flag = 0;
			for (int i = 1; i <= n; i++)
			{
				if (f[i] == i)
				{
					if (ans[i] == 1)
						flag++;
				}
			}
			cout << flag;
		}
		else {
			if (ans[find(1)] == 1)
			{
				cout << "Yes" << ' ';
				cout << p[find(1)];
			}
			else
				cout << "No" << ' ' << 0;
		}
		cout << '\n';
	}
	return 0;
}