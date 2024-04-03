//#include <iostream>
//#include <stack>
//using namespace std;
//int main() {
//	int n, m;
//	cin >> n >> m;
//	while (n--)
//	{
//		stack<char>ch;
//		string s;
//		cin >> s;
//		int i = 0;
//		for (i = 0; i < s.size(); i++)
//		{
//			if (s[i] == 'S')
//			{
//				ch.push('s');
//			}
//			if (s[i] == 'X' && ch.empty())
//				break;
//			if (s[i] == 'X' && !ch.empty())
//				ch.pop();
//			if (ch.size() > m)
//				break;
//		}
//		if (i == s.size() && ch.empty())
//			cout << "YES";
//		else
//			cout << "NO";
//		cout << "\n";
//	}
//	return 0;
//}