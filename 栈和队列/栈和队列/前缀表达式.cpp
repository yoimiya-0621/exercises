#include <iostream>
#include <stack>
using namespace std;
int main()
{
	string s;
	cin >> s;
	stack<char>ch;
	int flag = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (i == 0 && (s[i] == '+' || s[i] == '-'))
		{
			cout << s[i];
			continue;
		}
		if (!isdigit(s[i]))
		{
			if (s[i] == '+' || s[i] == '-')
			{
				if (ch.empty() || ch.top() == '(')
				{
					ch.push(s[i]);
				}
				else
				{
					while (ch.top() == '+' || ch.top() == '-' || ch.top() == '*' || ch.top() == '/')
					{
						cout << " " << ch.top();
						ch.pop();
						if (ch.empty())
							break;
					}
					ch.push(s[i]);
				}
			}
			else if (s[i] == '*' || s[i] == '/')
			{
				if (ch.empty() || ch.top() == '(' || ch.top() == '+' || ch.top() == '-')
				{
					ch.push(s[i]);
				}
				else
				{
					while (ch.top() == '*' || ch.top() == '/')
					{
						cout << " " << ch.top();
						ch.pop();
						if (ch.empty())
							break;
					}
					ch.push(s[i]);
				}
			}
			else if (s[i] == '(')
			{
				ch.push(s[i]);
			}
			else if (s[i] == ')')
			{
				int k = 0;
				while (k == 0)
				{
					if (ch.top() == '(')
						k = 1;
					else
						cout << " " << ch.top();
					ch.pop();
				}
			}
		}
		else
		{
			if (flag == 1)
				cout << " ";
			if (flag == 0)
				flag = 1;
			cout << s[i];
			while (isdigit(s[i + 1]))
			{
				cout << s[i + 1];
				i++;
			}
		}
	}
	while (!ch.empty())
	{
		cout << " " << ch.top();
		ch.pop();
	}
	return 0;
}