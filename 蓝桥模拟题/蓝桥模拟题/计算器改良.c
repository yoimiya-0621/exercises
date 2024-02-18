#include <stdio.h>
char s[100];
int a = 0, x = 0;
char w;
int main()
{
	gets(s);
	int i = 0;
	while (s[i] != '\0')
	{
		int c = 0;
		int f = 1;
		if (s[i] == '-')
		{
			f = -f; i++;
		}
		else if (s[i] == '+')
		{
			i++;
		}
		while (1)
		{
			if (s[i] >= '0' && s[i] <='9')
			{
				c = c * 10 + s[i] - '0';
			}
			else if (s[i] >= 'a' && s[i] <= 'z')
			{
				w = s[i];
				if (c == 0)
					c = 1;
				x += f * c;
				break;
			}
			else if (s[i] == '+' || s[i] == '-'||s[i]=='\0')
			{
				a += f * c;
				i--;
				break;
			}
			else if (s[i] == '=')
			{
				a += f * c;
				a = -a;
				x = -x;
				break;
			}
			if (s[i] == '\0')
				break;
			i++;
		}
		i++;
	}
	double ans = (-(double)a) /((double) x);
	printf("%c=%.3lf", w,-ans);
	return 0;
}