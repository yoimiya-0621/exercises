//#include <iostream>
//using namespace std;
//bool ok(int m, int d)
//{
//	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
//	{
//		if (d <= 31)
//			return true;
//		else
//			return false;
//	}
//	else if (m == 2)
//	{
//		if (d <= 28)
//			return true;
//		else
//			return false;
//	}
//	else
//	{
//		if (d <= 30)
//			return true;
//		else
//			return false;
//
//	}
//}
//int main()
//{
//	string s = "20220101";
//	int ans = 0;
//	for (int i = 1; i <= 12; i++)
//	{
//		s[4] = i / 10+'0';
//		s[5] = i % 10+'0';
//		for (int j = 1; j <= 31; j++)
//		{
//			if (ok(i, j)) {
//				s[6] = j / 10 + '0';
//				s[7] = j % 10 + '0';
//				for (int k = 0; k + 2 < 8; k++)
//				{
//					if (s[k] == s[k + 1] - 1 && s[k + 1] == s[k + 2] - 1)
//					{
//						ans++;
//						break; 
//					}
//				}
//			}
//			else
//				continue;
//
//		}
//	}
//	cout << ans;
//	return 0;
//}