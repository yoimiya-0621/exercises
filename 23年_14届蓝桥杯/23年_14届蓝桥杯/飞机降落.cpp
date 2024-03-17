//#define _CRT_SECURE_NO_WARNINGS
////#include <cstdio>
////#include <algorithm>
////using namespace std;
////struct S
////{
////	int a;
////	int b;
////	int t;
////}s[10];
////bool cmp(struct S x, struct S y)
////{
////	if (x.a + x.b != y.a + y.b)
////		return (x.a + x.b) < (y.a + y.b);
////	else
////		return x.t < y.t;
////}
////int main()
////{
////	int n;
////	scanf("%d", &n);
////	for (int i = 0; i < n; i++)
////	{
////		int k;
////		scanf("%d", &k);
////		for (int j = 0; j < k; j++)
////		{
////			scanf("%d %d %d", &s[j].a, &s[j].b, &s[j].t);
////		}
////		sort(s, s + k, cmp);
////		int time = 0,ans=0;
////		for (int j = 0; j < k; j++)
////		{
////			if (time >= s[j].a && time <= (s[j].a + s[j].b))
////			{
////				ans++;
////				time += s[j].t;
////			}
////			else
////			{
////				printf("NO\n");
////				break;
////			}
////		}
////		if (ans == k)
////			printf("YES\n");
////	}
////	return 0;
////}
//#include<iostream>
//#include<cmath>
//#include<queue>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//const int N = 15;
//int t[N], d[N], l[N];
//int a[N];
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		int n;
//		scanf("%d", &n);
//		for (int i = 1; i <= n; i++)
//			scanf("%d%d%d", &t[i], &d[i], &l[i]);
//		for (int i = 1; i <= n; i++)
//			a[i] = i;
//		bool flag = false;
//		do
//		{
//			int now = 0;
//			for (int i = 1; i <= n; i++)
//			{
//				if (now <= t[a[i]] + d[a[i]])
//					now = l[a[i]] + max(now, t[a[i]]);
//				else
//					break;
//				if (i == n) flag = true;
//			}
//			if (flag) break;
//		} while (next_permutation(a + 1, a + n + 1));
//		if (flag) puts("YES");
//		else puts("NO");
//	}
//	return 0;
//}

#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() {
        ++count;
    }
    ~MyClass() {
        --count;
    }
    static int getCount() {
        return count;
    }
private:
    static int count;
};
int MyClass::count = 0;
int main() {
    MyClass obj;
    cout << obj.getCount();
    MyClass obj2;
    cout << MyClass::getCount();
    cout << obj2.getCount();
    return 0;
}