#define _CRT_SECURE_NO_WARNINGS

//#include <iostream>
//#include <algorithm>
//using namespace std;
//int n, m;
//int a[20005];
//struct S {
//	int sum;
//	int c;
//}b[20005];
//bool cmp(S a, S b)
//{
//	if (a.sum != b.sum)
//		return a.sum < b.sum;
//	else
//		return a.c < b.c;
//}
//int main() {
//	cin >> n >> m;
//	for (int i = n-1; i >= 0; i--)
//		cin >> a[i];
//	for (int i = 0; i < n; i++) {
//		sort(b, b + m, cmp);
//		for (int j = 0; j < m; j++)
//		{
//			if (b[j].c < 2)
//			{
//				b[j].sum += a[i];
//				b[j].c++;
//				break;
//			}
//		}
//	}
//	int ans = 0;
//	for (int i = 0; i < m; i++)
//	{
//		ans += b[i].sum * b[i].sum;
//	}
//	cout << ans;
//	return 0;
//}
//#include <iostream>
//#include <map>
//using namespace std;
//int n, m;
//int a, c,x=0;
//int cou[500000];
//char b, d;
//int ans1 = 0,ans2=0;
//map<int, bool>flag;
//map<int, int>k;
//bool f[20000];
//int main()
//{
//	cin >> n >> m;
//	while (m--)
//	{
//		cin >> a >> b >> c >> d;
//		if (k[a] == 0 && k[c] == 0)
//		{
//			//cou[++x] = 2;
//			//if (b == d)
//			//	f[x] = true;
//			//else
//			//	f[x] = false;
//			x++;
//			k[a] = x;
//			k[c] = x;
//		}
//		else if (k[a] != 0 && k[c] != 0)
//		{
//			//if (flag[k[a]])
//				//ans2++;
//			ans1 += 1;
//		}
//		else if (k[a] != 0 && k[c] == 0)
//		{
//			k[c] = k[a];
//			cou[k[a]]++;
//		}
//		else if (k[a] == 0 && k[c] != 0)
//		{
//			k[a] = k[c];
//			cou[k[a]]++;
//		}
//		//if (f[k[a]]==true&&b!=d||f[k[a]]==false&&b==d)
//			//flag[k[a]] = true;
//	}
//	for (int i = 1; i <= n; i++)
//		if (k[i] == 0)
//			x++;
//	cout << ans1 << " " << x-ans1;
//	return 0;
//}
//#include <iostream>
//#include <map>
//using namespace std;
//#define ll long long
//map<ll, ll>ans;
//int n, q;
//int main()
//{
//	
//	return 0;
//}
//#include <iostream>
//#include <vector>
//using namespace std;
//vector<int>ans;
//void f(int x, int y, int z)
//{
//	if (z < 10) {
//		ans.push_back(z);
//	}
//	else if (z > 10 && z <= 81)
//	{
//		ans.push_back(z / 10);
//		ans.push_back(z % 10);
//	}
//}
//int main()
//{
//	int a1, a2, n;
//	cin >> a1 >> a2 >> n;
//	int x = a1, y = a2,z=x*y,i=0;
//	ans.push_back(x);
//	ans.push_back(y);
//	while (ans.size() <= n)
//	{
//		x = ans[i];
//		y = ans[i + 1];
//		z = x * y;
//		f(x, y, z);
//		i++;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << ans[i] << " ";
//	}
//	return 0;
//}
#include<iostream>
using namespace std;
int main() {
    int n = 0;
    cin >> n;
    char a[110][110] = { 0 };
    getchar();
    for (int i = 0; i < n; i++) {
        for (int j = 0; 1; j++) {
            scanf("%c", &a[i][j]);
            if (a[i][j] == '\n')
                break;
        }
        // getchar();
        // cout << a[i]<<endl;
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; 1; j++) {
            if (a[i][j] == '\0')
                break;
            if (a[i][j] >= '0' && a[i][j] <= '9') {
                cout << a[i];
                ans++;
                break;
            }
        }
    }
    if (ans == 0)
    {
        cout << "Not interesting.";
    }
    return 0;
}