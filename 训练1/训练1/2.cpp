////#define  _CRT_SECURE_NO_WARNINGS
//////#include <cstdio>
//////int main()
//////{
//////	char s[1000] = { 0 };
//////	char arr[1000] = { 0 };
//////	scanf("%s", s);
//////	int flag = 0, m = 0;
//////	for (int i = 0; s[i] != '\0';i++)
//////	{
//////		if (flag == 1)
//////		{
//////			if (s[i] >= '1'&& s[i] <='9')
//////			{
//////				arr[m]= s[i];
//////				m++;
//////			}
//////		}
//////		if (s[i] == '(')
//////			flag = 1;
//////	}
//////	if (arr[0] == 0)
//////		printf("not find");
//////	else
//////	printf("%s", arr);
//////	return 0;
//////}
////#include<map>
////#include <cstdio>
////using namespace std;
////struct S
////{
////	char a = 'A';
////	int b = 0;
////}c[105];
//#define  _CRT_SECURE_NO_WARNINGS
//// 
////int main()
////{
////	
////	char s[105] = { 0 };
////	scanf("%s", s);
////	int len = strlen(s);
////	int j = 0;
////	for (int i = 0; i < len; i++)
////	{
////		int k = 0;
////		for (k = 0; k <= j; k++)
////		{
////			if (c[k].a == s[i] && s[i] >= 'a' && s[i] <= 'z')
////				c[k].b++;
////		}
////		if (k == j + 1 && s[i] >= 'a' && s[i] <= 'z')
////		{
////			c[k].a = s[i];
////			c[k].b++;
////			j++;
////		}
////	}
////	int flag = 0;
////	for (int i = 0; i <= j; i++)
////		if (c[i].b == 1) {
////			printf("%c", c[i].a);
////			flag = 1;
////			break;
////		}
////	if (flag == 0)
////		printf("no");
////	return 0;
////}
////#include <iostream>
////#include <cstdio>
////#include <cstring>
////using namespace std;
////int main()
////{
////	char s[105] = { 0 };
////	scanf("%s", s);
////	int len = strlen(s);
////	for (int i = len - 1; i >= 0; i--)
////	{
////		if (s[i] >= 'a' && s[i] <= 'z')
////		{
////			s[i] -= 32;
////			if (s[i] >= 'X' && s[i] <= 'Z')
////			{
////				printf("%c", s[i] + 3 - 26);
////			}
////			else
////				printf("%c", s[i] + 3);
////		}
////		else
////		{
////			s[i] += 32;
////			if (s[i] >= 'x' && s[i] <= 'z')
////			{
////				printf("%c", s[i] + 3 - 26);
////			}
////			else
////				printf("%c", s[i] + 3);
////		}
////	}
////	return 0;
////}
//
//#include  <map>
//#include <cstring>
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	string s;
//	cin >> s;
//	map<char, int>a;
//	for (int i = 0; i < s.size(); i++)
//	{
//		a[s[i]] += 1;
//	}
//	bool flag = false;
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (a[s[i]] == 1)
//		{
//			cout << s[i] << "\n";
//			flag = true;
//			break;
//		}
//	}
//	if (!flag)
//		cout << "no\n";
//	return 0;
// 
//}
/*
#include <iostream>
using namespace std;
int main()
{
	string s;
	while(cin>>s)
	{
		while (1) {
			int mid = s.size() / 2;
			string a = s.substr(0, mid);
			string b = s.substr(mid, s.size());
			reverse(a.begin(), a.end());
			if (a == b)
				s = a;
			else
				break;
		}
		/*int l = 0, r = s.size() - 1;
		int flag = s.size();
		while (l < r)
		{
			if (l + 1 == r && s[l] == s[r])
			{
				l = 0;
				r--;
				flag /= 2;
				continue;
			}
			if (s[l] != s[r])
			{
				cout << flag<<"\n";
				break;
			}
		}*/
/*
		cout << s.size() << "\n";
	}
	return 0;
}*/

#include <iostream>
using namespace std;
int p[10] = { 1 },m=0,n;
void print(int m)
{
	int sum = 0;
	for (int i = 0; i <= m; i++)
	{
		sum += p[i];
	}
	if (sum == n)
	{
		cout << p[0];
		for (int i = 1; i <= m; i++)
		{
			cout << "+" << p[i];
		}
		cout << "\n";
	}
}
void dfs(int x)
{
	if (x > n)
		return;
	for (int i =p[m] ; i <= x; i++)
	{
		if (i == n)
			break;
		m++;
		p[m] = i;
		print(m);
		dfs(x - i);
		m --;
	}
}
int main()
{
	cin >> n;
	for (int i = 1; i <= n / 2; i++) {
		p[0] = i;
		dfs(n);
	}
	return 0;
}