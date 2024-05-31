////A
//#include <iostream>
//using namespace std;
//int main()
//{
//    int a, b;
//    cin >> a >> b;
//    if (a == b)
//        cout << 'p';
//    else if (a == 1 && b == 2 || a == 2 && b == 3 || a == 3 && b == 1)
//        cout << 'a';
//    else
//        cout << 'b';
//    return 0;
//}
//B
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	if (a + 5 * b < 11 * a)
//		cout << a + 5 * b;
//	else
//		cout << 11 * a;
//	return 0;
//}

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
const int N = 5e5 + 5;
int a[N];
int main()
{
	int n;
	cin >> n;
	vector<vector<int>>mp(2);
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		mp[a[i]].push_back(i);
	}
	if (a[1] == a[n])
		cout << 1;
	else {
		if (a[1] == 0) {
			for (int i = 1; i < mp[0].size(); i++) {
				if (binary_search(mp[1].begin(), mp[1].end(), mp[0][i] + 1) && mp[1][mp[1].size() - 1] != mp[0][i] + 1) {
					cout << 2;
					return 0;
				}
			}
			cout << -1;
		}
		else {
			for (int i = 1; i < mp[1].size(); i++) {
				if (binary_search(mp[0].begin(),mp[0].end(),mp[1][i]+1)&&mp[0][mp[0].size()-1]!= mp[1][i] + 1) {
					cout << 2;
					return 0;
				}
			}
			cout << -1;
		}
	}
	return 0;
}