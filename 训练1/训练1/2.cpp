//#define  _CRT_SECURE_NO_WARNINGS
////#include <cstdio>
////int main()
////{
////	char s[1000] = { 0 };
////	char arr[1000] = { 0 };
////	scanf("%s", s);
////	int flag = 0, m = 0;
////	for (int i = 0; s[i] != '\0';i++)
////	{
////		if (flag == 1)
////		{
////			if (s[i] >= '1'&& s[i] <='9')
////			{
////				arr[m]= s[i];
////				m++;
////			}
////		}
////		if (s[i] == '(')
////			flag = 1;
////	}
////	if (arr[0] == 0)
////		printf("not find");
////	else
////	printf("%s", arr);
////	return 0;
////}
//#include<map>
//#include <cstdio>
//using namespace std;
//struct S
//{
//	char a = 'A';
//	int b = 0;
//}c[105];
#define  _CRT_SECURE_NO_WARNINGS
// 
//int main()
//{
//	
//	char s[105] = { 0 };
//	scanf("%s", s);
//	int len = strlen(s);
//	int j = 0;
//	for (int i = 0; i < len; i++)
//	{
//		int k = 0;
//		for (k = 0; k <= j; k++)
//		{
//			if (c[k].a == s[i] && s[i] >= 'a' && s[i] <= 'z')
//				c[k].b++;
//		}
//		if (k == j + 1 && s[i] >= 'a' && s[i] <= 'z')
//		{
//			c[k].a = s[i];
//			c[k].b++;
//			j++;
//		}
//	}
//	int flag = 0;
//	for (int i = 0; i <= j; i++)
//		if (c[i].b == 1) {
//			printf("%c", c[i].a);
//			flag = 1;
//			break;
//		}
//	if (flag == 0)
//		printf("no");
//	return 0;
//}
//#include <iostream>
//#include <cstdio>
//#include <cstring>
//using namespace std;
//int main()
//{
//	char s[105] = { 0 };
//	scanf("%s", s);
//	int len = strlen(s);
//	for (int i = len - 1; i >= 0; i--)
//	{
//		if (s[i] >= 'a' && s[i] <= 'z')
//		{
//			s[i] -= 32;
//			if (s[i] >= 'X' && s[i] <= 'Z')
//			{
//				printf("%c", s[i] + 3 - 26);
//			}
//			else
//				printf("%c", s[i] + 3);
//		}
//		else
//		{
//			s[i] += 32;
//			if (s[i] >= 'x' && s[i] <= 'z')
//			{
//				printf("%c", s[i] + 3 - 26);
//			}
//			else
//				printf("%c", s[i] + 3);
//		}
//	}
//	return 0;
//}

