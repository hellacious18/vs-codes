#include<iostream>
using namespace std;
struct node
{
    public:
    int data;
    node *next; 
    node(int val)       //para constructor
    {
        data=val;
        next=NULL;
    }
};
int insert_at_end_ll(node* &head, int val)   //head by reference to modify 
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
}
int insert_at_front_ll(node*&head, int val)    //func to insert node at front
{
    node *n=new node(val);
    if(head==NULL)
    {
        head=n;
        return 0;
    }
    n->next=head;
    head=n;
}
int insert_data_ll(node*&head, int val, int pos)
{
    node*temp=head;
    node*n=new node(val);
    for(int i=2;i<pos;i++)
        if(temp->next!=NULL)
            temp=temp->next;
    n->next=temp->next;
    temp->next=n;
}
int delete_at_end_ll(node*head)    //func to delete node at end
{
    node *temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=NULL;   
}
int delete_at_front_ll(node*&head)     //func to delete node at front
{
    node *temp=head;
    head=temp->next;
    temp->next=NULL;
    delete temp;
}
int delete_data_ll(node*&head, int val)    //func to delete specified data
{
    node *temp=head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node *del=temp->next;
    temp->next=temp->next->next;
    delete del,temp;
}
int display_ll(node *head)        //func. to display_ll linked list
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int copy_ll(node*&head)
{
    cout<<"original: ";
    display_ll(head);
    if(head==NULL) 
        return 0;
    node*temp;
    temp->data=head->data;
    temp->next=head->next;
    cout<<"copied: ";
    display_ll(temp);
    return 0;
}
int main()
{
    node *head=NULL;
    int choice,exit=1,data,pos;
    while(exit==1)
    {
        cout<<"\nINSERTION\t\t1.at End\t2.at Front\t3.at given position\nDELETION\t\t4.at End\t5.at Front\t6.at given position\n\t\t\t7.COPY\t\t8.DISPLAY\t9.EXIT";
        cout<<"\nenter operation:";
        cin>>choice;
        switch(choice)
        {
            case 1: cout<<"enter data: ";
                    cin>>data;    
                    insert_at_end_ll(head,data);
                    break;
            case 2: cout<<"enter data: ";
                    cin>>data; 
                    insert_at_front_ll(head,data);
                    break;
            case 3: cout<<"enter data: ";
                    cin>>data;
                    cout<<"enter position: ";
                    cin>>pos; 
                    insert_data_ll(head,data,pos);
                    break;
            case 4: delete_at_end_ll(head);
                    break;
            case 5: delete_at_front_ll(head);
                    break;
            case 6: cout<<"enter data to be deleted: ";
                    cin>>data; 
                    delete_data_ll(head,data);
                    break;
            case 7: copy_ll(head);
                    break;
            case 8: display_ll(head);
                    break;
            case 9: exit=0;
                    break;
            default:cout<<"\nenter valid choice!!";
                    break;
        }
    }
    return 0;
}