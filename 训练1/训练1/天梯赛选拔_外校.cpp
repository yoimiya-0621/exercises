//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//    int n;
//    double a[100];
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//    }
//    sort(a, a + n);
//    double sum = 0;
//    for (int i = 1; i < n - 1; i++)
//    {
//        sum += a[i];
//    }
//    sum = sum / (n - 2);
//    printf("%.2lf\n", sum);
//    if (sum < 60)
//        cout << "xiao bie san";
//    else
//        cout << "ren sheng ying jia";
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int t = 0;
//	char ch1 = 'o', ch2 = 'x';
//	cin >> t;
//	for (int i = 0; i < t; i++)
//	{
//		bool a1 = false, a2 = false;
//		char a[3][3] = { 0 };
//		for (int j = 0; j < 3; j++)
//		{
//			for (int k = 0; k < 3; k++)
//			{
//				cin >> a[j][k];
//			}
//		}
//		for (int j = 0; j < 2; j++)
//		{
//			if (a[j][0]==ch1 && a[j][0] == a[j][1] && a[j][1] == a[j][2] || a[0][j] == a[1][j] && a[1][j] == a[2][j] && a[1][j] == ch1)
//			{
//				a1 = true;
//				break;
//			}
//		}
//		if (!a1)
//		{
//			if (a[0][2] == a[1][1] && a[1][1] == a[2][0] && a[1][1] == ch1 || a[0][0] == a[1][1] && a[1][1] == a[2][2] && a[1][1] == ch1)
//				a1 = true;
//		}
//		for (int j = 0; j < 2; j++)
//		{
//			if (a[j][0] == ch2 && a[j][0] == a[j][1] && a[j][1] == a[j][2] || a[0][j] == a[1][j] && a[1][j] == a[2][j] && a[1][j] == ch2)
//			{
//				a2 = true;
//				break;
//			}
//		}
//		if (!a2)
//		{
//			if (a[0][2] == a[1][1] && a[1][1] == a[2][0] && a[1][1] == ch2 || a[0][0] == a[1][1] && a[1][1] == a[2][2] && a[1][1] == ch2)
//				a2 = true;
//		}
//		if (a1 && !a2)
//		{
//			cout << "cofe" << "\n";
//		}
//		else if (!a1 && a2)
//		{
//			cout << "Chocola" << "\n";
//		}
//		else
//			cout << "draw" << "\n";
//	}
//	return 0;
//}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n ; i++)
//	{
//		for (int j = 1; j <= n - 1 + n % 2; j++)
//		{
//			if (n % 2 != 0)
//			{
//				if (min(j, n + 1 - j) <= min(i,n+1-i))
//					cout << "*";
//				else
//					cout << " ";
//			}
//			if (n % 2 == 0)
//			{
//				if (min(j, n - j) <= min(i, n+1 - i))
//					cout << "*";
//				else
//					cout << " ";
//			}
//		}
//		cout << "\n";
//	}
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	int n, m,op=0;
//	string s;
//	cin >> n >> m;
//	cin >> s;
//
//	for (int i = 0; i < m; i++)
//	{
//		cin >> op;
//		if (op == 1)
//		{
//			int l, r;
//			cin >> l>>r;
//			string str = s.substr(l, r + 1 - l);
//			reverse(str.begin(), str.end());
//			s.erase(l, r + 1 - l);
//			s.insert(l, str);
//		}
//		else if (op == 2)
//		{
//			int l, r, k;
//			cin >> l >> r >> k;
//			string str = s.substr(l, r + 1 - l);
//			s.insert(k+1, str);
//			s.erase(l, r + 1 - l);
//
//		}
//		cout << s << "\n";
//	}
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//	int t;
//	cin >> t;
//	for (int x = 0; x < t; x++)
//	{
//		int n, k;
//		cin >> n >> k;
//		if (2 * k + 1 > n)
//		{
//			cout << -1<<"\n";
//			continue;
//		}
//		else
//		{
//			for (int i = 1; i <= n; i++)
//			{
//				if (i == (n - k * 2))
//				{
//					cout << 1;
//					k--;
//				}
//				else
//					cout << 0;
//			}
//			cout << "\n";
//		}
//	}
//	return 0;
//}
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
struct S {
	int rate=0;
	int v;
}a[105];
bool cmp1(S a, S b)
{
	if (a.rate != b.rate)
		return a.rate > b.rate;
	else
		return a.v > b.v;
}
int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i].v;
		if (a[i].v >= k)
		{
			a[i].rate += a[i].v / k;
			a[i].v = a[i].v % k;
		}
	}
	sort(a, a + n, cmp1);
	int r[105] = { 0 };
	map<int, int>site;
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			site[a[i].rate] = i;
		}
		if (a[i].rate != a[i + 1].rate)
		{
			site[a[i + 1].rate] = i + 1;
		}
		r[a[i].rate]++;
	}
	for (int i = 0; i < m; i++)
	{
		int p, vv;
		cin >> p >> vv;
		for (int j = 5; j>=0; j--)
		{
			if (r[j]>0)
			{
				a[site[r[j]] + p-1].v += vv;
				if (a[site[r[j]] + p - 1].v >= k)
				{
					a[site[r[j]] + p - 1].rate += a[site[r[j]] + p - 1].v / k;
					a[site[r[j]] + p - 1].v = a[site[r[j]] + p - 1].v % k;
				}
			}
		}
		
		sort(a, a + n, cmp1);
		memset(r, 0, sizeof(r));
		for (int j = 0; j < 100; j++)
			site[j] = 0;
		for (int j = 0; j < n; j++)
		{
			if (i == 0)
			{
				site[a[i].rate] = i;
			}
			if (a[j].rate != a[j + 1].rate)
			{
				site[a[j + 1].rate] = j + 1;
			}
			r[a[j].rate]++;
		}
	}
	for (int i = 0; i <= 100; i++)
	{
		if (r[i])
		{
			cout << i << ":" << r[i] << "\n";
		}
	}
	return 0;
}