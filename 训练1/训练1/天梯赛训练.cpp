//L1-69-ºÏ≤‚Ã•—π
/*#include <iostream>
#include <algorithm>
using namespace std;
int err = 0,mi=0;
struct S
{
	int a;
	int id;
}s[4];
bool cmp(S a, S b)
{
	return a.a < b.a;
}
int main()
{
	for (int i = 0; i < 4; i++)
	{
		cin >> s[i].a;
		s[i].id = i + 1;
	}
	cin >> mi >> err;
	sort(s, s + 4, cmp);
	if (s[3].a - s[0].a <= err && s[0].a >= mi)
		cout << "Normal";
	else if ((s[3].a - s[0].a > err || s[0].a < mi) && s[3].a - s[1].a <= err && s[1].a >= mi)
		cout << "Warning: please check #" << s[0].id << "!";
	else
		cout << "Warning: please check all the tires!";
	return 0;
}*/
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < m; i++)
//	{
//		string s;
//		cin >> s;
//		int ans = 1;
//		for (int j = 0; j < s.size(); j++)
//		{
//			if (s[j] == 'y')
//				ans *= 2;
//			else
//				ans = ans * 2 + 1;
//		}
//		cout << ans - (int)pow(2, n) + 1 << "\n";
//	}
//	return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string s = "array";
//	string a = "arr";
//	if (s.find(a) == string::npos)
//	{
//		cout << "1";
//	}
//	else
//		cout << 0;
//	return 0;
//}