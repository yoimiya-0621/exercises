#include <iostream>
#include <deque>
using namespace std;
int main()
{
	string s;
	int c = 0;
	for (int i = 1; i <= 2023; i++)
	{
		string x;
		c = i;
		while (c)
		{
			x.push_back(c%10 + '0');
			c /= 10;
		}
		reverse(x.begin(), x.end());
		s += x;
	}
	long long ans = 0;
	for (int x1 = 0; x1 < s.size(); x1++)
	{
		while (s[x1] != '2')
		{
			x1++;
			if (x1 >= s.size())
			{
				cout << ans;
				return 0;
			}
		}
		for (int x2 = x1 + 1; x2 < s.size(); x2++)
		{
			while (s[x2] != '0')
			{
				x2++;
				if (x2 >= s.size())
				{
					break;
				}
			}
			for (int x3 = x2 + 1; x3 < s.size(); x3++)
			{
				while (s[x3] != '2')
				{
					x3++;
					if (x3 >= s.size())
					{
						break;
					}
				}
				for (int x4 = x3 + 1; x4 < s.size(); x4++)
				{
					if (s[x4] == '3')
						ans++;
				}
			}
		}
	}
	cout << ans;
	return 0;
}