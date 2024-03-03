////#include <stdio.h>
////#include <string.h>
////int main()
////{
////	char s[105] = { 0 };
////	char x[15] = "secret";
////	gets(s);
////	int i = 0, len = strlen(s), j = 0, m = 0;
////	int flag = 2;
////
////	for (; i < len; i++)
////	{
////		if (s[i] == ' '&&s[i+1]!=' ')
////			flag++;
////		if (x[j] == s[i])
////		{
////			while (x[j] == s[i])
////			{
////				i++;
////				j++;
////			}
////			if (x[j] != '\0')
////			{
////				j = 0;
////			}
////			else
////			{
////				printf("\"secret\" is pos %d", flag);
////				m = 1;
////				j = 0;
////			}
////		}
////	}
////	if (m == 0)
////		printf("No \"secret\""); 
////	return 0;
////}
//#define  _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	char c = getchar();
//	for (int i = 0; i < n; i++)
//	{
//		char s[500] = { 0 };
//		gets(s);
//		int len = strlen(s);
//		int j = 0;
//		for (int k = 0; k < len; k++) {
//			if (s[k] >= 'a' && s[k] <= 'z' || s[k] >= 'A' &&s[k] <= 'Z')
//			{
//				if (j < 4) {
//					if (s[k ] >= 'A' &&s[k] <= 'Z')
//						s[k] += 32;
//					printf("%c", s[k]);
//					j++;
//				}
//				else
//				{
//					while (s[++k]!=' '){
//						;
//					}
//					j = 0;
//					printf(".");
//				}
//			}
//			else
//			{
//				j = 0;
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//
//}