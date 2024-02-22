#define  _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cmath>
int main()
{
	char s[200000];
	int a=0, b=0,c=0,d=0;
	int arr[1000][2]; int m = 0;
	int crr[1000][2]; int n = 0;
	int i = 0;
	do {
		scanf("%c", &s[i]);
		if (s[i] == 'W')
		{
			a++;
			c++;
		}
		else if (s[i] == 'L')
		{
			b++;
			d++;
		}
		if ((a >= 11 || b >= 11)&&(fabs(a-b)>=2))
		{
			arr[m][0] = a;
			arr[m][1] = b;
			m++;
			a = 0;
			b = 0;
		}
		if ((c >= 21 || d >= 21)&&(fabs(c-d)>=2))
		{
			crr[n][0] = c;
			crr[n][1] = d;
			n++;
			c = 0;
			d = 0;
		}
		i++;
	} while (s[i - 1] != 'E');

	if (1)
	{
		arr[m][0] = a;
		arr[m][1] = b;
		m++;
		a = 0;
		b = 0;
	}
	if (1)
	{
		crr[n][0] = c;
		crr[n][1] = d;
		n++;
		c = 0;
		d = 0;
	}
	if (i == 1)
		printf("0:0\n\n0:0");
	for (int k = 0; k < m; k++)
		printf("%d:%d\n", arr[k][0], arr[k][1]);
	for (int k = 0; k < n; k++)
		printf("\n%d:%d", crr[k][0], crr[k][1]);
	return 0;
}