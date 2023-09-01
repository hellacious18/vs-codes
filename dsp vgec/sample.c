//program to create a Queue, Circular Queue, Double Ended Queue in single program.
#include <stdio.h>
#define n 5
int queue[n], front, rear;
int main()
{
    int a=1, choice;
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
int qqueue()                //simple queue function
{
    int ch=1,i=0,a=1;
    front=rear=0;
    while(a)
    {
        printf("\n\n1.Insertion \t2.Deletion \t3.Display \t4.Exit");
        printf("\nEnter the Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1: if(rear==n)                     //insertion 
                    printf("\nQueue is Full");
                else
                {
                    printf("Enter no %d:",i++);
                    scanf("%d",&queue[rear++]);
                }
                break;
        case 2: if(front==rear)                 //deletion
                    printf("Queue is Empty");
                else
                    printf("Deleted Element is %d",queue[front++]);
                break;
        case 3: if(front==rear)                 //display
                    printf("Queue is Empty");
                else
                    for(i=front; i<rear; i++)
                        printf("%d, ",queue[i]);
                break;
        case 4: a=0;                            //exit out of simple queue
                break;
        default: printf("you entered wrong choice!");
                break;
            }
        }
    return 0;
}
int c_queue()                   //circular queue function
{
    int q2=1,b,i;
    front=rear=-1;
    while(q2)
    {
        printf("\n\n1.Insertion \t2.Deletion \t3.Display \t4.Exit");
        printf("\nEnter the Choice:");
        scanf("%d",&b);
        switch(b)
        {
            case 1: printf("Enter element: ");
                    scanf("%d",&i);
                    if(front==-1 && rear==-1)   //insertion 
                    {  
                        front=0;  
                        rear=0;  
                        queue[rear]=i;  
                    }  
                    else if((rear+1)%n==front)  
                        printf("Queue is Full");   
                    else  
                    {  
                        rear=(rear+1)%n;       
                        queue[rear]=i;       
                    }  
                    break;
            case 2: if((front==-1) && (rear==-1))     //deletion
                        printf("\nQueue is Empty");       
                    else if(front==rear)  
                    {  
                        printf("\nDeleted Element is %d", queue[front]);  
                        front=-1;  
                        rear=-1;  
                    }   
                    else  
                    {  
                        printf("\nDeleted Element is %d", queue[front]);  
                        front=(front+1)%n;  
                    }  
                    break;
            case 3:  i=front;                  
                    if(front==-1 && rear==-1)  
                        printf("\n Queue is Empty");  
                    else  
                    {  
                        printf("\nQueue: ");                //display
                        while(i<=rear)  
                        {  
                            printf("%d, ", queue[i]);  
                            i=(i+1)%n;  
                        }  
                    }
                    break;
            case 4: q2=0;                    //exit out of circular queue
                    break;
            default: printf("you entered wrong choice!");
                    break;
        }
    }
    return 0;
}
int de_queue()                      //double ended queue function
{
    int q3=1,c;
    int te=0,m,i,x;
    rear=-1;   
    front=0;
    while(q3)
    {
        printf("\n\n1. Insert from Front\t2. Insert from Rear\t3. Delete from Front\t4. Delete from Rear\t5. Display\t6. Exit");
        printf("\nEnter the Choice:");
        scanf("%d",&c);
        switch(c)
        {
            case 1: if(te==n)           
                    printf("\nQueue is full");
                else
                {
                    printf("\nEnter element: ");       //insertion from front
                    scanf("%d",&m);
                    if(front==0)
                        front=n-1;
                    else
                        front=front-1;
                    queue[front]=m;
                    te=te+1;
                }
                break;
            case 2: if(te==n)
                        printf("\nQueue is Full");
                    else
                    {
                        printf("\nEnter element:");
                        scanf("%d",&m);                //insertion from rear
                        rear=(rear+1)%n;
                        queue[rear]=n;
                        te=te+1;
                    }
                break;
            case 3: if(te==0)
                        printf("\nQueue is empty");
                    else                                    
                    {                                  //deletion from front
                        printf("\nDeleted From Front End = %d",queue[front]);
                        front=(front+1)%n;
                        te=te-1;
                    }
                break;    
            case 4: if(te==0)
                        printf("\nQueue is Empty");
                    else
                    {
                        if(rear==-1)                   //deletion from rear
                            rear=n-1;
                        printf("\nDeleted From Rear End = %d",queue[rear]);
                        rear=rear-1;
                        te=te-1;
                    }
                break;
            case 5: if(te==0)
                        printf("Queue is empty");
                    else
                    {
                        x=front;
                        for(i=1; i<=te; i++)
                        {                             //display elements
                            printf("%d ",queue[x]);
                            x=(x+1)%n;
                        }
                    }
                break;
            case 6: q3=0;                      //exit out of double ended queue
                break;
            default: printf("you entered wrong choice!");
        }
    }
    return 0;
}