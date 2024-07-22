//A
//#include <iostream>
//using namespace std;
//#define ll long long
//int main()
//{
//	ll a, b;
//	cin >> a >> b;
//	cout << a - b * 11;
//	return 0;
//}
//B
//#include <iostream>
//using namespace std;
//#define ll long long
//int main()
//{
//	ll a;
//	cin >> a;
//	ll ans = 0,sum=0;
//	ll i = 0;
//	while (a)
//	{
//		ans += (ll)pow(2, i);
//		i++;
//		a /= 2;
//	}
//	cout << ans;
//	return 0;
//}
//C
//#include <iostream>
//#include <cmath>
//using namespace std;
//#define ll long long
//const int N = 1e5 + 10;
//ll a[N] = { 0 };
//ll b[N] = { 0 };
//int main()
//{
//	ll n, x;
//
//	cin >> n >> x;
//	ll ans = 0;
//
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//		a[i] -= x;
//		b[i] = max(b[i - 1] + a[i], (ll)0);
//		ans = max(ans, b[i]);
//	}
//	cout << ans;
//	return 0;
//}

//D
//#include <iostream>
//using namespace std;
//#define ll long long
//int main()
//{
//	int t;
//	cin >> t;
//	ll l, r;
//	ll ans = 0;
//	while (t--)
//	{
//		cin >> l >> r;
//		ans = l;
//		for (ll i = l + 1; i <= r; i++)
//			ans ^= i;
//		cout << ans << '\n';
//	}
//	return 0;
//}

//E
//#include <iostream>
//using namespace std;
//#define ll long long
//int main()
//{
//	int t;
//	cin >> t;
//	ll a1, a2, b1, b2, c1, c2;
//	ll der;
//	while (t--)
//	{
//		cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
//		if (a1 == 0) {
//			if (b2 == 0)
//			{
//				cout << 1 << '\n';
//			}
//			else if (a2 / b2 == b1)
//			{
//				if (c2 / b2 == c1)
//					cout << "INF" << '\n';
//				else
//					cout << 0 << '\n';
//			}
//			else
//				cout << 1 << '\n';
//		}
//		else if (b2 == 0) {
//			cout << 1 << '\n';
//		}
//		else {
//			b1 -= a2 / b2;
//			c1 -= c2 / b2;
//			der = b1 * b1 - 4 * a1 * c1;
//			if (der > 0)
//				cout << 2 << '\n';
//			else if (der == 0)
//				cout << 1 << '\n';
//			else
//				cout << 0 << '\n';
//		}
//	}
//	return 0;
//}

//F
//#include <iostream>
//using namespace std;
//#define ll long long
//const int N = 5e5 + 10;
//ll a[N];
//int main()
//{
//	ll n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//	}
//	int k = 1;
//	int flag = 0;
//	while (1) {
//		for (int i = 1; i <=n-2*k;  i++)
//		{
//			if (a[i] + a[i + 2 * k] == 2 * a[i + k] && i == n - 2 * k)
//			{
//				flag = 1;
//				break;
//			}
//
//			else if (a[i] + a[i + 2 * k] == 2 * a[i + k])
//				continue;
//			else
//				break;
//		}
//		if (flag)
//		{
//			cout << k;
//			return 0;
//		}
//		k++;
//	}
//}

