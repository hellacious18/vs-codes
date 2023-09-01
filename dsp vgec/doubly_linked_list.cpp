#include<iostream>
using namespace std;
struct node2
{
    public:
    int data;
    node2 *next; 
    node2 *prev;
    node2(int val)       //para constructor
    {
        data=val;
        next=NULL;
        prev=NULL;
    }
};
int insert_at_end_dll(node2* &head, int val)   //head by reference to modify 
{
    node2 *n=new node2(val);
    if(head==NULL)
    {
        head=n;
        return 0;
    }
    node2*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}
int insert_at_front_dll(node2*&head, int val)    //func to insert node2 at front
{
    node2 *n=new node2(val);
    if(head==NULL)
    {
        head=n;
        return 0;
    }
    n->next=head;
    head->prev=n->next;
    head=n;
}
int insert_data_dll(node2*&head, int val, int pos)
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
int delete_at_end_dll(node2*head)    //func to delete node2 at end
{
    node2 *temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next->prev=NULL;
    temp->next=NULL;
}
int delete_at_front_dll(node2*&head)     //func to delete node2 at front
{
    node2 *temp=head;
    head=temp->next;
    temp->next=NULL;
    head->prev=NULL;
}
int delete_data_dll(node2*&head, int val)    //func to delete specified data
{
    node2 *temp=head;
    while(temp->data!=val)
    {
        temp=temp->next;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    delete temp;
}
int replace(node2*&head, int val, int pos)
{
    node2*temp=head;
    node2*n=new node2(val);
    for(int i=2;i<pos;i++)
        if(temp->next!=NULL)
            temp=temp->next;
    n->next=temp->next->next;
    temp->next=n;
    n->prev=temp->next;
    delete temp;
}
int display_dll(node2 *head)        //func. to display_dll linked list
{
    node2 *temp=head;
    cout<<"NULL <-> ";
    while(temp!=NULL)
    {
        cout<<temp->data<<" <-> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int doubly_linked_list()
{
    node2 *head=NULL;
    int choice,exit=1,data,pos;
    while(exit==1)
    {
        cout<<"\nINSERTION\t\t1.at End\t2.at Front\t3.at given position\nDELETION\t\t4.at End\t5.at Front\t6.at given position\n\t\t\t7.REPLACE\t8.DISPLAY\t9.EXIT";
        cout<<"\nenter operation:";
        cin>>choice;
        switch(choice)
        {
            case 1: cout<<"enter data: ";
                    cin>>data;    
                    insert_at_end_dll(head,data);
                    break;
            case 2: cout<<"enter data: ";
                    cin>>data; 
                    insert_at_front_dll(head,data);
                    break;
            case 3: cout<<"enter data: ";
                    cin>>data;
                    cout<<"enter position: ";
                    cin>>pos; 
                    insert_data_dll(head,data,pos);
                    break;
            case 4: delete_at_end_dll(head);
                    break;
            case 5: delete_at_front_dll(head);
                    break;
            case 6: cout<<"enter data to be deleted: ";
                    cin>>data; 
                    delete_data_dll(head,data);
                    break;
            case 7: cout<<"enter data: ";
                    cin>>data;
                    cout<<"enter position: ";
                    cin>>pos; 
                    replace(head,data,pos);
                    break;
            case 8: display_dll(head);
                    break;
            case 9: exit=0;
                    break;
            default:cout<<"\nenter valid choice!!";
                    break;
        }
    }
}
int main()
{
    doubly_linked_list();
    return 0;
}