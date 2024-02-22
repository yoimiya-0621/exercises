//#include <iostream>
//#include <algorithm>
//using namespace std;
//int ans = 0;
//int a[4][60];
//int main()
//{
//	int s[4] = { 0 };
//	cin >> s[0] >> s[1] >> s[2] >> s[3];
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < s[i]; j++)
//		{
//			cin >> a[i][j];
//		}
//		if (s[i] == 1)
//			ans += a[i][0];
//		else
//		{
//			sort(a[i], a[i] + s[i]);
//			int l = 0, r = s[i] - 1;
//			while(l<=r)
//			{
//				ans += min(a[i][l], a[i][r]);
//				if (a[i][l] < a[i][r])
//				{
//					a[i][r] -= a[i][l];
//					l++;
//				}
//				else if (a[i][l] > a[i][r])
//				{
//					a[i][l] -= a[i][r];
//					r--;
//				}
//				else
//				{
//					l++;
//					r--;
//				}
//
//			}
//		}
//	}
//	cout << ans;
//	return 0;
//}