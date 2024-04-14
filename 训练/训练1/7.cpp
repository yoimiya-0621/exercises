//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//    int t;
//    string s;
//    cin >> t;
//    while (t--)
//    {
//        cin >> s;
//        string x = s;
//        reverse(x.begin(),x.end());
//        if (x == s)
//            cout << "true";
//        else
//            cout << "false";
//        cout << "\n";
//    }
//    return 0;
//}
//#include <iostream>
//#include <string>
//#include <deque>
//using namespace std;
//deque<char>ans;
//string a, b;
//
//int main()
//{
//    cin >> a >> b;
//    int i, j;
//    int flag = 0;
//    i = a.size() - 1;
//    j = b.size() - 1;
//    while (1)
//    {
//       
//        if (i < 0 || j < 0)
//            break;
//        if (a[i] + b[j] + flag - '0' - '0' == 0)
//        {
//            ans.push_front('0'); flag = 0;
//        }
//        else if (a[i] + b[j] + flag - '0' - '0' == 1)
//        {
//            ans.push_front('1'); flag = 0;
//        }
//        else if (a[i] + b[j] + flag - '0' - '0' == 2)
//        {
//            ans.push_front('0'); flag = 1;
//        }
//        else
//        {
//            ans.push_front('1'); flag = 1;
//        }
//        i--;
//        j--;
//    }
//    while (i > 0) {
//        if (a[i] + flag - '0' == 0)
//        {
//            ans.push_front('0'); flag = 0;
//        }
//        else if (a[i] + flag - '0' == 1)
//        {
//            ans.push_front('1'); flag = 0;
//        }
//        else if (a[i] + flag - '0' == 2)
//        {
//            ans.push_front('0'); flag = 1;
//        }
//        i--;
//    }
//    while (j >= 0) {
//        if (b[j] + flag - '0' == 0)
//        {
//            ans.push_front('0'); flag = 0;
//        }
//        else if (b[j] + flag - '0' == 1)
//        {
//            ans.push_front('1'); flag = 0;
//        }
//        else if (b[j] + flag - '0' == 2)
//        {
//            ans.push_front('0'); flag = 1;
//        }
//        j--;
//    }
//    if (flag)
//        ans.push_front('1');
//    for (int k = 0; k < ans.size(); k++)
//        cout << ans[k];
//    return 0;
//}

//#include <iostream>
//using namespace std;
//char a[5000][5000] = { 0 };
//int ans[5000][5000] = { 0 };
//int mi, mj,ma=0;
//int dx[4] = { 0,1,0,-1 };
//int dy[4] = { 1,0,-1,0 };
//int zz[1000] = { 0 };
//int main()
//{
//	int n, m,k;
//	cin >> n >> m>>k;
//	int z = 0;
//	for(int i=1;i<=n;i++)
//		for (int j = 1; j <= m; j++)
//		{
//			cin >> a[i][j];
//		}
//	for (int z = 0; z < k; z++)
//		cin >> zz[z];
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//		{
//			if (a[i][j] == '*')
//				ans[i][j] += zz[z++];
//		}
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//		{
//			for (int k = 0; k < 4; k++)
//			{
//				if (a[i][j] == '-' && a[i + dx[k]][j + dy[k]] == '*')
//				{
//					ans[i][j]+=ans[i + dx[k]][j + dy[k]];
//				}
//			}
//			if (ma< ans[i][j]&&a[i][j]=='-')
//			{
//				ma = ans[i][j];
//				mi = i;
//				mj = j;
//			}
//		}
//	cout << mi << " " << mj << "\n" << ma;
//	return 0;
//}
//#include <iostream>
//#include <stack>
//using namespace std;
//#define ll long long
//int n;
//ll a[100010] = { 0 };
//ll top[100010] = { 0 };
//ll h[100010] = { 0 };
//ll hmax, sum;
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//		int k=-1,mi=1e9;
//		for (int j = 0; j < sum; j++)
//		{
//			if (top[j] > a[i] && top[j] - a[i] < mi)
//			{
//				k = j;
//			}
//			else if (top[j] > a[i] && top[j] - a[i] == mi&&h[j]>h[k]) {
//				k = j;
//			}
//		}
//		if (k != -1)
//		{
//			top[k] = a[i];
//			h[k]++;
//			hmax = max(hmax, h[k]);
//		}
//		if (k==-1)
//		{
//			top[sum] = a[i];
//			h[sum]++;
//			hmax = max(hmax, h[sum]);
//			sum++;
//		}
//	}
//	cout << hmax << " " << sum;
//	return 0;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//int n, k, m, p;
//int main()
//{
//	string s;
//	vector<string>a;
//	vector<string>play;
//	cin >> n >> k >> m >> p;
//	for (int i = 0; i < k; i++)
//	{
//		cin >> s;
//		a.push_back(s);
//	}
//	while (m--)
//	{
//		vector<string>x;
//		vector<string>y;
//		for (int i = 0; i < a.size(); i++)
//		{
//			if (i < a.size() / 2) {
//				x.push_back(a[i]);
//			}
//			else{
//				y.push_back(a[i]);
//			}
//		}
//		while (!a.empty())
//		{
//			a.pop_back();
//		}
//		for (int i = 0; i < k / 2; i++) {
//			a.push_back(y[i]);
//			a.push_back(x[i]);
//		}
//	}
//	int z = 0,flag=1;
//	for (int i = 0; i < 4; i++)
//	{
//		if(z *n+ p - 1<a.size())
//		play.push_back(a[z * n + p - 1]);
//		else
//		{
//			flag = 0;
//			cout << "Error:cards not enough";
//			break;
//		}
//		z++;
//	}
//	if (flag)
//	{
//		for (int i = 0; i < 4; i++)
//		{
//			if (play[i][0] == '1' && play[i][1] == '1')
//			{
//				cout << 'J' << play[i][2];
//			}
//			else if (play[i][0] == '1' && play[i][1] == '2')
//			{
//				cout << 'Q' << play[i][2];
//			}
//			else if (play[i][0] == '1' && play[i][1] == '3')
//			{
//				cout << 'K' << play[i][2];
//			}
//			else
//				cout << play[i];
//			cout << '\n';
//		}
//	}
//	return 0;
//}
#include <iostream>
#include <map>
using namespace std;
int n, m, sum = 0;
int ans[10005] = { 0 };
int main()
{
    map<int, int>dao;
    cin >> n >> m;
    int x, y;
    int c = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        if (dao[x] == 0 && dao[y] == 0)
        {
            c++;
            dao[x] = c;
            dao[y] = c;
        }
        else if (dao[x] == 0 && dao[y] != 0)
        {
            dao[x] = dao[y];
        }
        else if (dao[x] != 0 && dao[y] == 0)
        {
            dao[y] = dao[x];
        }
        else {
            ans[dao[x]] = 1;
        }
    }
    for (int i = 1; i <= c; i++)
        sum += ans[i];
    for (int i = 1; i <= n; i++)
    {
        if (dao[i] == 0)
            c++;
    }
    cout << c << " " << sum;
    return 0;
}