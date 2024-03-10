#include <iostream>
#include <algorithm>
using namespace std;
struct S
{
	int id;
	int h;
	int l;
	int r;
	int a1;
	int a2;
}s[1005];
bool cmp(S a, S b)
{
	if (a.h == b.h)
		return a.id < b.id;
	else
		return a.h > b.h;
}
bool cmp2(S a, S b)
{
	return a.id < b.id;
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s[i].h >> s[i].l >> s[i].r;
		s[i].id = i + 1;
	}
	sort(s, s + n, cmp);
	for (int i = 0; i < n; i++)
	{
		int j = i + 1;
		while (1)
		{
			if (j > n - 1)
			{
				s[i].a1 = 0;
				break;
			}
			if (s[j].l < s[i].l&&s[j].r>s[i].l&&s[j].h!=s[i].h)
			{
				s[i].a1 = s[j].id;
				break;
			}
			
				j++;
		}
			j = i + 1;
		while(1)
		{
			if (j > n - 1)
			{
				s[i].a2 = 0;
				break;
			}
			if (s[j].r > s[i].r&&s[j].l<s[i].r&&s[j].h!=s[i].h)
			{
				s[i].a2 = s[j].id;
				break;
			}
			
				j++;
		}
	}
	sort(s, s + n, cmp2);
	for (int i = 0; i < n; i++)
		cout << s[i].a1 << " " << s[i].a2 << "\n";
	return 0;
}
