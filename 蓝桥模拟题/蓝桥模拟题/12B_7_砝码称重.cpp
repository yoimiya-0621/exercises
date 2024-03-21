//#include <iostream>
//using namespace std;
//int n;
//long long sum = 0;
//int a[105] = { 0 };
//int b[105] = { 0 };
//int c[105] = { 0 };
//bool aaa[100005] = { false };
//void dfs(int ans, int i)
//{
//	if (i > n)
//		return;
//	if (aaa[ans] == false&&ans>0)
//	{
//		aaa[ans] = true;
//		sum++;
//	}
//	dfs(ans + a[i], i + 1);
//	dfs(ans + b[i], i + 1);
//	dfs(ans + c[i], i + 1);
//}
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//		b[i] = -a[i];
//		c[i] = 0;
//	}
//	dfs(0, 0);
//	cout << sum;
//	return 0;
//}