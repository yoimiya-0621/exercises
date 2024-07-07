//A
//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int a, b, x;
//    cin >> a >> b >> x;
//    if (min(a, b) + x > max(a, b))
//        cout << "YES";
//    else
//        cout << "NO";
//    return 0;
//}

//B,c
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	/*if (a > b)
//		swap(a, b);
//	if (a > c)
//		swap(a, c);
//	if (b > c)
//		swap(b, c);
//		*/
//	int ma= 0;
//	ma = max(ma, a + b + c);
//	ma = max(ma, c * a * b);
//	ma = max(ma, (a + b) * c);
//	ma = max(ma, a * (b + c));
//	cout << ma;
//	return 0;
//}

//D
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
const int N = 1e6 + 10;
int aa[N];
int cc[N];
int main()
{
	int T;
	cin >> T;
	int a, b, c;
	int a1, a2, b1, b2,k1,k2;
	while (T--)
	{
		cin >> a >>b >> c;
		k1 = 0;
		k2 = 0;
		if (c == 0)
		{
			if (b == 0)
				cout << 1 << ' ' << 0 << " " << a << ' ' << 0 << '\n';
			else
			{
				cout << a << " " << b << ' ' << 1 << ' ' << 0 << '\n';
			}
			continue;
		}
		for (int i = -abs(a); i <= abs(a); i++) {
			if (i == 0)
				continue;
			if (a % i == 0)
				aa[k1++] = i;
		}for (int i = -abs(c); i <= abs(c); i++) {
			if (i == 0)
				continue;
			if (c % i == 0)
				cc[k2++] = i;
		}
		int flag = 0;
		if (c == 0)
		{
			if (b == 0)
				cout << 1<<' '<<0<<" "<<a << ' ' << 0 << '\n';
			else
			{
				cout << a << " " << b <<' '<< 1 << ' ' << 0 << '\n';
			}
		}
		for (int i = 0; i <k1; i++)
		{
			for (int j =0; j <k2; j++)
			{
				if (aa[i]*c/cc[j]+a/aa[i]*cc[j]==b)
				{
					flag = 1;
					a1 = aa[i];
					a2 = a/aa[i];
					b1 = cc[j];
					b2 = c / cc[j];
					break;
				}
			}
			if (flag)
				break;
		}

		if (flag)
			cout << a1<<" "<<b1<<" "<<a2<<" "<<b2 << '\n';
		else
			cout << "NO" << "\n";
	}
	return 0;
}

//E
//#include <iostream>
//#include <algorithm>
//using namespace std;
//#define mod 998244353
//const int N = 1e6 + 10;
//struct T {
//
//};
//int main()
//{
//	int n;
//	cin >> n;
//	return 0;
//}