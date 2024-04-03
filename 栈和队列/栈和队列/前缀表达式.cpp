//#include <iostream>
//#include <stack>
//using namespace std;
//int main()
//{
//	string s;
//	cin >> s;
//	stack<char>ch;
//	int flag = 0;
//	for (int i = 0; i < s.size(); i++)
//	{
//		if ((s[i - 1] == '(' || i == 0) && (s[i] == '+' || s[i] == '-'))
//		{
//			if (flag != 0)
//				cout << " ";
//			else
//				flag = 1;
//			if (s[i] == '-' && s[i + 1] != '0')
//				cout << s[i];
//			while (isdigit(s[i + 1]) || s[i + 1] == '.') {
//				cout << s[i + 1];
//				i++;
//			}
//			continue;
//		}
//		if (!isdigit(s[i]))
//		{
//			if (s[i] == '+' || s[i] == '-')
//			{
//				if (ch.empty() || ch.top() == '(')
//				{
//					ch.push(s[i]);
//				}
//				else
//				{
//					while (ch.top() == '+' || ch.top() == '-' || ch.top() == '*' || ch.top() == '/')
//					{
//						cout << " " << ch.top();
//						ch.pop();
//						if (ch.empty())
//							break;
//					}
//					ch.push(s[i]);
//				}
//			}
//			else if (s[i] == '*' || s[i] == '/')
//			{
//				if (ch.empty() || ch.top() == '(' || ch.top() == '+' || ch.top() == '-')
//				{
//					ch.push(s[i]);
//				}
//				else
//				{
//					while (ch.top() == '*' || ch.top() == '/')
//					{
//						cout << " " << ch.top();
//						ch.pop();
//						if (ch.empty())
//							break;
//					}
//					ch.push(s[i]);
//				}
//			}
//			else if (s[i] == '(')
//			{
//				ch.push(s[i]);
//			}
//			else if (s[i] == ')')
//			{
//				int k = 0;
//				while (k == 0)
//				{
//					if (ch.top() == '(')
//						k = 1;
//					else
//						cout << " " << ch.top();
//					ch.pop();
//				}
//			}
//		}
//		else
//		{
//			if (flag == 1)
//				cout << " ";
//			if (flag == 0)
//				flag = 1;
//			cout << s[i];
//			while (isdigit(s[i + 1]) || s[i + 1] == '.')
//			{
//				cout << s[i + 1];
//				i++;
//			}
//		}
//	}
//	while (!ch.empty())
//	{
//		cout << " " << ch.top();
//		ch.pop();
//	}
//	return 0;
//}
//#include <iostream>
//#include <string>
//#include <stack>
//#include <cmath>
//using namespace std;
//int main()
//{
//	string s;
//	getline(cin, s);
//	stack<double>stk;
//	for (int i = s.size() - 1; i >= 0; i--)
//	{
//		if (!isdigit(s[i]))
//		{
//			if (s[i] == ' ')
//				continue;
//			else
//			{
//				double a = stk.top();
//				stk.pop();
//				double b = stk.top();
//				stk.pop();
//				if (s[i] == '+')
//					stk.push(a + b);
//				else if (s[i] == '-')
//					stk.push(a - b);
//				else if (s[i] == '*')
//					stk.push(a * b);
//				else {
//					if (b == 0)
//					{
//						cout << "ERROR";
//						return 0;
//					}
//					stk.push(a / b);
//				}
//			}
//		}
//		else {
//			double x = 0;
//			int flag = 0, k = 0, f = 1;
//			while (s[i] != ' ' && i >= 0)
//			{
//				if (s[i] == '.')
//					flag = 1;
//				else if (s[i] == '-')
//				{
//					f = -1;
//					break;
//				}
//				else if (isdigit(s[i]) && flag == 0)
//				{
//					x = x + (s[i] - '0') * pow(10, k);
//					k++;
//				}
//				else if (isdigit(s[i]) && flag == 1)
//				{
//					x *= pow(10, -k);
//					flag = 0;
//					k = 0;
//					x = x + (s[i] - '0') * pow(10, k);
//					k++;
//				}
//				i--;
//			}
//			stk.push(f * x);
//		}
//	}
//	printf("%.1lf", stk.top());
//	return 0;
//}