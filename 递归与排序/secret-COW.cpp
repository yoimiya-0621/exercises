//#define  _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//using namespace std;
//int main()
//{
//	char s[35];
//	scanf("%s", s);
//	long long n;
//	cin >> n;
//	long long len = (long long)strlen(s);
//	if (n <= len)
//		cout << s[n-1];
//	else
//	{
//		long long sum = len;
//		while (n > sum)
//			sum *= 2;
//		while (n > len)
//		{
//			if (n == sum / 2 + 1)
//			{
//				n = sum / 2;
//			}
//			else
//			{
//				n = n - (sum / 2) - 1;
//			}
//			sum /= 2;
//		}
//		cout << s[n - 1];
//	}
//	return 0;
//}
#include<iostream>
using namespace std;

void fun(int* a, int* b) {
    int x = *a;
    *a = *b;
    *b = x;
    cout << *a << *b << " ";
}
int main() {
    int x = 1, y = 2;
    fun(&x, &y);
    cout << x << y << endl;
    return 0;
}