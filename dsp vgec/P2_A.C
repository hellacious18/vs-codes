//program to create a stack & perform operations.

#include<stdio.h>
#include<conio.h>
#define size 5

int main() {
	int item, choice, i, n;
	int arr_stack[size];
	int top=0;
	int exit=0;
	clrscr();
	do
	{
		printf("\n1.Push\n2.Pop\n3.Peep\n4.Change\n5.Display\n6.Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:	if(top==size)
					printf("\nstack is full");
				else
				{
					printf("\nenter the value to be pushed: ");
					scanf("%d",&item);
					printf("\nposition:%d, pushed value: %d",top,item);
					arr_stack[top++] = item;
				}
				break;
			case 2:	if (top==0)
					printf("\nstack is empty");
				else
				{
					--top;
					printf("\nposition:%d, popped value:%d",top,arr_stack[top]);
				}
				break;
			case 3: printf("enter position to search: ");
				scanf("%d",&n);
				if(top-n+1<=0)
					printf("\nstack is empty.\n");
				else
					printf("\nelement is: %d",arr_stack[top-n]);
				break;
			case 4: printf("enter position to change value: ");
				scanf("%d",&n);
				if(top-n+1<=0)
					printf("\nstack is empty.\n");
				else
					printf("enter value at position %d: ",n);
				scanf("%d",&item);
					arr_stack[top-n]=item;
				break;
			case 5: printf("\nstack size : %d", top);
				for (i=(top-1);i>= 0;i--)
					printf("\nposition :%d , value :%d",i,arr_stack[i]);
				break;
			default:exit = 1;
				break;
	}
    } while (exit!=1);
    return 0;
}