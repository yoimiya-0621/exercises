//L1-69-检测胎压
/*#include <iostream>
#include <algorithm>
using namespace std;
int err = 0,mi=0;
struct S
{
	int a;
	int id;
}s[4];
bool cmp(S a, S b)
{
	return a.a < b.a;
}
int main()
{
	for (int i = 0; i < 4; i++)
	{
		cin >> s[i].a;
		s[i].id = i + 1;
	}
	cin >> mi >> err;
	sort(s, s + 4, cmp);
	if (s[3].a - s[0].a <= err && s[0].a >= mi)
		cout << "Normal";
	else if ((s[3].a - s[0].a > err || s[0].a < mi) && s[3].a - s[1].a <= err && s[1].a >= mi)
		cout << "Warning: please check #" << s[0].id << "!";
	else
		cout << "Warning: please check all the tires!";
	return 0;
}*/
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < m; i++)
//	{
//		string s;
//		cin >> s;
//		int ans = 1;
//		for (int j = 0; j < s.size(); j++)
//		{
//			if (s[j] == 'y')
//				ans *= 2;
//			else
//				ans = ans * 2 + 1;
//		}
//		cout << ans - (int)pow(2, n) + 1 << "\n";
//	}
//	return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string s = "array";
//	string a = "arr";
//	if (s.find(a) == string::npos)
//	{
//		cout << "1";
//	}
//	else
//		cout << 0;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class A {
//public:
//	A() { cout << "1"; }
//	~A() { cout << "2"; }
//};
//class B : public A {
//public:
//	B() { cout << "3"; }
//	~B() { cout << "4"; }
//};
//int main() {
//	B b;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	A() { cout << "A"; }
//};
//class B
//{
//public:
//	B() { cout << "B"; }
//};
//class C :public A
//{
//	B b;
//public:
//	C() { cout << "C"; }
//};
//int main() {
//	C obj;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//class A {
//public:
//	A(int i) { x = i; }
//	void dispa() {
//		cout << x << ',';
//	}
//private:
//	int x;
//};
//class B : public A {
//public:
//	B(int i) : A(i + 10) {
//		x = i;
//	}
//	void dispb() {
//		dispa();
//		cout << x << endl;
//	}
//private:
//	int x;
//};
//int main() {
//	B b(2);
//	b.dispb();
//	return 0;
//}
//#include<iostream>
//using namespace std;
//class AA {
//public:
//	AA() { cout << "A"; }
//	~AA() { cout << "a"; }
//};
//class BB : public AA {
//	AA aa;
//public:
//	BB() { cout << "B"; }
//	~BB() { cout << "b"; }
//};
//int main() {
//	BB bb;
//	return 0;
//}
#include <iostream>
using namespace std;
class A {
public:
	A() {
		cout << "调用A的构造函数" << "\n";
	}
	
private:
	int a;
protected:
	void inia(int x) {
		a = x;
		cout << "a:" << a << "\n";
	}
};
class B :public A {
public:
	B() {
		cout << "调用B的构造函数" << "\n";
	}
	
private:
	int b;
	
protected:
	int xb;
	void inib(int x) {
		b = x;
		cout << "b:" << b << "\n";
	}
};

int main()
{
	B b;
	b.inibb(2);
	return 0;
}