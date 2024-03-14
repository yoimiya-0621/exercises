//#include <iostream>
//#include <algorithm>
//using namespace std;
//#define MOD 1000000007;
//int n;
//long long ans = 0, bns = 0;
//long long a[100005] = { 0 };
//long long b[100005] = { 0 };
//int c[100005] = { 1 };
//int ma, mb;
//int main()
//{
//	cin >> n;
//	cin >> ma;
//	for (int i = ma; i >0; i--)
//	{
//		cin >> a[i];
//	}
//	cin >> mb;
//	for (int i = mb; i > 0; i--)
//	{
//		cin >> b[i];
//	}
//	for (int i = 1; i <= max(ma, mb); i++)
//	{
//		c[i] = max(a[i] + 1, b[i] + 1);
//		c[i] = max(2, c[i]);
//		c[i] *= c[i - 1];
//	}
//	for (int i = 1; i <= max(ma, mb); i++)
//	{
//		ans += a[i] * (long long)c[i - 1];
//		bns += b[i] * (long long)c[i - 1];
//	}
//	cout << (ans - bns)%MOD;
//	return 0;
//}