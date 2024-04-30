//#include <iostream>
//#include <stack>
//#include <algorithm>
//using namespace std;
//int a[105] = { 0 };
//int main()
//{
//	int t;
//	cin >> t;
//	int n, k, ans = 0, x;
//
//	while (t--)
//	{
//		cin >> n >> k;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> x;
//			a[x]++;
//		}
//		sort(a+1, a + 101);
//		stack<int>stk;
//		for (int i = 1; i <= 100; i++)
//		{
//			if (a[i])
//			{
//				stk.push(a[i]);
//			}
//		}
//		while (1)
//		{
//			if (stk.top() >= k)
//			{
//				int v = stk.top();
//				stk.pop();
//				if (stk.empty())
//				{
//					stk.push(v - 1);
//				}
//				else
//				stk.top() += v - 1;
//			}
//			else
//				break;
//		}
//		while (!stk.empty())
//		{
//			ans += stk.top();
//			stk.pop();
//		}
//		cout << ans << '\n';
//		ans = 0;
//		memset(a, 0, sizeof(a));
//	}
//	return 0;
//}
