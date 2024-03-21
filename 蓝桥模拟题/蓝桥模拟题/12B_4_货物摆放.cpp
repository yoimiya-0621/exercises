
//#include <iostream>
//#include <cmath>
//using namespace std;
//long long ans = 0;
//long long n = 2021041820210418;
//
//int main()
//{
//	for (long long i = 1; i <= pow(n,(double)1/3); i++)
//	{
//		if(n%i==0)
//		for (long long j = i; j <= sqrt(n/i); j++)
//		{
//			if (n % (i * j) == 0)
//			{
//				if (i == j && j * j != n / i)
//					ans += 3;
//				else if (i != j && j * j == n / i)
//					ans += 3;
//				else if (i == j && j * j == n/i)
//					ans += 1;
//				else if(i!=j&&n/i/j!=j&&n/i/j!=i)
//					ans += 6;
//			}
//		}
//	}
//	cout << ans;
//	return 0;
//}