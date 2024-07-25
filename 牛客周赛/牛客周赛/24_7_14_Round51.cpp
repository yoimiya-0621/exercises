//////A
////#include <iostream>
////using namespace std;
////void solve()
////{
////    long long m;
////    cin >> m;
////    long long i = 1;
////    while (1)
////    {
////        if ((1 + i * m) % 2 == 0)
////        {
////            cout << (1 + i * m) / 2;
////            return;
////        }
////        i++;
////    }
////}
////int main()
////{
////
////    solve();
////    return 0;
////}
//
////B
////#include <iostream>
////using namespace std;
////int main()
////{
////	int n;
////	long long sum = 0;
////	cin >> n;
////	string a[110];
////	for (int i = 0; i < n; i++)
////	{
////		cin >> a[i];
////		for (int j = 0; j < a[i].size(); j++)
////		{
////			sum += a[i][j] - '0';
////		}
////	}
////	if (sum % 3 == 0)
////		cout << "YES";
////	else
////		cout << "NO";
////	return 0;
////}
//
////C
////#include <iostream>
////#include <algorithm>
////using namespace std;
////int main()
////{
////	double x, y, a, b, c, t;
////	cin >> x >> y >> t >> a >> b >> c;
////	double time = 0;
////	if (x <= t) {
////		time = (double)(100 - x) / c;
////	}
////	else
////	{
////		time = min((double)(100 - x) / b, (double)(x - t) / y + (double)(100 - t) / c);
////	}
////	printf("%.8lf", time);
////	return 0;
////}
//
////D
////#include <iostream>
////#include <algorithm>
////#include <deque>
////using namespace std;
////#define ll long long
////int main()
////{
////	ios::sync_with_stdio(false);
////	cin.tie(0);
////	string a;
////	ll b;
////	cin >> a >> b;
////	deque<ll>ans;
////	for (int i = sqrt(b); i >=1; i--)
////	{
////		if (b % i == 0)
////		{
////			ans.push_back(i);
////			ans.push_front(b / i);
////		}
////	}
////	for (int i = 0; i < ans.size(); i++)
////	{
////		int k = 0;
////		ll sum = 0;
////		if ((a[a.size() - 1] - '0') % 2 == 1 && ans[i] % 2 == 0)
////			continue;
////		for (int j = 0; j < a.size(); j++)
////		{
////			sum = sum * 10 + a[j] - '0';
////			k++;
////			if (sum >= ans[i])
////			{
////				sum -= sum / ans[i]*ans[i];
////			}
////		}
////		if (sum == 0)
////		{
////			cout << ans[i];
////			break;
////		}
////	}
////	return 0;
////}
//
////E
////#include <iostream>
////using namespace std;
////#define ll long long
////ll a[510][510];
////int n;
////ll ans = 1e9;
////ll b[510] = { 0 };
////void dfs(int x, int y,ll k)
////{
////	if (k > ans)
////		return;
////	if (x == n - 1 && y == n - 1)
////	{
////		ans = min(ans, k);
////	}
////	if (x > n - 1 || y > n - 1)
////		return;
////	dfs(x, y + 1, max(k, a[x][y + 1]));
////	dfs(x + 1, y, max(k, a[x + 1][y]));
////
////}
////int main()
////{
////	cin >> n;
////	for (int i = 0; i < n; i++)
////	{
////		for (int j = 0; j < n; j++)
////		{
////			cin >> a[i][j];
////		}
////	}
////	dfs(0, 0,a[0][0]);
////	cout << ans;
////	return 0;
////}
//
////F
//#include <iostream>
//using namespace std;
//const int N = 5e5 + 10;
//#define ll long long
//ll a[N];
//int n, q;
//ll ans;
//ll dp1[N] = { 0 };
//ll dp2[N] = { 0 };
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//	}
//	ll l, r;
//	cin >> q;
//	while (q--)
//	{
//		cin >> l >> r;
//		for (int i = l; i <= r; i++)
//		{
//			dp1[i] = max(dp1[i - 1] + a[i], a[i]);
//			dp2[i] = min(dp2[i - 1] + a[i], a[i]);
//		}
//		for (int i = l; i <= r; i++)
//		{
//			ans = max(abs(dp1[i]), abs(dp2[i]),ans);
//		}
//		cout << ans << '\n';
//		memset(dp1, 0, sizeof(dp1));
//		memset(dp2, 0, sizeof(dp2));
//		ans = -1e9;
//	}
//	return 0;
//}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//#define ll long long
//const int N = 1e6 + 10;
//char ch1[N];
//char ch2[N];
//ll a[N];
//ll dp[N];
//ll n, ans;
//int main()
//{
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        cin >> ch1[i];
//        if (ch1[i] == 'R')
//            a[i]++;
//    }
//    for (int i = 0; i < n; i++) {
//        cin >> ch2[i];
//        if (ch2[i] == 'R')
//            a[i]++;
//    }
//    for (int i = 0; i < n; i++)
//    {
//        if (i == 0) {
//            if (a[i] == 2)
//                dp[i] = 1;
//        }
//        else if (a[i] == 2)
//        {
//            dp[i] = dp[i - 1] + 2;
//        }
//        else if (a[i] == 0) {
//            dp[i] = 0;
//        }
//        else {
//            if (ch1[i] == 'R' && ch1[i - 1] == 'R') {
//                dp[i] = dp[i - 1] + 1;
//                if (a[i-1] == 2)
//                    dp[i] -= 1;
//            }
//            else if (ch2[i] == 'R' && ch2[i - 1] == 'R') {
//                dp[i] = dp[i - 1] + 1;
//                if (a[i - 1] == 2)
//                    dp[i] -= 1;
//            }
//            else
//                dp[i] = 0;
//        }
//        ans = max(ans, dp[i]);
//    }
//    cout << ans;
//    return 0;
//}

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// const int N = 1e6 + 10;
// char ch1[N];
// char ch2[N];
// ll a[N];
// ll dp[N];
// ll n, ans;
// int main()
// {
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         cin >> ch1[i];
//         if (ch1[i] == 'R')
//             a[i]++;
//     }
//     for (int i = 0; i < n; i++) {
//         cin >> ch2[i];
//         if (ch2[i] == 'R')
//             a[i]++;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if(i==0){
//             if(a[i]==2)
//             dp[i]=1;
//         }
//         else if (a[i] == 2)
//         {
//             dp[i] = dp[i - 1] + 2;
//         }
//         else if (a[i] == 0) {
//             dp[i] = 0;
//         }
//         else {
//             if (ch1[i] == 'R' && ch1[i - 1] == 'R') {
//                 dp[i] = dp[i - 1] + 1;
//             }
//             else if (ch2[i] == 'R' && ch2[i - 1] == 'R') {
//                 dp[i] = dp[i - 1] + 1;
//             }
//             else
//                 dp[i] = 0;
//         }
//         ans = max(ans, dp[i]);
//     }
//     cout << ans;
//     return 0;
// }

