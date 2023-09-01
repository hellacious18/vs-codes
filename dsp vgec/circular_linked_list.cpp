//code 1 for circular linked list
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
int insert_at_end_cll(node* &head2, int val)   //head2 by reference to modify 
{
    node *n=new node(val);
    if(head2==NULL)
    {
        n->next=n;
        head2=n;
        return 0;
    }
    node*temp=head2;
    while(temp->next!=head2)
        temp=temp->next;
    temp->next=n;
    n->next=head2;
}
int insert_at_front_cll(node*&head2, int val)    //func to insert node at front
{
    node *n=new node(val);
    if(head2==NULL)
    {
        n->next=n;
        head2=n;
        return 0;
    }
    node*temp=head2;
    while(temp->next!=head2)
        temp=temp->next;
    temp->next=n;
    n->next=head2;
    head2=n;
}
int insert_data_cll(node*&head2, int val, int pos1)       //SAME func for simple linked list
{
    node*temp=head2;
    node*n=new node(val);
    for(int i=2;i<pos1;i++)
        if(temp->next!=NULL)
            temp=temp->next;
    n->next=temp->next;
    temp->next=n;
}
int delete_at_end_cll(node*head2)    //func to delete node at end
{
    node *temp=head2;
    while(temp->next->next!=head2)
    {
        temp=temp->next;
    }
    node *del=temp->next;
    temp->next=temp->next->next;
    delete del,temp;
}
int delete_at_front_cll(node*&head2)     //func to delete node at front
{
    node *temp=head2;
    while(temp->next!=head2)
    {
        temp=temp->next;
    }
    node* todel=head2;
    temp->next=head2->next;
    head2=head2->next;
    delete todel;
}
int delete_data_cll(node*&head2, int val)    //SAMEfunc to delete specified data
{
    node *temp=head2;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node *del=temp->next;
    temp->next=temp->next->next;
    delete del,temp;
}
int display_cll(node *head2)        //func. to display_cll linked list
{
    node *temp=head2;
    do
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }while(temp!=head2);
}
int circular_linked_list()
{
    node *head2=NULL;
    int choice,exit=1,data,pos1;
    while(exit==1)
    {
        cout<<"\nINSERTION\t\t1.at End\t2.at Front\t3.at given position\nDELETION\t\t4.at End\t5.at Front\t6.at given position\n\t\t\t7.DISPLAY\t8.EXIT";
        cout<<"\nenter operation:";
        cin>>choice;
        switch(choice)
        {
            case 1: cout<<"enter data: ";
                    cin>>data;    
                    insert_at_end_cll(head2,data);
                    break;
            case 2: cout<<"enter data: ";
                    cin>>data; 
                    insert_at_front_cll(head2,data);
                    break;
            case 3: cout<<"enter data: ";
                    cin>>data;
                    cout<<"enter position: ";
                    cin>>pos1; 
                    insert_data_cll(head2,data,pos1);
                    break;
            case 4: delete_at_end_cll(head2);
                    break;
            case 5: delete_at_front_cll(head2);
                    break;
            case 6: cout<<"enter data to be deleted: ";
                    cin>>data; 
                    delete_data_cll(head2,data);
                    break;
            case 7: display_cll(head2);
                    break;
            case 8: exit=0;
                    break;
            default:cout<<"\nenter valid choice!!";
                    break;
        }
    }
}
int main()
{
    circular_linked_list();
    return 0;
}