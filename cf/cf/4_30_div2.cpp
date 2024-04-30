//A
//#include <iostream>
//#include <algorithm>
//#include <string>
//using namespace std;
//#define ll long long
//ll a[105];
//ll b[105];
//int c[105];
//
//int main()
//{
//	int t, n;
//	cin >> t;
//	while (t--)
//	{
//		cin >> n;
//		for (int i = 0; i < n; i++)
//			cin >> a[i];
//		for (int i = 0; i < n; i++)
//			cin >> b[i];
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (j == n - 1 && a[i] > b[j])
//				{
//					c[i] = n - i;
//				}
//				if (a[i] <= b[j])
//				{
//					c[i] = j - i;
//					break;
//				}
//			}
//		}
//		sort(c, c + n);
//		cout << c[n - 1] << '\n';
//		memset(a, 0, sizeof(a));
//		memset(c, 0, sizeof(c));
//		memset(b, 0, sizeof(b));
//	}
//	return 0;
//}
//B
#include <iostream>
using namespace std;
int main()
{
	int t,n;
	string s;
	cin >> t;
	while (t--)
	{
		cin >>n>> s;
		int sum = 0;
		if (n == 2) {
			if ((s == "UU" || s == "DD"))
			{
				cout << "NO" << '\n';
				continue;;
			}
			else
			{
				cout << "YES" << '\n';
				continue;;
			}
		}
		if (n == 1)
		{
			if (s == "U")
			{
				cout << "YES" << '\n';
				continue;;
			}
			else
			{
				cout << "NO" << '\n';
				continue;;
			}
		}
		for (int i = 0; i < n; i++)
		{
			if (s[i] == 'U')
				sum++;
		}
		if (sum % 2 == 1)
			cout << "YES" << '\n';
		else
			cout << "NO" << "\n";
	}
	return 0;
}