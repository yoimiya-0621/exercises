//#include <iostream>
//using namespace std;
//int main()
//{
//	long long a, b, n;
//	cin >> a >> b >> n;
//	long long m = n / (5 * a + 2 * b);
//	long long ans = 7*m;
//	n -= m * (5 * a + 2 * b);
//	int i = 0;
//	while(n>0)
//	{
//		if (i % 7 <= 4)
//			n -= a;
//		else
//			n -= b;
//		ans++;
//		i++;
//	}
//	cout << ans;
//	return 0;
//}