//#include <iostream>
//#include <map>
//#include <algorithm>
//using namespace std;
//#define ll long long
//const int N = 1e5 + 10;
//ll a[N];
//int main()
//{
//    ll n, m;
//    map<ll, ll>mp;
//    cin >> n >> m;
//    ll x;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//    }
//    sort(a, a + n);
//    ll k = 1;
//    ll ans = 0;
//    if (a[0] != 1) {
//        cout << 0;
//        return 0;
//    }
//    for (int i = 0; i < n; i++)
//    {
//        if (i && a[i] != a[i - 1]) {
//            if (a[i] == a[i - 1] + 1) {
//                k++;
//            }
//            else {
//                break;
//            }
//        }
//        else {
//            if (k == 1 || mp[k] < mp[k - 1]) {
//                ans++;
//                mp[k] += 1;
//            }
//            else
//                break;
//        }
//    }
//    cout << ans;
//    return 0;
//}

//#include <iostream>
//#include <cmath>
//#include <map>
//using namespace std;
//#define ll long long
//const int N = 1e3 + 10;
//ll a[N];
//ll d[N];
//int main()
//{
//	ll n;
//	cin >> n;
//	map<ll, ll>mp;
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//		for (int j = 1; j <= sqrt(a[i]); j++)
//		{
//			if (a[i] % j == 0)
//			{
//				if (i + j <= n) {
//					if (d[i + j] == 0)
//						d[i + j] = d[i] + 1;
//				}
//				if (i - j >= 2) {
//					if (d[i - j] == 0)
//					{
//						d[i - j] = d[i] + 1;
//					}
//				}
//
//				if (i + a[i]/j <= n) {
//					if (d[i + a[i]/j] == 0)
//						d[i + a[i]/j] = d[i] + 1;
//				}
//				if (i - a[i]/j >= 2) {
//					if (d[a[i - a[i]/j]] == 0)
//					{
//						d[a[i - a[i]/j]] = d[i] + 1;
//					}
//				}
//			}
//		}
//	}
//	cout << d[a[n]];
//	return 0;
//}

#include <bits/stdc++.h>
using namespace std;
int p[35];//�洢�ֽ������
int x;
int flag = 0;
void f(int n, int k)//�������ֽ�n��Ŀǰ�Ѿ��ֽ�kλ
{
    if (n == 0) {//�޷������ֽ⣬���
        cout << x << "=";
        for (int i = 1; i <= k; i++)
        {
            if (i > 1)
                cout << '+';
            cout << p[i];
        }
        flag++;//��flag���жϸ�����ֺŻ��ǻ���
        if (flag != 4 && k > 1)
            cout << ';';
        else {
            cout << '\n';
            flag = 0;
        }
        return;//�������εݹ�
    }
    for (int i = 1; i <= n; i++) {
        if (i >= p[k]) {//��֤���ηֽ�������ִ���ǰһλ
            p[k + 1] = i;
            f(n - i, k + 1);//�ݹ�ֽ�
        }
    }
}
int main()
{
    cin >> x;
    f(x, 0);
    return 0;
}