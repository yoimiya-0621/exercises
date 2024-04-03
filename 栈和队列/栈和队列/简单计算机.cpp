//#include <iostream>
//#include <stack>
//using namespace std;
//int main()
//{
//	int n,a;
//	char c;
//	cin >> n;
//	stack<int>num;
//	stack<char>ch;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a;
//		num.push(a);
//	}
//	for (int i = 0; i < n - 1; i++)
//	{
//		cin >> c;
//		ch.push(c);
//	}
//	for (int i = 0; i < n - 1; i++)
//	{
//		int a = num.top();
//		num.pop();
//		int b = num.top();
//		num.pop();
//		c = ch.top();
//		ch.pop();
//		if (c == '+')
//			num.push(a + b);
//		else if (c == '-')
//			num.push(b - a);
//		else if (c == '*')
//			num.push(a * b);
//		else
//		{
//			if (a == 0)
//			{
//				printf("ERROR: %d/0", b);
//				return 0;
//			}
//			else
//				num.push(b / a);
//		}
//	}
//	cout << num.top();
//	return 0;
//}