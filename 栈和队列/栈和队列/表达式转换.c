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
//void print() {//若需要输出空格则输出 
//	static int flag = 0;//static变量存放在静态存储区，只进行一次初始化
//	if (flag) putchar(' ');
//	flag++;
//}
//
//int main() {
//	char str[31];//输入字符串
//	char stack[31];//储存运算符号的栈
//	int top = -1;//top为-1表示栈空
//	gets(str);
//	int len = strlen(str);
//	for (int i = 0; i < len; i++) {
//		if ((str[i] == '+' || str[i] == '-') && (!i || str[i - 1] == '(') || isdigit(str[i])) {
//			//数字或正负号直接输出//正负号只能出现在开头或中间的(之后 
//			print();
//			if (str[i] != '+') putchar(str[i]);//正号虽意味着之后的字符直接输出但正号本身不输出
//			while (str[i + 1] == '.' || isdigit(str[i + 1])) putchar(str[++i]);//小数点和数字输出 
//		}
//		else {//处理运算符 
//			if (str[i] == ')') {//遇到右括号则将左括号前所有运算符全部输出 
//				while (top > -1 && stack[top] != '(') {
//					print();
//					putchar(stack[top--]);
//				}
//				if (top > -1) --top;//如果栈不空，跳过左括号 
//			}
//			else {//除右括号外的其他情况 
//				if (top == -1) {
//					stack[++top] = str[i];
//					continue;
//				}
//				while (top > -1 && stack[top] != '(') {//栈顶操作符优先级高时不断输出栈顶操作符，当前优先级高则终止循环 
//					if (str[i] == '(' || ((str[i] == '*' || str[i] == '/') && (stack[top] == '+' || stack[top] == '-')))
//						break;
//					print();
//					printf("%c", stack[top--]);
//				}
//				stack[++top] = str[i];//当前操作符入栈 
//			}
//		}
//	}
//	while (top > -1) {//已处理完毕，输出栈中剩余操作符
//		print();
//		if (stack[top] != '(') putchar(stack[top--]);//除左括号外依次输出
//		else top--;//跳过左括号
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

