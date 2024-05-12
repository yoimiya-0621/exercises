//#include <iostream>
//#include <map>
//using namespace std;
//char a[1005][1005];
//int b[1005][1005];
//int k = 0, n;
//int dx[4] = { 1,0,-1,0 };
//int dy[4] = { 0,1,0,-1 };
//map<int, int>ans;
//void dfs(int x, int y)
//{
//    if (x <= 0 || y <= 0 || x > n || y > n)
//        return;
//    int xx, yy;
//    b[x][y] = k;
//    for (int i = 0; i < 4; i++)
//    {
//        xx = x + dx[i];
//        yy = y + dy[i];
//        if (b[xx][yy] == 0)
//            dfs(xx, yy);
//        if (a[xx][yy] == '#' && b[xx][yy] == 0)
//        {
//            b[xx][yy] = k;
//        }
//        if (b[xx][yy] == 0)
//            dfs(xx, yy);
//    }
//}
//int main()
//{
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= n; j++)
//        {
//            cin >> a[i][j];
//            if (a[i][j] == '.')
//                b[i][j] = -1;
//        }
//    }
//    for (int i = 1; i <= n; i++)
//        for (int j = 1; j <= n; j++)
//        {
//            if (b[i][j] == 0)
//            {
//                k++;
//                dfs(i, j);
//            }
//        }
//    /*for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= n; j++)
//        {
//            cout << b[i][j] << ' ';
//        }
//        cout << '\n';
//    }*/
//    for (int i = 1; i <= n; i++)
//        for (int j = 1; j <= n; j++)
//        {
//            if (a[i][j] == '#' && a[i - 1][j] == '#' && a[i + 1][j] == '#' && a[i][j - 1] == '#' && a[i][j + 1] == '#')
//                ans[b[i][j]] = 1;
//        }
//    int anns = 0;
//    for (int i = 1; i <= k; i++)
//        if (ans[i] == 1)
//            anns++;
//    cout << k - anns;
//    return 0;
//}