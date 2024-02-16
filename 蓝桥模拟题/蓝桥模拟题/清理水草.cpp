#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int n,m,t,ans=0;
//	scanf("%d %d", &n, &m);
//	int a[101][101] = { 0 };
//	scanf("%d", &t);
//	for (int i = 0; i < t; i++)
//	{
//		int r1, c1, r2, c2;
//		scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
//		for (int j = r1; j <= r2; j++)
//		{
//			for (int k = c1; k <= c2; k++)
//			{
//				a[j][k]++;
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j =1; j <= m; j++)
//			if(a[i][j]==0)
//			ans++;
//	}
//	printf("%d", ans);
//	return 0;
//}
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//    int n;
//    cin >> n;
//    int a[1000];
//    for (int i = 1; i <= n; i++)
//        cin >> a[i];
//    int k;
//    cin >> k;
//    for (int i = 1; i <= n; i++)
//    {
//        int b[1000];
//        copy(a+1, a + n+1, b+1);
//        if (i - k <= 0 && i + k > n)
//        {
//            sort(b+1, b + n+1);
//            cout << b[1] << " ";
//        }
//        else if (i - k <= 0)
//        {
//            sort(b+1, b + i + k+1);
//            cout << b[1] << " ";
//        }
//        else if (i + k > n)
//        {
//            sort(b + i - k, b + n+1);
//            cout << b[i-k] << " ";
//        }
//        else
//        {
//            sort(b + i - k, b + i + k+1);
//            cout << b[i-k] << " ";
//        }
//    }
//    // 请在此输入您的代码
//    return 0;
//}
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long n;
    long long a[10000];
    cin >> n;
    for (long long i = 0; i < n; i++)
        cin >> a[i];
    for (long long i = 0; i + 2 < n; i++)
    {
        sort(a, a + i + 3);
        cout << a[2] << " ";
    }
    // 请在此输入您的代码
    return 0;
}