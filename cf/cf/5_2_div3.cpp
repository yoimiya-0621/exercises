////A
////#include <bits/stdc++.h>
////using namespace std;
////int main()
////{
////	int t, x, ans = 0, m = 0;
////	cin >> t;
////	while (t--)
////	{
////		cin >> x;
////		m = x;
////		for (int i = x - 1; i >= 1; i--)
////		{
////			if (__gcd(x, i) + i >= ans)
////			{
////				ans = __gcd(x, i) + i;
////				m = i;
////			}
////		}
////		cout << m << '\n';
////		ans = 0;
////	}
////	return 0;
////}
////B
////#include <iostream>
////using namespace std;
////int main()
////{
////	int t, m, n;
////	string a, b;
////	cin >> t;
////	while (t--)
////	{
////		cin >> m >> n;
////		cin >> a >> b;
////		int i = 0, y = 0, flag = 0,flag2=0;
////		for (; i < m; i++)
////		{
////			if (flag)
////				break;
////			for (int j = y; j < n; j++)
////			{
////				if (j == n - 1 && a[i] != b[j])
////				{
////					flag2 = 1;
////					break;
////				}
////				if (a[i] == b[j])
////				{
////					y = j+1;
////					if (y > n - 1)
////					{
////						flag = 1;
////						break;
////					}
////					break;
////				}
////				if (y > n - 1)
////				{
////					flag = 1;
////					break;
////				}
////			}
////			if (flag2)
////				break;
////		}
////		cout << i << '\n';
////	}
////	return 0;
////}
////C
//#include <iostream>
//#include <vector>
//using namespace std;
//#define ll long long
//ll a[510];
//int main()
//{
//	int t, n;
//	cin >> t;
//	while (t--)
//	{
//		cin >> n;
//		for (int i = 0; i < n-1; i++)
//		{
//			cin >> a[i];
//		}
//		vector<ll>ans;
//		/*int k = 1;
//		while (1)
//		{
//			if (k * a[0] > a[1] && a[1]&&n!=2)
//			{
//				ans.push_back(a[0] * k + 1);
//				break;
//			}
//			if (n == 2)
//			{
//				ans.push_back(a[0] + 1);
//				break;
//			}
//			k++;
//		}*/
//		ans.push_back(a[0] + 1);
//		for (int i = 0; i < n-1; i++)
//		{
//			if (ans[ans.size() - 1] > a[i] && a[i] != 1&&a[i]>a[i+1])
//				ans.push_back(a[i]);
//			else
//			{
//				int k = 1;
//				while (a[i] +k* ans[ans.size() - 1] <= a[i + 1])k++;
//				ans.push_back(ans[ans.size() - 1]*k + a[i]);
//			}
//		}
//		for (int i = 0; i < n; i++)
//		{
//			if (i)
//				cout << ' ';
//			cout << ans[i];
//		}
//		cout << '\n';
//		memset(a, 0, sizeof(a));
//	}
//	return 0;
//}
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
ll a[200010] = { 0 };

int main()
{
    ll n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    ll sum = 0, ans = 1e10;
    for (int i = 0; i + k - 1 < n; i++)
    {
        sum = 0;
        for (int j = i; j < i + k; j++)
        {
            sum += abs(a[j] - a[i + (k-1)/2+(k+1)%2]) * abs(a[j] - a[i + (k - 1) / 2 + (k + 1) % 2]);
        }
        if (sum < ans)
        {
            ans = sum;
        }
    }
    cout << ans;
    return 0;
}
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//    int n, k;
//    cin >> n >> k;
//
//    vector<int> beauty(n);
//    for (int i = 0; i < n; i++) {
//        cin >> beauty[i];
//    }
//
//    sort(beauty.begin(), beauty.end());
//
//    int t = beauty[(k - 1) / 2];
//    long long disharmony = 0;
//
//    for (int i = 0; i < k; i++) {
//        disharmony += pow(beauty[i] - t, 2);
//    }
//
//    cout << disharmony << endl;
//
//    return 0;
//}
