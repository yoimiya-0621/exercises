#include <iostream>
using namespace std;
int main()
{
	int T;
	cin >> T;
	int n;
	while (T--)
	{
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			cout << i << ' ';
		}
		cout << '\n';
	}
	return 0;
}