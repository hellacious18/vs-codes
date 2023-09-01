// C program  to check the expression for valid usage of parenthesis.
#include<stdio.h>
int main()
{
	char expression[50];
	int x=0,i=0;
	clrscr();
	printf("\nEnter an expression: ");
	scanf("%s", expression);
	while(expression[i]!= '\0')
	{
		if(expression[i]=='(')
			x++;
		else if(expression[i]==')')
		{
			x--;
			if(x<0)
			break;
		}
		i++;
	}
	if(x==0)
		printf("\nExpression is balanced");
	else
		printf("\nExpression is unbalanced\n\n");
	getch();
	return 0;
}