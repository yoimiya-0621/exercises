//#include <stdio.h>
//typedef struct S* ptr;
//struct S
//{
//	char data[20];
//	char top;
//}a;
//ptr p = &a;
//int i = 0;
//int k = 1;
//void push(char ch,ptr p)
//{
//	p->data[k++] = ch;
//	p->top = ch;
//	return;
//}
//void pop(ptr p)
//{
//	if(p->top!='('&&p->top!=')')
//		printf("%c ", p->top);
//	k--;
//	p->data[k] = 0;
//	p->top = p->data[--k];
//	k++;
//	return;
//}
//void is(char ch, ptr p)
//{
//	if (((p->top == '+' || p->top == '-') && (ch == '*' || ch == '/'))||p->top==0|| p->top == '(')
//		;
//	else
//	{
//		pop(p);
//		is(p->top, p);
//	}
//	return;
//}
//void POP(ptr p)
//{
//	 do{
//		p->top = p->data[--k];
//		if (p->top == 0)
//			return;
//		if(k==1)
//			printf("%c", p->top);
//		else
//			printf("%c ", p->top);
//		
//	}while (p->top);
//}
//int main()
//{
//	char s[21];
//	gets(s);
//	while (s[i] != '\0')
//	{
//		if (s[i] >= '0' && s[i] <= '9')
//			printf("%c ", s[i]);
//		else
//		{
//			if (s[i] == '(')
//				push(s[i], p);
//			else if (s[i] == ')')
//			{
//				pop(p);
//				is(p->top, p);
//				p->data[k] = 0;
//				p->top = p->data[--k];
//				p->data[k] = 0;
//				p->top = p->data[--k];
//				k++;
//				is(p->top, p);
//			}
//			else
//			{
//				is(s[i], p);
//				push(s[i], p);
//			}
//		}
//		i++;
//	}
//	POP(p);
//	return 0;
//}
//#include <stdio.h>
////#include <stdlib.h> 
//#include <string.h>
////#include <ctype.h>
//
//void print() {//����Ҫ����ո������ 
//	static int flag = 0;//static��������ھ�̬�洢����ֻ����һ�γ�ʼ��
//	if (flag) putchar(' ');
//	flag++;
//}
//
//int main() {
//	char str[31];//�����ַ���
//	char stack[31];//����������ŵ�ջ
//	int top = -1;//topΪ-1��ʾջ��
//	gets(str);
//	int len = strlen(str);
//	for (int i = 0; i < len; i++) {
//		if ((str[i] == '+' || str[i] == '-') && (!i || str[i - 1] == '(') || isdigit(str[i])) {
//			//���ֻ�������ֱ�����//������ֻ�ܳ����ڿ�ͷ���м��(֮�� 
//			print();
//			if (str[i] != '+') putchar(str[i]);//��������ζ��֮����ַ�ֱ����������ű������
//			while (str[i + 1] == '.' || isdigit(str[i + 1])) putchar(str[++i]);//С������������ 
//		}
//		else {//��������� 
//			if (str[i] == ')') {//������������������ǰ���������ȫ����� 
//				while (top > -1 && stack[top] != '(') {
//					print();
//					putchar(stack[top--]);
//				}
//				if (top > -1) --top;//���ջ���գ����������� 
//			}
//			else {//������������������ 
//				if (top == -1) {
//					stack[++top] = str[i];
//					continue;
//				}
//				while (top > -1 && stack[top] != '(') {//ջ�����������ȼ���ʱ�������ջ������������ǰ���ȼ�������ֹѭ�� 
//					if (str[i] == '(' || ((str[i] == '*' || str[i] == '/') && (stack[top] == '+' || stack[top] == '-')))
//						break;
//					print();
//					printf("%c", stack[top--]);
//				}
//				stack[++top] = str[i];//��ǰ��������ջ 
//			}
//		}
//	}
//	while (top > -1) {//�Ѵ�����ϣ����ջ��ʣ�������
//		print();
//		if (stack[top] != '(') putchar(stack[top--]);//�����������������
//		else top--;//����������
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char s[25];
//	char stack[25];
//	gets(s);
//	int len = strlen(s);
//	int top = -1;
//	for (int i = 0; i < len; i++)
//	{
//		static int j = 0;
//		if (isdigit(s[i])||((s[i]=='+'||s[i]=='-')&&(i==0||s[i-1]=='(')))
//		{
//			if (j == 0 && isdigit(s[i]))
//			{
//				j++;
//				printf("%c", s[i]);
//			}
//			else if (s[i] == '+' || s[i] == '-')
//			{
//				if (i == 0)
//					printf("%c", s[i]);
//				else
//					printf(" ");
//			}
//			else
//				printf(" %c", s[i]);
//			while (s[i+1] == '.' || isdigit(s[i + 1]))
//			{
//				printf("%c", s[++i]);
//			}
//		}
//		else if (s[i] == '(')
//		{
//			stack[++top] = s[i];
//		}
//		else if (s[i] == ')')
//		{
//			while (stack[top] != '('&&top>-1)
//			{
//				printf(" %c", stack[top--]);
//			}
//			if (top > -1)
//				top--;
//		}
//		else
//		{
//			if (top == -1)
//			{
//				stack[++top] = s[i];
//				continue;
//			}
//			while (top>-1&&stack[top]!='(') {
//				if (stack[top] == '(' || (s[i] == '*' || s[i] == '/') && (stack[top] == '+' || stack[top] == '-'))
//				{
//					break;
//				}
//				else
//				{
//					printf(" %c", stack[top--]);
//				}
//			}
//			stack[++top] = s[i];
//		}
//	}
//	while (top > -1)
//	{
//		printf(" %c", stack[top--]);
//	}
//	return 0;
//}

