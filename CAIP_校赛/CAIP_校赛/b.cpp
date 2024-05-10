//#include <bits/stdc++.h>
//using namespace std;
//int a[30005] = { 0 };
//long long ans = 0;
//int main()
//{
//    int n;
//    cin >> n;
//    for (int i = 0; i < n; i++)
//        cin >> a[i];
//    sort(a, a + n);
//    for (int i = 1; i < n; i++)
//    {
//        if (a[i] <= a[i - 1])
//        {
//            ans += a[i - 1] - a[i];
//            a[i] = a[i - 1];
//        }
//        if (a[i] == a[i - 1])
//        {
//            a[i]++;
//            ans++;
//        }
//    }
//    cout << ans;
//    return 0;
//}