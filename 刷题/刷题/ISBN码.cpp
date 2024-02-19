//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int sum = 0;
//	char s[20];
//	scanf("%s", s);
//	for (int i = 0; i < 11; i++)
//	{
//		if (i == 1 || i == 5 )
//			continue;
//		if (i == 0)
//		{
//			sum += s[i] - '0';
//		}
//		else if (i > 1 && i < 5)
//		{
//			sum += (s[i] - '0') * i;
//		}
//		else if (i > 5)
//		{
//			sum += (s[i] - '0') * (i - 1);
//		}
//	}
//	if (s[12] == 'X')
//	{
//		if (sum % 11 == 10)
//			printf("Right");
//		else
//		{
//			s[12] = sum%11+'0';
//			printf("%s", s);
//		}
//	}
//	else
//	{
//		if (sum % 11 == s[12] - '0')
//			printf("Right");
//		else
//		{
//			if (sum % 11 != 10)
//				s[12] = sum % 11 + '0';
//			else
//				s[12] = 'X';
//			printf("%s", s);
//		}
//	}
//	return 0;
//}