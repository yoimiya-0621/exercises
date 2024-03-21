//#include <iostream>
//using namespace std;
//long long n;
//long long a[1005][1005] = { 0 };
//int main()
//{
//	cin >> n;
//	int i = 1,flag=0;
//	while (1)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			if (j != 1&&j!=i)
//				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
//			else
//				a[i][j] = 1;
//			if (a[i][j] == n)
//			{
//				cout << ((i - 1) * (i - 1) + i - 1) / 2 + j;
//				flag = 1;
//				break;
//			}
//		}
//		if (flag)
//			break;
//		i++;
//	}
//	return 0;
//}