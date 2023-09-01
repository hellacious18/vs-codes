#include<iostream>
using namespace std;
struct node
{
    public:
    int data;
    node *next; 
    node *prev;
    node(int val)       //para constructor
    {
        data=val;
        next=NULL;
        prev=NULL;
    }
};

int push_s(node* &head, int val)   //head by reference to modify 
{
    node *n=new node(val);
    if(head==NULL)
    {
        head=n;
        return 0;
    }
    node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}
int pop_s(node*head)    //func to delete node at end
{
    node *temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next->prev=NULL;
    temp->next=NULL;
}
int change(node*&head, int val, int pos)
{
    node*temp=head;
    node*n=new node(val);
    for(int i=2;i<pos;i++)
        if(temp->next!=NULL)
            temp=temp->next;
    n->next=temp->next->next;
    temp->next=n;
    n->prev=temp->next;
}
int display(node *head)        //func. to display_dll linked list
{
    node *temp=head;
    cout<<"NULL <-> ";
    while(temp!=NULL)
    {
        cout<<temp->data<<" <-> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int stack()
{
    node *head=NULL;
    int choice,exit=1,data,pos;
    while(exit==1)
    {
        cout<<"\n1. PUSH\t2. POP\t 3. CHANGE\t4.DISPLAY\t5.EXIT";
        cout<<"\nenter operation:";
        cin>>choice;
        switch(choice)
        {
            case 1: cout<<"enter data: ";
                    cin>>data;    
                    push_s(head,data);
                    break;
            case 2: pop_s(head);
                    break;
            case 3: cout<<"enter data: ";
                    cin>>data;
                    cout<<"enter position: ";
                    cin>>pos;
                    change(head,data,pos);
                    break;
            case 4: display(head);
                    break;
            case 5: exit=0;
                    break;
            default:cout<<"\nenter valid choice!!";
                    break;
        }
    }
}
int push_q(node*&head, int val)    //func to insert node at front
{
    node *n=new node(val);
    if(head==NULL)
    {
        head=n;
        return 0;
    }
    n->next=head;
    head->prev=n->next;
    head=n;
}
int pop_q(node*head)    //func to delete node at end
{
    node *temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next->prev=NULL;
    temp->next=NULL;
}
int queue()
{
    node *head=NULL;
    int choice,exit=1,data,pos;
    while(exit==1)
    {
        cout<<"\n1. INSERT\t2. DELETE\t 3. UPDATE\t4.DISPLAY\t5.EXIT";
        cout<<"\nenter operation:";
        cin>>choice;
        switch(choice)
        {
            case 1: cout<<"enter data: ";
                    cin>>data;    
                    push_q(head,data);
                    break;
            case 2: pop_q(head);
                    break;
            case 3: cout<<"enter data: ";
                    cin>>data;
                    cout<<"enter position: ";
                    cin>>pos;
                    change(head,data,pos);
                    break;
            case 4: display(head);
                    break;
            case 5: exit=0;
                    break;
            default:cout<<"\nenter valid choice!!";
                    break;
        }
    }
}
int main()
{
    int list_choice, exit=1;
    while(exit==1)
    {
        cout<<"\n\n1. STACK\t2. QUEUE\t3. exit";
        cout<<"\n\nenter your choice: ";
        cin>>list_choice;
        switch(list_choice)
        {
            case 1:stack();
            break;
            case 2:queue();
            break;
            case 3:exit=0;
            break;
            default:cout<<"you entered wrong value!!";
        }
    }
    return 0;
}