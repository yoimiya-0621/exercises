//#include <iostream>
//#include <stack>
//#include <vector>
//using namespace std;
//int main()
//{
//	string m, n;
//	cin >> m >> n;
//	stack<char>stk;
//	vector<vector<int>>ans;
//	int j = 0,i = 0;
//	while((!stk.empty()||i<m.size())&&j<n.size())
//	{
//		if (n[j] == m[i])
//		{
//			i++;
//			j++;
//			ans.push_back({1,2});
//		}
//		else if (!stk.empty()&&stk.top() == n[j])
//		{
//			stk.pop();
//			j++;
//			ans.push_back({ 3,2 });
//		}
//		else {
//			if (i < m.size()) {
//				stk.push(m[i]);
//				i++;
//				ans.push_back({ 1,3 });
//			}
//			else 
//				break;
//		}
//	}
//	if (stk.empty())
//	{
//		for (int i = 0; i < ans.size(); i++)
//		{
//			cout << ans[i][0] << "->" << ans[i][1] << "\n";
//		}
//	}
//	else
//		cout << "Are you kidding me?";
//	return 0;
//}