//#include <iostream>
//#include <algorithm>
//using namespace std;
//int n, a, b;
//int k[205] = { 0 },an[205] = { 0 };
//bool kk[205] = { false };
//int ans = 10000000;
//void dfs(int x, int m)
//{
//	an[x] = m;
//	if (x == b)
//	{
//		ans = min(ans, m);
//	}
//	if (x + k[x] >= 1 && x + k[x] <= n&&kk[x+x[k]]==false&&m+1<an[x+k[x]]) {
//		kk[x + k[x]] = true;
//		dfs(x + k[x], m + 1);
//		kk[x + k[x]] = false;
//	}
//	if (x - k[x] >= 1 && x - k[x] <= n&&kk[x-k[x]]==false&&m+1<an[x-k[x]]) {
//		kk[x - k[x]] = true;
//		dfs(x - k[x], m + 1);
//		kk[x - k[x]] = false;
//	}
//}
//int main()
//{
//	cin >> n >> a >> b;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> k[i];
//		an[i] = 10000000;
//	}
//	kk[a] = true;
//	dfs(a,0);
//	if (ans == 10000000)
//		ans = -1;
//	cout << ans;
//	return 0;
//}