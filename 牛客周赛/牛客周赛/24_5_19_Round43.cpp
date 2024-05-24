////A
////#include <iostream>
////using namespace std;
////int main()
////{
////	int n;
////	cin >> n;
////	if (n % 2 == 0)
////		cout << n / 2 << " " << n / 2;
////	else
////		cout << -1;
////	return 0;
////}
////B
////#include <iostream>
////#include <cmath>
////#include <algorithm>
////using namespace std;
////#define ll long long
////#define ld long double
////int main()
////{
////	ll n;
////	cin >> n;
////	ll x = sqrt(n);
////	if (x*x == n)
////	{
////		cout << 0;
////		return 0;
////	}
////	ll y = 0;
////	if (n % 2 == 0&&x%2==0||n%2==1&&x%2==1)
////	{
////		y = x + 2;
////	}
////	else
////	{
////		y = x + 1;
////		x--;
////	}
////	ll ans = min(abs(x * x - n), abs(y * y - n));
////	cout << ans/2;
////	return 0;
////}
////C
////#include <iostream>
////#include <algorithm>
////using namespace std;
////const int N = 1e5 + 10;
////int a[N];
////int b[N];
////int main()
////{
////	string s;
////	cin >> s;
////	int ans = N;
////	int n = s.size();
////	for (int i = 0; i < n; i++)
////	{
////		if (s[i] >= 'a' && s[i] <= 'z')
////			a[i]++;
////		if (i)
////			a[i] += a[i - 1];
////	}
////	for (int i = n-1; i >=0; i--)
////	{
////		if (s[i] >= 'A' && s[i] <= 'Z')
////			b[i]++;
////		if (i!=n-1)
////			b[i] += b[i + 1];
////	}
////	int x = 0;
////	for (int i = 0; i < n; i++)
////	{
////		x = a[i] + b[i];
////		if (s[i] >= 'A' && s[i] <= 'Z')
////			x--;
////		if (ans > x)
////			ans = x;
////	}
////	if (ans == 0 && (s[0] >= 'a' && s[0] <= 'z' || s[n - 1] >= 'A' && s[n - 1] <= 'Z'))
////		ans++;
////	cout << ans;
////	return 0;
////}
////D
//#include <iostream>
//#include <map>
//using namespace std;
//const int N = 1e5 + 10;
//int a[N];
//int b[N];
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//		b[i] = b[i - 1] + a[i];
//	}
//	int ans = 0;
//	map<int, int>c;
//	for (int i = 1; i<= n; i++)
//	{
//		if (i - k > 0)
//		{
//			if (c[a[i - k]] == 1)
//				c.erase(a[i - k]);
//			else
//				c[a[i - k]]--;
//		}
//		c[a[i]] += 1;
//			if (b[i] - b[i-k] == k * (k + 1) / 2&&c.size()==k)
//			{
//				ans++;
//			}
//	}
//	/*int flag = 1,ans=0;
//	for (int i = 0; i + k - 1< n; i++)
//	{
//		flag = 1;
//		for (int j = 0; j < k; j++)
//		{
//			b[a[i+j]]++;
//			if (b[a[i]] >= 2)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag)
//			ans++;
//		memset(b, 0, sizeof(b));
//	}*/
//	cout << ans;
//	return 0;
//}
////E
////#include <iostream>
////#include <cmath>
////using namespace std;
////struct L {
////	int x;
////	int y;
////	double k;
////}l[100000];
////int p[1010][1010];
////int main()
////{
////	int n;
////	cin >> n;
////	for (int i = 0; i < n; i++)
////		cin >> p[i][0] >> p[i][1];
////	cout << -1;
////	return 0;
////}
//#include <iostream>
//#include <vector>
//#include <map>
//#include <string>
//using namespace std;
//int main()
//{
//    int n, m, t = 0;
//    cin >> n;
//    map<string, int>ok;
//    map<string, string>ans;
//    string xxx;
//    vector<string>s;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> t;
//        getline(cin, xxx);
//        s.push_back(xxx);
//        string str;
//
//        for (int j = 0; j < s[i].size(); j++)
//        {
//            if (j == 0 || s[i][j - 1] == ' ' && isalpha(s[i][j]))
//                str += s[i][j];
//        }
//        ans[s[i]] = str;
//        ok[s[i]] = t;
//    }
//    cin >> m;
//    char c = getchar();
//    string x, y;
//    while (m--)
//    {
//        int c = 0, zheng = 0, fan = 0;
//        string str1, str2, ans1, ans2;
//        vector<string>vv;
//        map<char, int>mp;
//        getline(cin, x);
//        getline(cin, y);
//        for (int j = 0; j < x.size(); j++)
//        {
//            mp[x[j]] = 1;
//            if (j == 0 || x[j - 1] == ' ' && isalpha(x[j]))
//                str1 += x[j];
//        }
//        for (int j = 0; j < y.size(); j++)
//        {
//            mp[y[j]] = 1;
//            if (j == 0 || y[j - 1] == ' ' && isalpha(y[j]))
//                str2 += y[j];
//        }
//        ans1 = str1 + str2;
//        ans2 = str2 + str1;
//        for (int j = 0; j < n; j++)
//        {
//            if (ans["s[j]"] == ans1 || ans["s[j]"] == ans2)
//            {
//                vv.push_back(s[j]);
//                if (ok[s[j]] == 1)
//                    zheng++;
//                else
//                    fan++;
//                c++;
//            }
//        }
//        int k = 0;
//        int h = 0;
//
//        if (c == 0)
//        {
//            cout << "tian ji bu ke xie lu" << '\n';
//            continue;
//        }
//        if (zheng != 0)
//        {
//            k = mp.size() % zheng + 1;
//            for (int j = 0; j < vv.size(); j++)
//            {
//                if (ok[vv[j]] == 1)
//                    h++;
//                if (h == k)
//                {
//                    cout << vv[j] << '\n';
//                    break;
//                }
//            }
//        }
//        else
//        {
//            k = mp.size() % fan + 1;
//            for (int j = 0; j < vv.size(); j++)
//            {
//                if (ok[vv[j]] == 0)
//                    h++;
//                if (h == k)
//                {
//                    cout << vv[j] << '\n';
//                    break;
//                }
//            }
//        }
//
//    }
//    return 0;
//}