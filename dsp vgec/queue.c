#include<stdio.h>
#define n 5
int main()
{
    int queue[n],ch=1,front=0,rear=0,i=0,a=1;
    printf("\n1.Insertion \n2.Deletion \n3.Display \n4.Exit");
    while(a)
    {
        printf("\nEnter the Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            if(rear==n)
                printf("\n Queue is Full");
            else
            {
                printf("\n Enter no %d:",i++);
                scanf("%d",&queue[rear++]);
            }
            break;
        case 2:
            if(front==rear)
            {
                printf("\n Queue is empty");
            }
            else
            {
                printf("\n Deleted Element is %d",queue[front++]);
            }
            break;
        case 3:
            printf("\nQueue Elements are:\n ");
            if(front==rear)
                printf("\n Queue is Empty");
            else
                for(i=front; i<rear; i++)
                {
                    printf("%d",queue[i]);
                    printf("\n");
                }
                break;
        case 4: a=0;
                break;
        default:    printf("Wrong Choice: please see the options");
                break;
            }
        }
    return 0;
}

