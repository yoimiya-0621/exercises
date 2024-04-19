//#include <iostream>
//using namespace std;
//class Sample
//{
//public:
//	Sample();
//	Sample(int x);
//};
//class A {
//
//};
//int main()
//{
//	A* a = new A(10);
//	
//	return 0;
//}
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int flag = 0;
	for (int i = 1; i <= n/2; i++)
	{
		if (i % 2 == 0 && (n - i) % 2 == 0) {
			flag = 1;
			break;
		}
	}
	if (flag)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}