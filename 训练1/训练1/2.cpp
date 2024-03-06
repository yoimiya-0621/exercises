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

//#include <iostream>
//using namespace std;
//int main()
//{
//	string s;
//	while (cin >> s)
//	{
//		while (1) {
//			int mid = s.size() / 2;
//			string a = s.substr(0, mid);
//			string b = s.substr(mid, s.size());
//			reverse(a.begin(), a.end());
//			if (a == b)
//				s = a;
//			else
//				break;
//		}
//		/*	int l = 0, r = s.size() - 1;
//			int flag = s.size();
//			while (l < r)
//			{
//				if (l + 1 == r && s[l] == s[r])
//				{
//					l = 0;
//					r--;
//					flag /= 2;
//					continue;
//				}
//				if (s[l] != s[r])
//				{
//					cout << flag<<"\n";
//					break;
//				}
//			}
//			cout << s.size() << "\n";
//		}*/
//		cout << s.size() << "\n";
//	}
//	return 0;
//}
//
//#include <iostream>
//using namespace std;
//int p[10] = { 1 },m=0,n;
//void print(int m)
//{
//	int sum = 0;
//	for (int i = 0; i <= m; i++)
//	{
//		sum += p[i];
//	}
//	if (sum == n)
//	{
//		cout << p[0];
//		for (int i = 1; i <= m; i++)
//		{
//			cout << "+" << p[i];
//		}
//		cout << "\n";
//	}
//}
//void dfs(int x)
//{
//	if (x > n)
//		return;
//	for (int i =p[m] ; i <= x; i++)
//	{
//		if (i == n)
//			break;
//		m++;
//		p[m] = i;
//		print(m);
//		dfs(x - i);
//		m --;
//	}
//}
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n / 2; i++) {
//		p[0] = i;
//		dfs(n);
//	}
//	return 0;
//}
//#include <iostream>
//#include <map>
//#include <algorithm>
//using namespace std;
//int main()
//{
//    string s;
//    cin >> s;
//    map<char, int>a;
//    for (int i = 0; i < s.size(); ++i)
//    {
//        if (s[i] == 'G' || s[i] == 'g')
//        {
//            if (s[i] == 'g')
//                s[i] -= 32;
//            a[s[i]]+=1;
//        }
//        else if (s[i] == 'P' || s[i] == 'p')
//        {
//            if (s[i] == 'p')
//                s[i] -= 32;
//            a[s[i]] += 1;
//        }
//        else if (s[i] == 'L' || s[i] == 'l')
//        {
//            if (s[i] == 'l')
//                s[i] -= 32;
//            a[s[i]] += 1;
//        }
//        else if (s[i] == 'T' || s[i] == 't')
//        {
//            if (s[i] == 't')
//                s[i] -= 32;
//            a[s[i]] += 1;
//        }
//    }
//    int m = max(a['G'], a['P']);
//    m = max(a['L'], m);
//    m= max(m, a['T']);
//    for (int i = 0; i < m; i++)
//    {
//        if (a['G'] > 0)
//        {
//            cout << "G"; a['G']--;
//        }
//        if (a['P'] > 0)
//        {
//            cout << "P"; a['P']--;
//        }
//        if (a['L'] > 0)
//        {
//            cout << "L"; a['L']--;
//        }
//        if (a['T'] > 0)
//        {
//            cout << "T"; a['T']--;
//        }
//
//    }
//    return 0;
//}
//#include <iostream>
//#include <algorithm>
//#include <set>
//using namespace std;
//int main()
//{
//    string s;
//    cin >> s;
//    set<int>a;
//    for (int i = 0; i < s.size(); i++)
//    {
//        char ch = s[i] - '0';
//        a.insert(ch);
//    }
//    int arr[10] = { 0 }, j = 0;
//    for (set<int>::iterator it = a.begin(); it != a.end(); it++)
//    {
//        arr[j] = *it;
//        j++;
//    }
//    int index[11] = { 0 };
//    for (int i = 0; i < 11; i++)
//    {
//        for (int k = 0; k <= j; k++)
//        {
//            if (s[i] - '0' == arr[k])
//            {
//                index[i] = j-k-1;
//                break;
//            }
//        }
//    }
//    printf("int[] arr = new int[]{");
//    for (int i = j-1; i >=0; i--)
//    {
//        if (i != j-1)
//            printf(",%d", arr[i]);
//        else
//            printf("%d", arr[i]);
//    }
//    printf("};\n");
//    printf("int[] index = new int[]{");
//    for (int i = 0; i < 11; i++)
//    {
//        if (i != 0)
//            printf(",%d", index[i]);
//        else
//            printf("%d", index[0]);
//    }
//    printf("};");
//    return 0;
//}

//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//void splitIpAddresses(string s, int start, vector<string>& path, vector<string>& res) {
//    if (start == 4) {
//        if (s.empty()) {
//            string ip = path[0] + '.' + path[1] + '.' + path[2] + '.' + path[3];
//            res.push_back(ip);
//        }
//        return;
//    }
//    for (int i = 1; i <= 3; i++) {
//        if (s.length() < i) break;
//        int val = atoi(s.substr(0, i).c_str());
//        if (val > 255 || i != to_string(val).size()) continue;
//        path[start] = s.substr(0, i);
//        splitIpAddresses(s.substr(i), start + 1, path, res);
//    }
//}
//
//vector<string> restoreIpAddresses(string s) {
//    vector<string> res;
//    vector<string> path(4);
//    splitIpAddresses(s, 0, path, res);
//    return res;
//}
//
//int main() {
//    string input;
//    cin >> input;
//    vector<string> output = restoreIpAddresses(input);
//    cout << "{";
//    if (output.size() != 0)
//        cout << output[0];
//    for (int i = 1; i < output.size(); i++) {
//        cout << "," << output[i];
//    }
//    cout << "}";
//    return 0;
//}

//#include <iostream>
//#include <map>
//using namespace std;
//int a[15] = { 0 },ma=0,mm=0;
//map<int, int>c;
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int m;
//		cin >> m;
//		memset(a, 0, sizeof(a));
//		for (int j = 0; j < m; j++)
//		{
//			cin >> a[j];
//			c[a[j]] += 1;
//			if (ma < c[a[j]]||ma==c[a[j]]&&a[j]>mm)
//			{
//				mm = a[j];
//				ma = c[a[j]];
//			}
//		}
//	}
//	cout << mm << " " << ma;
//	return 0;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//vector<string>a;
//int main()
//{
//	string s;
//	cin >> s;
//	while (s != ".")
//	{
//		a.push_back(s);
//		cin >> s;
//	}
//	int i = 0,flag=0;
//	for(int i=0;i<a.size();i++)
//	{
//		if (i == 1||i==13)
//			flag++;
//	}
//	if (flag == 0)
//	{
//		printf("Momo... No one is for you ...");
//	}
//	else if (flag == 1)
//	{
//		cout << a[1];
//		printf(" is the only one for you...");
//	}
//	else if (flag == 2)
//	{
//		cout << a[1];
//		printf(" and ");
//		cout << a[13];
//		printf(" are inviting you to dinner...", a[1], a[13]);
//	}
//	return 0;
//}
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string s;
	char c = getchar();
	getline(cin, s);
	for (int i=(s.size()/n)*n, k = 0; k<n; i++, k++)
	{
		for (int j = i; j >= 0; j -= n)
		{
			if (j > s.size())
			{
				cout << " ";
				continue;
			}
			if (s[j] == '\0')
			{
				cout << " ";
				continue;
			}
			cout << s[j];
		}
		cout << "\n";
	}
	return 0;
}