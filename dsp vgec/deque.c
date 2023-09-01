#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define size 5

int main()
{
    int arr[size],R=-1,F=0,te=0,ch,n,i,x;

    for(;;)		// An infinite loop
    {
        printf("\n\n1. Insert from Front\t2. Insert from Rear\t3. Delete from Front\t4. Delete from Rear\t5. Display\t6. Exit");
        printf("\nEnter the Choice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                if(te==size)
                {
                    printf("Queue is full");
                    getch();	// pause the loop to see the message
                }
                else
                {
                    printf("Enter a number ");
                    scanf("%d",&n);
                    R=(R+1)%size;
                    arr[R]=n;
                    te=te+1;
                }
                break;

            case 4:
                if(te==0)
                {
                    printf("Queue is empty");
                    getch();	// pause the loop to see the message
                }
                else
                {
                    if(R==-1)
                    {
                        R=size-1;
                    }
                    printf("Number Deleted From Rear End = %d",arr[R]);
                    R=R-1;
                    te=te-1;
                    getch();	// pause the loop to see the number
                }
                break;

            case 2:
                if(te==size)
                {
                    printf("Queue is full");
                    getch();	// pause the loop to see the message
                }
                else
                {
                    printf("Enter a number ");
                    scanf("%d",&n);
                    if(F==0)
                    {
                        F=size-1;
                    }
                    else
                    {
                        F=F-1;
                    }
                    arr[F]=n;
                    te=te+1;
                }
                break;

            case 3:
                if(te==0)
                {
                    printf("Queue is empty");
                    getch();	// pause the loop to see the message
                }
                else
                {
                    printf("Number Deleted From Front End = %d",arr[F]);
                    F=(F+1)%size;
                    te=te-1;
                    getch();	// pause the loop to see the number
                }
                break;

            case 5:
                if(te==0)
                {
                    printf("Queue is empty");
                    getch();	// pause the loop to see the message
                }
                else
                {
                    x=F;
                    for(i=1; i<=te; i++)
                    {
                        printf("%d ",arr[x]);
                        x=(x+1)%size;
                    }
                    getch();	// pause the loop to see the numbers
                }
                break;

            case 6:
                exit(0);
                break;

            default:
                printf("Wrong Choice");
                getch();	// pause the loop to see the message
        }
    }
    return 0;
}