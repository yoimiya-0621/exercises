//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//char a[2000];
//int a1[2000];
//int b1[2000];
//char b[2000];
//int c[2000];
//int main()
//{
//	cin >> a;
//	cin >> b;
//	int len1 = strlen(a);
//	int len2 = strlen(b);
//	for (int i = 0; i < len1; i++)
//		a1[i] = a[len1-i-1]-'0';
//	for (int i = 0; i < len2; i++)
//		b1[i] = b[len2-i-1]-'0';
//		for (int i = 0; i < len1; i++)
//		{
//			for (int j = 0; j < len2; j++)
//			{
//				c[i + j] += a1[i] * b1[j];
//			}
//		}
//		int w = len1+len2;
//		for (int i = 0; i < w; i++)
//		{
//			if (c[i] > 9)
//			{
//				int y = c[i] / 10;
//				c[i] %= 10;
//				c[i + 1] += y;
//			}
//		}
//		while (c[w - 1] == 0 && w > 1)
//			w--;
//		for (int i = w-1; i >=0; i--)
//			cout << c[i];
//	return 0;
//}
#include <iostream>
using namespace std;
void fun(int num)
{
    cout << num << endl;
}
void fun(char ch)
{
    cout << (ch + 1) << endl;
}
int main()
{
    fun('A');
    return 0;
}