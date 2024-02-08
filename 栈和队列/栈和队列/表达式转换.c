#include <stdio.h>
typedef struct S* ptr;
struct S
{
	char data[20];
	char top;
}a;
ptr p = &a;
int i = 0;
int k = 1;
void push(char ch,ptr p)
{
	p->data[k++] = ch;
	p->top = ch;
	return;
}
void pop(ptr p)
{
	if(p->top!='('&&p->top!=')')
		printf("%c ", p->top);
	k--;
	p->data[k] = 0;
	p->top = p->data[--k];
	k++;
	return;
}
void is(char ch, ptr p)
{
	if (((p->top == '+' || p->top == '-') && (ch == '*' || ch == '/'))||p->top==0|| p->top == '(')
		;
	else
	{
		pop(p);
		is(p->top, p);
	}
	return;
}
void POP(ptr p)
{
	 do{
		p->top = p->data[--k];
		if (p->top == 0)
			return;
		if(k==1)
			printf("%c", p->top);
		else
			printf("%c ", p->top);
		
	}while (p->top);
}
int main()
{
	char s[21];
	gets(s);
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
			printf("%c ", s[i]);
		else
		{
			if (s[i] == '(')
				push(s[i], p);
			else if (s[i] == ')')
			{
				pop(p);
				is(p->top, p);
				p->data[k] = 0;
				p->top = p->data[--k];
				p->data[k] = 0;
				p->top = p->data[--k];
				k++;
				is(p->top, p);
			}
			else
			{
				is(s[i], p);
				push(s[i], p);
			}
		}
		i++;
	}
	POP(p);
	return 0;
}