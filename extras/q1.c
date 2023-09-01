#include <stdio.h>
#define n 5
int main()
{
    int a=0,choice,front,rear,i,j,x=n;
    int queue();
    int c_queue();
    int de_queue();
    while(a==0)
    {
        printf("\n\nenter your choice:\n1. QUEUE\n2. CIRCULAR QUEUE\n3. DOUBLE ENDED QUEUE\n4. EXIT\n\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: queue();
                break;
            case 2: c_queue();
                break;
            case 3: de_queue();
                break;
            case 4: a=1;
                break;
            default: printf("you entered wrong choice!");
        }
    }
    return 0;
}
int queue()
{
    int queue[n],ch=1,front=0,rear=0,i,j=1,x=n;
    printf("\nqueue");
    printf("\n1.Insertion \n2.Deletion \n3.Display \n4.Exit");
    while(ch)
    {
        printf("\nEnter the Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            if(rear==x)
                printf("\n Queue is Full");
            else
            {
                printf("\n Enter no %d:",j++);
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
                x++;
            }
            break;
        case 3:
            printf("\nQueue Elements are:\n ");
            if(front==rear)
                printf("\n Queue is Empty");
            else
            {
                for(i=front; i<rear; i++)
                {
                    printf("%d",queue[i]);
                    printf("\n");
                }
                break;
            case 4:
                exit(0);
            default:
                printf("Wrong Choice: please see the options");
            }
        }
    }
    return 0;
}
int c_queue()
{
    printf("\ncircular queue");
    int queue[n];
    int q2=0,b;
    while(q2==0)
    {
        printf("\n\nenter your choice:\n1. INSERT\n2. DELETE\n3. DISPLAY\n4. EXIT\n\n");
        scanf("%d",&b);
        switch(b)
        {
            case 1: printf("insert");
                break;
            case 2: printf("delete");
                break;
            case 3: printf("display");
                break;
            case 4: q2=1;
                break;
            default: printf("you entered wrong choice!");
        }
    }
    return 0;
}
int de_queue()
{
    printf("\ndouble ended queue");
    int queue[n];
    int q3=0,c;
    while(q3==0)
    {
        printf("\n\nenter your choice:\n1. INSERT\n2. DELETE\n3. DISPLAY\n4. EXIT\n\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1: printf("insert");
                break;
            case 2: printf("delete");
                break;
            case 3: printf("display");
                break;
            case 4: q3=1;
                break;
            default: printf("you entered wrong choice");
        }
    }
    return 0;
}