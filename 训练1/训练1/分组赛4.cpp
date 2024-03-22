//#include <iostream>
//#include <algorithm>
//using namespace std;
//struct S 
//{
//	string s;
//	int count;
//};
//int k = 0;
//bool cmp(S a, S b)
//{
//	if (a.count != b.count)
//		return a.count > b.count;
//	else
//		return a.s < b.s;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	do {
//
//		S a[5000];
//		k = 0;
//		for (int i = 0; i < n; i++)
//		{
//			string s;
//			cin >> s;
//			int flag = 0;
//			for (int j = 0; j < k; j++)
//			{
//				if (s == a[j].s)
//				{
//					flag = 1;
//					a[j].count++;
//					break;
//				}
//			}
//			if (flag == 0)
//			{
//				a[k].s = s;
//				a[k].count++;
//				k++;
//			}
//		}
//		sort(a, a + k, cmp);
//		cout << a[0].s << "\n";
////		cin >> n;
////	} while (n != EOF);
////	return 0;
////}
//
//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//struct S
//{
//	string name;
//	char sex;
//	int age;
//	string data;
//	int flag;
//	int p;
//}a[10005];
//bool cmp1(S a, S b)
//{
//	return a.flag > b.flag;
//}
//bool cmp2(S a, S b)
//{
//	if (a.name != b.name)
//		return a.name < b.name;
//	else
//	{
//		if (a.age != b.age)
//			return a.age < b.age;
//		else
//			return a.data < b.data;
//	}
//}
//int main()
//{
//	string str;
//	cin >> str;
//	int k,n=0;
//	cin >> k;
//	for (int i = 0; i < k; i++)
//	{
//		cin >> a[i].name >> a[i].sex >> a[i].age >> a[i].data;
//		if (a[i].name.find(str) != string::npos && a[i].sex == 'F')
//		{
//			if (a[i].name[0] == str[0] || a[i].name[a[i].name.size() - 1] == str[str.size() - 1])
//			{
//				if (a[i].name[0] == str[0])
//				{
//					for (int x = 0; x < a[i].name.size(); x++)
//					{
//						if (x < a[i].name.size()-str.size())
//							a[i].name[x] = a[i].name[x + str.size()];
//						else
//							a[i].name[x] = '\0';
//					}
//				}
//				else
//				{
//					for (int x = a[i].name.size()-str.size(); x < a[i].name.size(); x++)
//					{
//						a[i].name[x] = '\0';
//					}
//				}
//				a[i].flag = 1;
//				n++;
//			}
//		}
//	}
//	sort(a, a + k, cmp1);
//	sort(a, a + n, cmp2);
//	cout << n << "\n";
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i].name << " " << a[i].age << " " << a[i].data << "\n";
//	}
//	return 0;
//}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//int a[105][105] = { 0 };
//int dx[4] = { 1,0,-1,0 };
//int dy[4] = { 0,1,0,-1 };
//int n, m,xx=0,yy=0,x=0,y=0;
//long long ans = 10000000000,sum=1;
//void dfs(int x1, int y1)
//{
//	if (x1 <= 0 || x1 > n || y1 <= 0 || y1 > m)
//		return;
//	if (x1 == x && y1 == y)
//	{
//		ans = min(ans, sum);
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		if (a[x1 + dx[i]][y1 + dy[i]] == 0) {
//			sum++;
//			a[x1 + dx[i]][y1 + dy[i]] = 2;
//			dfs(x1 + dx[i], y1 + dy[i]);
//			a[x1 + dx[i]][y1 + dy[i]] = 0;
//			sum--;
//		}
//	}
//}
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	cin >> xx >> yy >> x >> y;
//	dfs(xx, yy);
//	cout << ans;
//	return 0;
//}

//#include <iostream>
//#include <stack>
//#include <string>
//#include <vector>
//using namespace std;
//int main()
//{
//	stack<char>ch;
//	vector<int>count;
//	string s;
//	getline(cin, s);
//	int i = 0;
//	while (i <= s.size())
//	{
//		if (isdigit(s[i]))
//		{
//			count.push_back(s[i] - '0');
//		}
//		else if (s[i] == '-' && isdigit(s[i + 1]))
//		{
//			i++;
//			count.push_back(-1*(s[i] - '0'));
//		}
//		else
//		{
//			if (s[i] == '+')
//			{
//				int n = count[count.size()-1] + count[count.size()-2];
//				count.pop_back();
//				count.pop_back();
//				count.push_back(n);
//			}
//			if (s[i] == '-')
//			{
//				int n = count[count.size()-2] - count[count.size() - 1];
//				count.pop_back();
//				count.pop_back();
//				count.push_back(n);
//			}
//			if (s[i] == '*')
//			{
//				int n = count[count.size()-1] * count[count.size() - 2];
//				count.pop_back();
//				count.pop_back();
//				count.push_back(n);
//			}
//			if (s[i] == '/')
//			{
//				int n = count[count.size()-2] / count[count.size() - 1];
//				count.pop_back();
//				count.pop_back();
//				count.push_back(n);
//			}
//		}
//		i += 2;
//	}
//	cout << count[count.size()-1];
//	return 0;
//}
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
struct S
{
	int a;
	int b;
}s[1005];
int c[5000] = { 0 };
bool cmp(S a, S b)
{
	return a.a < b.a;
}
int main()
{
	int n, m, flag = 0;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> s[i].a >> s[i].b;
		c[s[i].a] += 1;

	}
	int sum = 0;
	for (int i = 0; i < 5000; i++)
	{
		if (c[i])
			sum++;
	}
	sort(s, s + m, cmp);
	for (int i = 0; i < m; i++)
	{
		if (s[i].a != s[i + 1].a)
		{
			if (c[s[i].a] != c[s[i + 1].a] || sum<=1)
			{
				cout << "N";
				flag = 1;
				break;
			}
		}
	}
	if (flag == 0)
		cout << "Y";
	return 0;
}