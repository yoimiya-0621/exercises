#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main()
{
	string s1, s2, s3;
	stack<char>stk;
	vector<char>ch;
	vector<string>s;
	string str;
	int n, m, max = 0;
	int a[10000] = { 0 };
	cin >> n >> m >> max;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		s.push_back(str);
	}
	int x;
	cin >> x;
	while (x != -1)
	{
		if (x == 0)
		{
			if (!stk.empty())
			{
				ch.push_back(stk.top());
				stk.pop();
			}
		}
		else
		{
			if (stk.size() < max && a[x - 1] < s[x - 1].size())
			{
				stk.push(s[x - 1][a[x - 1]]);
				a[x - 1]++;
			}
			else if (stk.size() == max && a[x - 1] < s[x - 1].size())
			{
				ch.push_back(stk.top());
				stk.pop();
				stk.push(s[x - 1][a[x - 1]]);
				a[x - 1]++;
			}
		}
		cin >> x;
	}
	for (int i = 0; i < ch.size(); i++)
		cout << ch[i];
	return 0;
}