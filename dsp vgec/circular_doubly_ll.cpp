#include<iostream>
using namespace std;
struct node2
{
    public:
    int data2;
    node2 *next;
    node2 *prev;
    node2(int val)
    {
        data2=val;
        next=NULL;
        prev=NULL;
    }
};
int insert_at_end_cdll(node2* &head, int val)   //head by reference to modify 
{
    node2 *n=new node2(val);
    if(head==NULL)
    {
        n->next=n;
        n->prev=n;
        head=n;
        return 0;
    }
    node2*temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
    n->next=head;
}
int insert_at_front_cdll(node2*&head, int val)    //func to insert node2 at front
{
    node2 *n=new node2(val);
    if(head==NULL)
    {
        n->next=n;
        n->prev=n;
        head=n;
        return 0;
    }
    node2*temp=head;
    while(temp->next!=head)
        temp=temp->next;
    temp->next=n;
    n->next=head;
    head->prev=n->next;
    head=n;
}
int insert_data_cdll(node2*&head, int val, int pos)
{
    node2*temp=head;
    node2*n=new node2(val);
    for(int i=2;i<pos;i++)
        if(temp->next!=NULL)
            temp=temp->next;
    n->next=temp->next;
    temp->next=n;
    n->prev=temp->prev;
}
int delete_at_end_cdll(node2*head)    //func to delete node2 at end
{
    node2 *temp=head;
    while(temp->next->next!=head)
    {
        temp=temp->next;
    }
    node2 *del=temp->next;
    temp->next=temp->next->next;
    delete del,temp;
}
int delete_at_front_cdll(node2*&head)     //func to delete node2 at front
{
    node2 *temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    node2* todel=head;
    temp->next=head->next;
    head=head->next;
    delete todel;
}
int delete_data_cdll(node2*&head, int val)    //func to delete specified data2
{
    node2 *temp=head;
    while(temp->data2!=val)
    {
        temp=temp->next;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    delete temp;
}
int display_cdll(node2 *head)        //func. to display linked list
{
    node2 *temp=head;
    do
    {
        cout<<temp->data2<<" <-> ";
        temp=temp->next;
    }while(temp!=head);
}
int circular_coubly_linked_list()
{
    node2 *head=NULL;
    int choice,exit=1,data2,pos;
    while(exit==1)
    {
        cout<<"\nINSERTION\t\t1.at End\t2.at Front\t3.at given position\nDELETION\t\t4.at End\t5.at Front\t6.at given position\n\t\t\t7.DISPLAY\t8.EXIT";
        cout<<"\nenter operation:";
        cin>>choice;
        switch(choice)
        {
            case 1: cout<<"enter data2: ";
                    cin>>data2;    
                    insert_at_end_cdll(head,data2);
                    break;
            case 2: cout<<"enter data2: ";
                    cin>>data2; 
                    insert_at_front_cdll(head,data2);
                    break;
            case 3: cout<<"enter data2: ";
                    cin>>data2;
                    cout<<"enter position: ";
                    cin>>pos; 
                    insert_data_cdll(head,data2,pos);
                    break;
            case 4: delete_at_end_cdll(head);
                    break;
            case 5: delete_at_front_cdll(head);
                    break;
            case 6: cout<<"enter data2 to be deleted: ";
                    cin>>data2; 
                    delete_data_cdll(head,data2);
                    break;
            case 7: display_cdll(head);
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
    circular_coubly_linked_list();
    return 0;
}