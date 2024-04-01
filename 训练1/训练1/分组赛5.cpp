//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <stack>
//#include <cmath>
//using namespace std;
//int main()
//{
//	char s[10];
//	double sum = 0;
//	stack<double>a;
//	while (scanf("%s", s))
//	{
//		if (s[0]=='+')
//		{
//			if (sum == 0) {
//				sum = a.top();
//				a.pop();
//			}
//			sum = sum + a.top();
//			a.pop();
//		}
//		else if (s[0]=='-')
//		{
//			if (sum == 0) {
//				sum = a.top();
//				a.pop();
//			}
//			sum = sum - a.top();
//			a.pop();
//		}
//		else if (s[0]=='*')
//		{
//			if (sum == 0) {
//				sum = a.top();
//				a.pop();
//			}
//			sum = sum * a.top();
//			a.pop();
//		}
//		else if (s[0]=='/')
//		{
//			if (sum == 0) {
//				sum = a.top();
//				a.pop();
//			}
//			sum = sum / a.top();
//			a.pop();
//		}
//		else
//		{
//			int flag = 0, w = 1;
//			double x = 0;
//			for (unsigned int i = 0; i < strlen(s); i++)
//			{
//				if (isdigit(s[i]) && flag == 0)
//				{
//					x = x * 10 + s[i] - '0';
//				}
//				else if (s[i] == '.')
//				{
//					flag = 1;
//				}
//				else if (isdigit(s[i]) && flag == 1)
//				{
//					x = x + (s[i] - '0') * pow(10, -w);
//				}
//			}
//			a.push(x);
//		}
//	}
//	printf("%.1lf", sum);
//	return 0;
//}
//#include <iostream>
//#include <map>
//#include <vector>
//using namespace std;
//int main()
//{
//	int count = 0,max=0;
//	int n, m;
//	cin >> n;
//	string s,t;
//	map<string,int>a;
//	map<int, int>b;
//	vector<string>name;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> s;
//		a[s] = count;
//		name.push_back(s);
//	}
//	cin >> m;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> s >> t;
//		if (a[s] == 0 && a[t] == 0)
//		{
//			count++;
//			a[s] = count;
//			a[t] = count;
//			b[count] += 2;
//		}
//		else if (a[s] != 0 && a[t] == 0)
//		{
//			a[t] = a[s];
//			b[a[s]] += 1;
//		}
//		else if (a[s] == 0 && a[t] != 0)
//		{
//			a[s] = a[t];
//			b[a[t]] += 1;
//		}
//	}
//	for (int i = 1; i <= count; i++) {
//		if (max < b[i])
//			max = b[i];
//	}
//	for (int i = 0; i < name.size(); i++)
//	{
//		if (a[name[i]] == 0)
//			count++;
//	}
//	cout << count << " " << max;
//	return 0;
//}
//#include <iostream>
//#include <algorithm>
//#include <deque>
//using namespace std;
//struct S
//{
//	string name;
//	int h;
//}s[1000];
//bool cmp(S a, S b)
//{
//	if (a.h != b.h)
//		return a.h > b.h;
//	else
//		return a.name < b.name;
//}
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> s[i].name >> s[i].h;
//	}
//	sort(s, s + n, cmp);
//	int x = n / k;
//	int j = 0;
//	for (int i = 1; i <= k; i++)
//	{
//		deque<string>ch;
//		if (i == 1)
//			x += n % k;
//		for (int z = 0; z < x; z++, j++)
//		{
//			if (z % 2 == 0)
//				ch.push_back(s[j].name);
//			else
//				ch.push_front(s[j].name);
//		}
//		for (int z = 0; z < ch.size(); z++)
//		{
//			if (z != 0)
//				cout << " ";
//			cout << ch[z];
//		}
//		cout << "\n";
//		if (i == 1)
//			x -= n % k;
//	}
//	return 0;
//}
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//struct S {
//	int father;
//	int i;
//	int x;
//}s[1000];
//bool cmp(S a, S b)
//{
//	if (a.father != b.father)
//		return a.father < b.father;
//	else
//		return a.i < b.i;
//}
//int main()
//{
//	int n, k, sum = 0;
//	cin >> n;
//	cin >> k;
//	for (int i = 0; i < n - 1; i++)
//	{
//		cin >> s[i].father >> s[i].i >> s[i].x;
//	}
//	sort(s, s + n - 1, cmp);
//	for (int i = 0; i < n - 2; i++)
//	{
//		if (s[i].father == s[i + 1].father && s[i].i + s[i + 1].i == 1)
//		{
//			sum += s[i].x;
//			sum += s[i + 1].x;
//		}
//	}
//	cout << sum;
//	return 0;
//}
//#include <iostream>
//#include <map>
//using namespace std;
//int main()
//{
//	int n,e;
//	cin >> n;
//	map<int, bool>a;
//	for (int i = 1; i <= n; i++)
//	{
//		int k;
//		cin >> k;
//		int d[100]={0}, p[100] = {0};
//		for (int j = 1; j <= k; j++)
//		{
//			cin >> d[j] >> p[j];
//		}
//	}
//	cin >> e;
//	return 0;
//}

//#include <iostream>
//#include <stack>
//using namespace std;
//int main()
//{
//	string s;
//	stack<double>stk;
//	while (cin >> s)
//	{
//		if (s.size() == 1)
//		{
//			if (isdigit(s[0]))
//			{
//				stk.push(s[0] - '0');
//			}
//			else if (s[0] == '+')
//			{
//				double a = stk.top();
//				stk.pop();
//				double b = stk.top();
//				stk.pop();
//				stk.push(a + b);
//			}
//			else if (s[0] == '-')
//			{
//				double a = stk.top();
//				stk.pop();
//				double b = stk.top();
//				stk.pop();
//				stk.push(a - b);
//			}
//			else if (s[0] == '*')
//			{
//				double a = stk.top();
//				stk.pop();
//				double b = stk.top();
//				stk.pop();
//				stk.push(a * b);
//			}
//			else if (s[0] == '/')
//			{
//				double a = stk.top();
//				stk.pop();
//				double b = stk.top();
//				stk.pop();
//				stk.push(b/a);
//			}
//		}
//		else {
//			int flag = 0, w = 1;
//			double x = 0;
//			for (int i = 0; i < s.size(); i++)
//			{
//				if (isdigit(s[i]) && flag == 0)
//				{
//					x = x * 10 + s[0] - '0';
//				}
//				else if (s[i] == '.')
//					flag = 1;
//				else if (isdigit(s[i]) && flag == 1)
//				{
//					x = x +(s[i]-'0') *pow(10, -w);
//					w++;
//				}
//			}
//			stk.push(x);
//		}
//	}
//	printf("%.1lf", stk.top());
//	return 0;
//}

#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
struct S 
{
    int father;
    int id;
    int x;
}s[1000];
bool cmp(S a, S b)
{
    if (a.father == b.father)
        return a.id > b.id;
    else
        return a.father < b.father;
}
int main()
{
    int n, k;
    int sum = 0;
    cin >> n;
    cin >> k;
    map<int, int>flag;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> s[i].father >> s[i].id >> s[i].x;
        flag[s[i].father] += s[i].id + 1;
        /*if(s[i].father==k)
        {flag[k]+=s[i].id+1;
         if(flag[k]==3)
             sum+=k;*/
    }
}
sort(s, s + n - 1, cmp);
for (int i = 0; i < n - 1; i++)
{
    if (flag[s[i].x] == 0)
        sum += s[i].x;
}
cout << sum;
return 0;
}