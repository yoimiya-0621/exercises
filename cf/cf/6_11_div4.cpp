//A
//#include <bits/stdc++.h>
//#include <iostream>
//using namespace std;
//int main()
//{
//	int t;
//	cin >> t;
//	string a, b;
//	while (t--)
//	{
//		cin >> a >> b;
//		for (int i = 0; i < 3; i++)
//		{
//			if (i)
//				cout << a[i];
//			else
//				cout << b[i];
//		}
//		cout << ' ';
//		for (int i = 0; i < 3; i++)
//		{
//			if (!i)
//				cout << a[i];
//			else
//				cout << b[i];
//		}
//		cout << "\n";
//	}
//	return 0;
//}
//B
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int t;
//	cin >> t;
//	int n;
//	while (t--)
//	{
//		int x = 0,ans=0,anns=0,sum=0;
//		cin >> n;
//		for (int i = 2; i <= n; i++)
//		{
//			sum = 0;
//			for (int j = 1; j * i <= n; j++)
//			{
//				sum += j * i;
//			}
//			if (sum > ans)
//			{
//				ans = sum;
//				anns = i;
//			}
//		}
//		cout << anns << '\n';
//	}
//	return 0;
//}

//C
//#include <bits/stdc++.h>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//#define ll long long
//const int N = 2e5 + 10;
//ll a[N];
//int main()
//{
//	int t;
//	int n,ans=0;
//	ll sum = 0,m=0;
//	cin >> t;
//	while (t--)
//	{
//		cin >> n;
//		ans = 0;
//		sum = 0;
//		m = 0;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> a[i];
//			m = max(m, a[i]);
//			sum += a[i];
//			if (sum - m == m)
//				ans++;
//		}
//		memset(a, 0, sizeof(a));
//		cout << ans << '\n';
//	}
//	return 0;
//}

//D
//#include <bits/stdc++.h>
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//const int N = 2e5 + 10;
//int main()
//{
//	int t;
//	cin >> t;
//	char ch;
//	int n, m, ans = 0,dx=0,dy=0;
//	while (t--)
//	{
//		cin >> n >> m;
//		dx = 0, dy = 0;
//
//		vector<vector<char>>a(n+1);
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= m; j++)
//			{
//				cin >> ch;
//				a[i].push_back(ch);
//				if (dy == 0 && a[i][j-1] == '#')
//					dy = j;
//			}
//		}
//		for (int j = 1; j <= m; j++)
//		{
//			for (int i = 1; i <= n; i++)
//			{
//				if (dx == 0 && a[i][j-1] == '#')
//				{
//					dx = i;
//					break;
//				}
//			}
//			if (dx && dy)
//				break;
//		}
//		cout << dx << ' ' << dy << '\n';
//	}
//	return 0;
//}

//E
//#include <iostream>
//#include <algorithm>
//using namespace std;
//#define ll long long
//ll n;
//ll a[3];
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		cin >> a[0] >> a[1] >> a[2] >> n;
//		sort(a, a + 3);
//		ll ans = 0,sum=0;
//		for (ll i = 1; i <= a[0]; i++)
//		{
//			if (n % i == 0) {
//				for (ll j = 1; j <= a[1]; j++)
//				{
//					if (n / i % j == 0) {
//						if (n / i / j <= a[2])
//						{
//							sum = (-n / i / j + a[2] + 1) * (-j + a[1] + 1) * (a[0] - i + 1);
//							ans = max(ans, sum);
//						}
//					}
//				}
//			}
//		}
//		cout << ans << '\n';
//	}
//	return 0;
//}

//F
//#include <iostream>
//using namespace std;
//int main()
//{
//    unsigned char x = 255, y = '\2';
//    int z = (int)y;
//    switch (!!x) {
//    case 0: printf("*0*#"); break;
//    case 1:
//        switch (y) {
//        case 0: printf("*1*#"); break;
//        case 1: printf("*2*#"); break;
//        }
//    default: printf("*3*#");
//    }
//	return 0;
//}