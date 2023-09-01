
#include <stdio.h>
#define n 5
int queue[n];
int front=-1;  
int rear=-1;  
int main()
{
    int a=1,choice;
    int qqueue();
    int c_queue();
    int de_queue();
    while(a)
    {
        printf("\n\n1. QUEUE\t2. CIRCULAR QUEUE\t3. DE QUEUE\t4. EXIT");
        printf("\nEnter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: qqueue();
                break;
            case 2: c_queue();
                break;
            case 3: de_queue();
                break;
            case 4: a=0;
                break;
            default: printf("you entered wrong choice!");
        }
    }
    return 0;
}
int qqueue()
{   
    printf("\nQUEUE");
    int ch=1,a=1;
    while(a)
    {
        printf("\n\n1.Insertion \t2.Deletion \t3.Display \t4.Exit");
        printf("\nEnter the Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1: 
                break;
        case 2: 
                break;
        case 3: 
                break;
        case 4: a=0;
                break;
        default: printf("you entered wrong choice!");
                break;
            }
        }
    return 0;
}
int c_queue()
{
    printf("\nCIRCULAR QUEUE");
    int i;
    int q2=1,b;
    while(q2)
    {
        printf("\n\n1.Insertion \t2.Deletion \t3.Display \t4.Exit");
        printf("\nEnter the Choice:");
        scanf("%d",&b);
        switch(b)
        {
            case 1: printf("insert");
            scanf("%d",&i);
            if(front==-1 && rear==-1)   // condition to check queue is empty  
    {  
        front=0;  
        rear=0;  
        queue[rear]=i;  
    }  
    else if((rear+1)%n==front)  // condition to check queue is full  
        printf("Queue is overflow..");   
    else  
    {  
        rear=(rear+1)%n;       // rear is incremented  
        queue[rear]=i;     // assigning a value to the queue at the rear position.  
    }  
                break;
            case 2: printf("delete");
            if((front==-1) && (rear==-1))  // condition to check queue is empty  
    {  
        printf("\nQueue is underflow..");  
    }  
 else if(front==rear)  
{  
   printf("\nThe dequeued i is %d", queue[front]);  
   front=-1;  
   rear=-1;  
}   
else  
{  
    printf("\nThe dequeued i is %d", queue[front]);  
   front=(front+1)%n;  
}  
                break;
            case 3: printf("display");
            int i=front;  
    if(front==-1 && rear==-1)  
    {  
        printf("\n Queue is empty..");  
    }  
    else  
    {  
        printf("\nis in a Queue are :");  
        while(i<=rear)  
        {  
            printf("%d,", queue[i]);  
            i=(i+1)%n;  
        }  
    }
                break;
            case 4: q2=0;
                break;
            default: printf("you entered wrong choice!");
        }
    }
    return 0;
}
int de_queue()
{
    printf("\nDOUBLE ENDED QUEUE");
    int queue[n]; 
    int q3=1,c;
    while(q3)
    {
        printf("\n\n1. Insert from Front\t2. Insert from Rear\t3. Delete from Front\t4. Delete from Rear\t5. Display\t6. Exit");
        printf("\nEnter the Choice:");
        scanf("%d",&c);
        switch(c)
        {
            case 1: printf("insert from front");
                break;
            case 2: printf("insert from rear");
                break;
            case 3: printf("delete from front");
                break;    
            case 4: printf("delete from rear");
                break;
            case 5: printf("display");
                break;
            case 6: q3=0;
                break;
            default: printf("you entered wrong choice");
        }
    }
    return 0;
}