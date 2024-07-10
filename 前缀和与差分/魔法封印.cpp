#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	int a[10010] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int k = 0;

	cin >> k;
	int x, y;
	while (k--)
	{
		cin >> x >> y;
		cout << upper_bound(a, a + n, y) - lower_bound(a, a + n, x) << '\n';
	}
	return 0;
}