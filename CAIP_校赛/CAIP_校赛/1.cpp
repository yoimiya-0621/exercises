//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n;
//    cin >> n;
//    int a[20] = { 0 };
//    map<int, int>b;
//    int c[1000] = { 0 };
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//        int x = a[i] % 17;
//        if (c[x] == 0)
//            c[x] = 1;
//        int y = x;
//        while (b[y] == 1)
//        {
//            y = x + c[x] * c[x];
//            c[x]++;
//            y %= 18;
//        }
//        cout << a[i] << " pos: " << y << '\n';
//        b[y] = 1;
//    }
//    return 0;
//}