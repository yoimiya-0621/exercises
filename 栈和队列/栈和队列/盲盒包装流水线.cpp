//#include <iostream>
//#include <stack>
//#include <map>
//#include <vector>
//using namespace std;
//int main()
//{
//	stack<int>stk;
//	int n, s,id;
//	cin >> n >> s;
//	vector<string>name;
//	map<string, int>ans;
//	string x;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> x;
//		name.push_back(x);
//	}
//	for (int i = 0; i < n / s; i++)
//	{
//		for (int j = 0; j < s; j++)
//		{
//			cin >> id;
//			stk.push(id);
//		}
//		for (int j = 0; j < s; j++)
//		{
//			ans[name[i * s+ j]] = stk.top();
//			stk.pop();
//		}
//	}
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> x;
//		if (ans[x] != 0)
//			cout << ans[x] << "\n";
//		else
//			cout << "Wrong Number" << "\n";
//	}
//	return 0;
//}