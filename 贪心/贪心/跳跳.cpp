#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	int a[301] = { 0 };
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a, a + n+1);
	int i = 0, j = n;
	long long ans = 0;
	int x = 0;
	while (i <= j)
	{
		ans += pow(a[j]-a[i], 2);
		if (x % 2 == 0)
			i++;
		else
			j--;
		x++;
	}
	cout << ans;
	return 0;
}