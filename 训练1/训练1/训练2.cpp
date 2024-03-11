#include <iostream>
#include <map>
using namespace std;
//int f(int x)
//{
//    int f = 0;
//    while(x > 0)
//    {
//        f = f + (x % 10) * (x % 10);
//        x /= 10;
//    }
//    return f;
//}
//int ff(int x)
//{
//    int ff = 0;
//    while (x > 0)
//    {
//        ff += x % 10;
//        if (ff > 1)
//            return 0;
//        x /= 10;
//    }
//    if (ff == 1)
//        return 1;
//    else
//        return 0;
//}
//int main()
//{
//    int a, b;
//    cin >> a >> b;
//    map<int, int>c;
//    for (int i = a; i <= b; i++)
//    {
//        bool flag[10000] = { false };
//        int j = 0, x = i;
//        while (1)
//        {
//            if (ff(x))
//            {
//                for (int m = 1; m < 10000; m++)
//                {
//                    if (flag[m] && m != i)
//                    {
//                        c[m] = 100000;
//                    }
//                }
//                if (c[i] != 100000)
//                    c[i] = j;
//                break;
//            }
//            if (flag[x])
//            {
//                c[i] = 100000;
//                break;
//            }
//            j++;
//            flag[x] = true;
//            x = f(x);
//        }
//    }
//    for (int i = a; i <= b; i++)
//    {
//        if (c[i] != 100000)
//            cout << i << " " << c[i] << "\n";
//    }
//    return 0;
//}
//class A{
//public:
//    int func(int a){return a * a; }
//};
//int main()
//{
//    // A a;
//    //a.func(5);
//    //A* p = new A;
//    // p->func(5);
//    // A& r = a;
//   //  r.func(5);
//   // A a,b;
//   // if (a != b)
//   //     a.func(5);
//    return 0;
//}
#include <iostream>
#include <stack>
using namespace std;
/*int main()
{
	int n;
	cin >> n;
	for (int k = 0; k < n; k++) 
	{
		string s;
		cin >> s;
		stack<char>a;
		for (int i = 0; i < s.size(); i++)
		{
			if (i == 0)
			{
				if (s[i] == ')' || s[i] == ']')
				{
					a.push(s[i]);
					break;
				}
				else
					a.push(s[i]);
			}
			else
			{
				if (a.top() == '[' && s[i] == ']' || a.top() == '(' && s[i] == ')')
					a.pop();
				else
					a.push(s[i]);
			}
			
		}
		if (a.empty())
			cout << "Yes" << "\n";
		else
			cout << "No" << "\n";
	}
	return 0;
}*/
/*
#include <string>
int main()
{
	string s;
	getline(cin, s);
	stack<char>a;
	int flag = 1;
	for (int i = 0; i < s.size(); i++)
	{
		if (isdigit(s[i]) || isalpha(s[i]))
			continue;
		else
		{
			if (s[i] == '[' || s[i] == '(' || s[i] == '{')
				a.push(s[i]);
			else
			{
				if (s[i] == ')')
				{
					if (a.top() == '(')
						a.pop();
					else
					{
						flag = 0;
						break;
					}
				}
				else if (s[i] == '}')
				{
					if (a.top() == '{')
						a.pop();
					else
					{
						flag = 0;
						break;
					}
				}
				else if (s[i] == ']')
				{
					if (a.top() == '[')
						a.pop();
					else
					{
						flag = 0;
						break;
					}
				}
			}
		}
	}
	if (flag)
		cout << "yes";
	else
		cout << "no";
	return 0;
}*/
#include <iostream>
#include <cmath>
#include <map>
#include <vector>
using namespace std;
bool issu(int x)
{
	if (x == 0 || x == 1)
		return false;
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
			return false;
	}
	return true;
}
int f(int x)
{
	int f = 0;
	while (x > 0)
	{
		f += (x % 10) * (x % 10);
		x /= 10;
	}
	return f;
}
bool ishappy(int x)
{
	int f = 0;
	while (x > 0)
	{
		f += x % 10;
		if (f > 1)
			return false;
		x /= 10;
	}
	if (f == 1)
		return true;
	else
		return false;
}
int main()
{
	int a, b;
	cin >> a >> b;
	bool flag = false;
	map<int, int>c;
	for (int i = a; i <= b; i++)
	{
		vector<int>cc;
		int x = i,j=1;
		while (1) {
			if (c[x] == -2)
			{
				c[i] = -2;
				for (int z = 0; z < cc.size(); z++)
					c[cc[z]] = -2;
				break;
			}
			for (int k = 0; k < cc.size(); k++)
			{
				if (x == cc[k]) {
					for (int z = 0; z < cc.size(); z++)
						c[cc[z]] = -2;
					break;
				}
			}
			if (j>1)
			{
				cc.push_back(x);
			}
			if (ishappy(x))
			{
				for (int k = 0; k < cc.size(); k++)
				{
					c[cc[k]] = -1;
				}
				if (issu(i))
				{
					c[i] = j*2;
				}
				else
				{
					c[i] = j;
				}
				break;
			}
			else
			{
				x = f(x);
				j++;
			}
		}
	}
	for (int i = a; i <= b; i++)
	{
		if (c[i] > 0)
		{
			cout << i << " " << c[i] << "\n";
		}
	}
	return 0;
}