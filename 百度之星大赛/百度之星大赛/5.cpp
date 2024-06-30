//#include <iostream>
//#include <algorithm>
//using namespace std;
//#define ll long long 
//const int N = 2e5 + 10;
//ll a[N];
//int main()
//{
//	int T,n;
//	cin >> T;
//	while (T--)
//	{
//		cin >> n;
//		int flag1 = 0, flag2 = 0;
//		ll sum1 = 0, sum2 = 0, m1 = -1e9, m2 = 1e9,m11=1e9,m22=-1e9;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> a[i];
//			m2 = min(m2, a[i]);
//			m1 = max(m1, a[i]);
//			if (a[i] > 0)
//			{
//				flag1 = 1;
//				sum1 += a[i];
//				m11 = min(a[i], m11);
//			}
//			if (a[i] < 0)
//			{
//				sum2 += a[i];
//				flag2 = 1;
//				m22 = max(m22, a[i]);
//			}
//		}
//		if (flag1 && flag2)
//			cout << m1 + sum1 - sum2 - m2 << '\n';
//		else if (flag1 == 1) {
//			cout << m1 + sum1 - sum2 - m2 - m11 << '\n';
//		}
//		else if (flag2 == 1) {
//			cout << m1 + sum1 - sum2 - m2 + m22 << '\n';
//		}
//		else
//			cout << 0 << '\n';
//		memset(a, 0, sizeof(a));
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//class Pet {
//public:
//	virtual string speak() {
//		return "pet";
//	}
//};
//class Dog:public Pet{
//public:
//	string speak() {
//		return "dog";
//	}
//};
//void print(Pet* a) {
//	cout<<a->speak();
//}
//int main()
//{
//	Dog a;
//	Pet* p1 = &a;
//	Pet& p2 = a;
//	Pet p3;
//	cout << p1->speak() << p2.speak() << p3.speak() << '\n';
//	print(p1), print(&p2), print(&p3);
//
//	return 0;
//}

#include<iostream>
#include<fstream>
using namespace std;
int main() {
	cout.fill('*');
	cout.width(6);
	cout.fill('#');
	cout << "abc" << '\n';
	return 0;
}