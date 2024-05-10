//#include <bits/stdc++.h>
//using namespace std;
//int a[105];
//int main()
//{
//    int n;
//    cin >> n;
//    int sum1 = 0, sum2 = 0;
//    for (int i = 0; i < n; i++)
//        cin >> a[i];
//    sort(a, a + n);
//    for (int j = n - 1; j >= 0; j--)
//    {
//        if (sum1 < sum2)
//            sum1 += a[j];
//        else
//            sum2 += a[j];
//    }
//    cout << abs(sum1 * sum1 - sum2 * sum2);
//    return 0;
//}