//#include <iostream>
//#include <algorithm>
//using namespace std;
//#define ll long long
//const int N = 1e6 + 10;
//char ch[5][N];
//ll dp[5][N], a[N];
//ll n, ans;
//int main()
//{
//    cin >> n;
//    for (int i = 1; i <= 2; i++) {
//        for (int j = 1; j <= n; j++) {
//            cin >> ch[i][j];
//            if (ch[i][j] == 'R') {
//                a[j]++;
//            }
//        }
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        if (i == 1) {
//            if (a[i] == 2) {
//                dp[1][1] = 1;
//                dp[2][1] = 1;
//                ans = 1;
//            }
//            continue;
//        }
//        if (a[i] == 2) {
//            if (a[i - 1] == 2) {
//                dp[1][i] = dp[2][i - 1] + 2;
//                dp[2][i] = dp[1][i - 1] + 2;
//            }
//            else if (a[i - 1] == 0) {
//                dp[1][i] = 1;
//                dp[2][i] = 1;
//            }
//            else {
//                if (ch[1][i-1] == 'R') {
//                    dp[1][i] = dp[1][i - 1] + 1;
//                    dp[2][i] = dp[1][i - 1] + 2;
//                }
//                else {
//                    dp[1][i] = dp[2][i - 1] + 2;
//                    dp[2][i] = dp[2][i - 1] + 1;
//                }
//            }
//        }
//        else if (a[i] == 1) {
//            if (ch[1][i] == 'R') {
//                if (ch[1][i - 1] == 'R')
//                    dp[1][i] = dp[1][i - 1] + 1;
//                else
//                    dp[1][i] = 0;
//                dp[2][i] = 0;
//            }
//            else {
//                if (ch[2][i - 1] == 'R')
//                    dp[2][i] = dp[2][i - 1] + 1;
//                else
//                    dp[2][i] = 0;
//                dp[1][i] = 0;
//            }
//        }
//        else if (a[i] == 0) {
//            dp[1][i] = 0;
//            dp[2][i] = 0;
//        }
//        ans = max(ans, dp[1][i]);
//        ans = max(ans, dp[2][i]);
//    }
//    cout << ans;
//    return 0;
//}

//#include <iostream>
//#include <vector>
//#include <map>
//using namespace std;
//#define ll long long
//const int N = 2e5 + 10;
//int n, x, y;
//int dx[4] = { 0,1,0,-1 };
//int dy[4] = { 1,0,-1,0 };
//ll ans = 0;
//vector<pair<int, int>>v;
//map<pair<int, int>, int>mp;
//int main()
//{
//    string s;
//    cin >> n >> x >> y >> s;
//    pair<int, int>v0(0, 0);
//    for (int i = 0; i < n; i++) {
//        if (s[i] == 'W') {
//            v0.second += 1;
//        }
//        else if (s[i] == 'S') {
//            v0.second -= 1;
//        }
//        else if (s[i] == 'A') {
//            v0.first -= 1;
//        }
//        else {
//            v0.first += 1;
//        }
//        v.push_back(v0);
//    }
//    for (int i = n - 1; i >= 0; i--) {
//        mp[v[i]] = i + 1;
//        pair<int,int> ok(v[i].first + x, v[i].second + y);
//        if (mp[ok]) {
//            ans += n - mp[ok] + 1;
//        }
//    }
//    cout << ans;
//    return 0;
//}

//#include <iostream>
//#include <map>
//#include <vector>
//using namespace std;
//int a, n, b;
//int wina, winb;
//int WINA, WINB;
//map<int, int>mp;
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
//    string s;
//    cin >> n >> a >> b;
//    cin >> s;
//    int flag = 0, k = 0;
//    map<int, int>mp1;
//    map<int, int>mp2;
//    for (int i = 0; i < n; i++)
//    {
//        wina = 0;
//        winb = 0;
//        for (int j = i;; j++)
//        {
//            j %= n;
//            if (s[j] == '1')
//                wina++;
//            else
//                winb++;
//            if (wina >= a) {
//                mp1[i] = j+1;
//                mp2[i] = 2;
//                break;
//            }
//            else if (winb >= a) {
//                mp1[i] = j+1;
//                mp2[i] = 1;
//                break;
//            }
//        }
//        
//    }
//    for (int i = 0; i < n; i++) {
//        WINA = 0;
//        WINB = 0;
//        wina = 0;
//        winb = 0;
//        for (int j = i;;)
//        {
//            j %= n;
//            if (mp1[j]) {
//                if (mp2[j] == 2)
//                    WINA++;
//                else if (mp2[j] == 1)
//                    WINB++;
//                j = mp1[j];
//            }
//            if (WINA >= b) {
//                flag = 1;
//                break;
//            }
//            if (WINB >= b) {
//                flag = 0;
//                break;
//            }
//        }
//        cout << flag;
//    }
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//#define MAXSIZE 50
//typedef int KeyType;
//
//typedef  struct
//{
//    KeyType  key;
//} ElemType;
//
//typedef  struct
//{
//    ElemType* R;
//    int  length;
//} SSTable;
//
//void  Create(SSTable& T)
//{
//    int i;
//    T.R = new ElemType[MAXSIZE + 1];
//    cin >> T.length;
//    for (i = 1; i <= T.length; i++)
//        cin >> T.R[i].key;
//}
//
//int  Search_Bin(SSTable T, KeyType k);
//
//int main()
//{
//    SSTable T;  KeyType k;
//    Create(T);
//    cin >> k;
//    int pos = Search_Bin(T, k);
//    if (pos == 0) cout << "NOT FOUND" << endl;
//    else cout << pos << endl;
//    return 0;
//}
//
///* 请在这里填写答案 */
//int  Search_Bin(SSTable T, KeyType k)
//{
//    int l = 1, r = T.length, mid, flag = 0;//定义左右，中指针
//    while (l < r) {
//        mid = (l + r) >> 1;
//        if (k > T.R[mid].key)
//            l = mid + 1;
//        else if (k < T.R[mid].key)
//            r = mid;
//        else {
//            flag = 1;//找到了
//            break;
//        }
//    }
//    if (flag)
//        return mid;
//    else
//        return 0;
//}


#include<iostream>
using namespace std;
#define int long long
const int N = 1e6 + 100;
int p[N];
int sum[N];
int find(int x)
{
	if (p[x] != x) p[x] = find(p[x]);
	return p[x];
}

void solve()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> sum[i];
		p[i] = i;
	}
	for (int i = 1; i <= m; i++)
	{
		int x, y;
		cin >> x >> y;
		p[find(x)] = find(y);
	}
	for (int i = 1; i <= n; i++)
	{
		sum[p[find(i)]] = max(sum[p[find(i)]], sum[i]);
	}
	int mi = 1e9 + 1;
	int ans = 0;
	for (int i = 1; i <= n; i++)
	{
		if (find(i) != i)  continue;
		mi = min(mi, sum[p[find(i)]]);
		ans += p[find(i)];
	}
	cout << ans - mi << endl;
}

signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int _ = 1;
	//cin >> _;

	while (_--) {
		solve();
	}

	return 0;
}