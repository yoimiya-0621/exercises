//#define  _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//#include <cstring>
//#include <cctype>
//int main()
//{
//	int p1, p2, p3;
//	scanf("%d %d %d", &p1, &p2, &p3);
//	char s[100];
//	scanf("%s", s);
//	int len = strlen(s);
//	for (int i = 0; i< len; i++)
//	{
//		if (s[i + 1] != '-'||
//			!(
//				(isdigit(s[i])&&isdigit(s[i+2]))	||	(s[i]>='a'&&s[i]<='z'&&s[i+2]>='a'&&s[i+2]<='z')	
//			)		
//		)
//			printf("%c", s[i]);
//		else
//		{
//			int j;
//			for (j = i; j < len; j++)
//				if (s[j - 1] == '-')
//					break;
//			if (s[i] >= s[j])
//			{
//				for (; i <= j; i++)
//					printf("%c", s[i]);
//			}
//			else
//			{
//				if (isdigit(s[i]))
//				{
//					printf("%c", s[i]++);
//					if (p3 == 1)
//					{
//						for (;s[i] < s[j]; s[i]++)
//						{
//							for (int k = 0; k < p2; k++)
//							{
//								if (p1 != 3)
//									printf("%c", s[i]);
//								else
//									printf("*");
//							}
//						}
//					}
//					else
//					{
//						char m = s[j];
//						for (; s[j]>s[i]; s[j]--)
//						{
//							for (int k = 0; k < p2; k++)
//							{
//								if (p1 != 3)
//									printf("%c", s[j]);
//								else
//									printf("*");
//							}
//						}
//						s[i] = m;
//					}
//					printf("%c", s[i]);
//				}
//				else
//				{
//					printf("%c", s[i]);
//					if (p3 == 1)
//					{
//						s[i]++;
//						for (; s[i] < s[j]; s[i]++)
//						{
//							for (int k = 0; k < p2; k++)
//							{
//								if (p1 == 1)
//									printf("%c", s[i]);
//								else if(p1 == 2)
//									printf("%c", s[i]-32);
//								else
//									printf("*");
//							}
//						}
//					}
//					else
//					{
//						char m = s[j];
//						s[j]--;
//						for (; s[j] > s[i]; s[j]--)
//						{
//							for (int k = 0; k < p2; k++)
//							{
//								if (p1 == 1)
//									printf("%c", s[j]);
//								else if (p1 == 2)
//									printf("%c", s[j]-32);
//								else
//									printf("*");
//							}
//						}
//						s[i] = m;
//					}
//					printf("%c", s[i]);
//				}
//			}
//			i = j;
//		}
//	}
//	return 0;
//}