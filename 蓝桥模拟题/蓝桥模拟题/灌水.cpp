#define  _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//char a[32][42];
//int ans = 0;
//void dfs(int x, int y)
//{
//    a[x][y] = '2';
//    if (x - 1 >= 1 && x - 1 <= 30)
//    {
//        if (a[x - 1][y] == '0')
//            dfs(x - 1, y);
//    }
//    if (x + 1 >= 1 && x + 1 <= 30)
//    {
//        if (a[x + 1][y] == '0')
//            dfs(x + 1, y);
//    }
//    if (y - 1 >= 1 && y - 1 <= 40)
//    {
//        if (a[x][y - 1] == '0')
//            dfs(x, y - 1);
//    }
//    if (y + 1 >= 1 && y + 1 <= 40)
//    {
//        if (a[x][y + 1] == '0')
//            dfs(x, y + 1);
//    }
//}
//int main()
//{
//    for (int i = 1; i <= 30; i++)
//    {
//        scanf("%s", a[i]);
//    }
//    if (a[1][1] == '0')
//        dfs(1, 1);
//    for (int i = 1; i <= 30; i++)
//    {
//        for (int j = 1; j <= 40; j++)
//        {
//            if (a[i][j] == '2')
//                ans++;
//        }
//    }
//    cout << ans;
//    // 请在此输入您的代码
//    return 0;
//}
//#include <iostream>
//using namespace std;
//int n, k;
//long a[n + 1];
//long b[n + 1];
//int main()
//{
//    cin >> n >> k;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> a[i];
//        b[i] = b[i - 1] + a[i];
//    }
//    long max = 0;
//    for (int i = 0; i + k <= n; i++)
//    {
//        if (max < b[i + k - 1] - b[i])
//            max = b[i + k - 1] - b[i];
//    }
//    cout << max;
//    // 请在此输入您的代码
//    return 0;
//}