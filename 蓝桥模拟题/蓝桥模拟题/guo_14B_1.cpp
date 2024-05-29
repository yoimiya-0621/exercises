//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	string s;
//	int c = 0;
//	for (int i = 1; i <= 2023; i++)
//	{
//		string x;
//		c = i;
//		while (c)
//		{
//			x.push_back(c%10 + '0');
//			c /= 10;
//		}
//		reverse(x.begin(), x.end());
//		s += x;
//	}
//	long long ans = 0;
//	//s = "1234567891011121314151617181920212223";
//	//s = "22002233";
//	vector<vector<int>>mp(12);
//	for (int x1 = 0; x1 < s.size(); x1++)
//	{
//		mp[s[x1] - '0'].push_back(x1);
//		/*while (s[x1] != '2')
//		{
//			x1++;
//			if (x1 >= s.size())
//			{
//				cout << ans;
//				return 0;
//			}
//		}
//		for (int x2 = x1 + 1; x2 < s.size(); x2++)
//		{
//			while (s[x2] != '0')
//			{
//				x2++;
//				if (x2 >= s.size())
//				{
//					break;
//				}
//			}
//			for (int x3 = x2 + 1; x3 < s.size(); x3++)
//			{
//				while (s[x3] != '2')
//				{
//					x3++;
//					if (x3 >= s.size())
//					{
//						break;
//					}
//				}
//				for (int x4 = x3 + 1; x4 < s.size(); x4++)
//				{
//					if (s[x4] == '3')
//						ans++;
//				}
//			}
//		}*/
//	}
//	long long x, y;
//	for (int i = 0; i < mp[2].size()-1; i++)
//	{
//		for (int j = i + 1; j < mp[2].size(); j++) {
//			x = upper_bound(mp[0].begin(), mp[0].end(), mp[2][j]) - lower_bound(mp[0].begin(), mp[0].end(), mp[2][i]);
//			y = mp[3].end() - upper_bound(mp[3].begin(), mp[3].end(), mp[2][j]);
//			ans += x * y;
//		}
//	}
//	cout << ans;
//	return 0;
//}