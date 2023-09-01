#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define n 5
int queue[n];
int main()
{
    int te=0,m,i,x,ch;
    int rear=-1;   int front=0;

    for(;;)		// An infinite loop
    {
        printf("\n1. Add Rear\t2. Delete Rear\t3. Add Front\t4. Delete Front\t5. Display\t6. Exit\t");
        printf("\nEnter Choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                if(te==n)
                    printf("Queue is Full");
                else
                {
                    printf("Enter element:");
                    scanf("%d",&m);
                    rear=(rear+1)%n;
                    queue[rear]=n;
                    te=te+1;
                }
                break;

            case 2: if(te==0)
                    printf("Queue is Empty");
                else
                {
                    if(rear==-1)
                    {
                        rear=n-1;
                    }
                    printf("Number Deleted From Rear End = %d",queue[rear]);
                    rear=rear-1;
                    te=te-1;
                }
                break;
            case 3:
                if(te==n)
                    printf("Queue is full");
                else
                {
                    printf("Enter element: ");
                    scanf("%d",&m);
                    if(front==0)
                        front=n-1;
                    else
                        front=front-1;
                    queue[front]=m;
                    te=te+1;
                }
                break;
            case 4:
                if(te==0)
                    printf("Queue is empty");
                else
                {
                    printf("Number Deleted From Front End = %d",queue[front]);
                    front=(front+1)%n;
                    te=te-1;
                }
                break;
            case 5:
                if(te==0)
                    printf("Queue is empty");
                else
                {
                    x=front;
                    for(i=1; i<=te; i++)
                    {
                        printf("%d ",queue[x]);
                        x=(x+1)%n;
                    }
                    
                }
                break;

            case 6:
                exit(0);
                break;

            default:
                printf("Wrong Choice");
        
        }
    }
    return 0;
}