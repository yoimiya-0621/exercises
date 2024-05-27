//#include <iostream>
//using namespace std;
//int main()
//{
//	int n, t,m;
//	cin >> t;
//	while (t--)
//	{
//		cin >> n>>m;
//		if (n >= m && (n - m) % 2 == 0)
//			cout << "yes" << '\n';
//		else
//			cout << "no" << '\n';
//	}
//	return 0;
//}
//B
#include <iostream>
#include <cmath>
using namespace std;
#define ll long long
int a[35] = { 0 };
int main()
{
	int t,n=32;
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> t;
	ll x;
	while (t--)
	{
		cin >> x;
		for (int i = n; i >= 0; i--)
		{
			if (x >= pow(2, i))
			{
				x -= (ll)pow(2, i);
				a[i] = 1;
			}
			//cout << a[i] << ' ';
		}
		for (int i = 0; i <= 32; i++)
		{
			if (a[i] == 1 && a[i + 1] == 1)
			{
				a[i] = -1;
				while (a[i + 1] == 1)
				{
					a[i + 1] = 0;
					i++;
				}
				a[i + 1] = 1;
			}
		}
		int flag = -1;
		for (int i = 32; i >= 0; i--)
		{
			if (a[i] != 0)
			{
				flag = i;
				break;
			}
		}
		cout << flag+1 << '\n';
		for (int i = 0; i <= flag; i++)
			cout << a[i] << ' ';
		cout << '\n';
		memset(a, 0, sizeof(a));
	}
	return 0;
}