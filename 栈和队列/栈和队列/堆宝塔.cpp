#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
int main()
{
	stack<int>a;
	stack<int>b;
	int n;
	cin >> n;
	int x = 0, ans = 0, m = 0;
	while (n--)
	{
		cin >> x;
		if (a.empty() || x < a.top())
			a.push(x);
		else
		{
			if (b.empty() || x > b.top())
				b.push(x);
			else
			{
				ans += 1;
				m = max(m, (int)a.size());
				while (!a.empty())
					a.pop();
				while (!b.empty() && x < b.top())
				{
					a.push(b.top());
					b.pop();
				}
				a.push(x);
			}
		}
	}
	if (!a.empty())
	{
		ans += 1;
		m = max(m, (int)a.size());
	}
	if (!b.empty())
	{
		ans += 1;
		m = max(m, (int)b.size());
	}
	cout << ans << " " << m;
	return 0;
}