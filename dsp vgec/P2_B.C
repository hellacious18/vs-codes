//program to reverse string using stack

#include <stdio.h>
#include <string.h>
#define max 50
int top,stack[max];
void push(char x)
{
	if(top==max-1)
		printf("stack overflow");
	else
		stack[++top]=x;
}
void pop()
{
      printf("%c",stack[top--]);
}
int main()
{
	char str[50];
	int len,i;
	clrscr();
	printf("enter string: ");
	scanf("%s",str);
	len=strlen(str);
	printf("\nreversed string: ");
	for(i=0;i<len;i++)
		push(str[i]);
	for(i=0;i<len;i++)
		pop();
	getch();
	return 0;
}