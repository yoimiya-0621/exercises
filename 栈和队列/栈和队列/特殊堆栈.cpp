//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//int main()
//{
//	int n, x = 0, a[1000] = { 0 },k=0;
//	cin >> n;
//	vector<int>stk;
//	string s;
//	while (n--)
//	{
//		cin >> s;
//		if (s == "Pop")
//		{
//			if (stk.size() == 0)
//				cout << "Invalid" << "\n";
//			else
//			{
//				cout << stk[stk.size() - 1] << "\n";
//				stk.pop_back();
//			}
//		}
//		else if (s == "PeekMedian")
//		{
//			if (stk.size() == 0)
//				cout << "Invalid" << "\n";
//			else
//			{
//				for (k = 0; k < stk.size(); k++)
//					a[k] = stk[k];
//				sort(a, a + k);
//				if (k % 2 == 0) {
//					cout << a[k / 2 - 1] << "\n";
//				}
//				else
//					cout << a[(stk.size() + 1) / 2 - 1] << "\n";
//				memset(a, 0, sizeof(a));
//				k = 0;
//			}
//		}
//		else
//		{
//			cin >> x;
//			stk.push_back(x);
//		}
//	}
//	return 0;
//}