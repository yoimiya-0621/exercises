#include <iostream>
using namespace std;
int main()
{
	long long x, y,ans=0;
	cin >> x >> y;
	while (x && y)
	{
		if (x > y)
		{
			long long  m = x / y;
			ans += 4 * y * m;
			if (x % y != 0) {
				x -= y * m;
			}
			else
			{
				x -= y * m;
				y = 0;
			}
		}
		else if(y>x)
		{
			long long m = y / x;
			ans += 4 * x * m;
			if (y % x != 0)
			{
				y -= x * m;
			}
			else
			{
				y -= x * m;
				x = 0;
			}
		}
		else
		{
			ans += 4 * x;
			x = 0;
			y = 0;
		}
	}
	cout << ans;
	return 0;
}