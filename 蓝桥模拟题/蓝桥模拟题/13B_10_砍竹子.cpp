//#include <iostream>
//#include <map>
//using namespace std;
//long long n;
//long long a[20005] = { 0 };
//map<int, int>b;
//long long f(long long x)
//{
//	return (long long)sqrt(x / 2 + 1);
//}
//long long getn(long long i)
//{
//	int k = 0;
//	long long x = a[i];
//	while (x > 1)
//	{
//		x = f(x);
//		k++;
//	}
//	return k;
//}
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//		b[i] = getn(i);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		int j = i + 1;
//		while (a[i] == a[j])
//			j++;
//
//	}
//	return 0;
//}