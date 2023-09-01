#include<iostream>
using namespace std;
struct node             //singly linked list node
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
struct node2            //doubly linked list node
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

//SINGLY LINKED LIST OPERATIONS

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
}
int copy_ll(node *head)
{
    cout<<"original: ";
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    node*tempp=head;            //copy linked list func
    tempp->data=head->data;
    tempp->next=head->next;
    cout<<"copied: ";
    while(tempp!=NULL)
    {
        cout<<tempp->data<<" -> ";
        tempp=tempp->next;
    }
    cout<<"NULL"<<endl;
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

//CIRCULAR LINKED LIST OPERATIONS

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
int copy_cll(node *head2)
{
    cout<<"original: ";
    node *temp=head2;
    do
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }while(temp!=head2);
    node*tempp=head2;            //copy linked list func
    tempp->data=head2->data;
    tempp->next=head2->next;
    cout<<"\ncopied: ";
    do
    {
        cout<<tempp->data<<" -> ";
        tempp=tempp->next;
    }while(tempp!=head2);
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

//DOUBLY LINKED LIST OPERATIONS

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
    delete temp;
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

//CIRCULAR DOUBLY LINKED LIST OPERATIONS

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
int delete_data_cdll(node2*&head, int val)    //func to delete specified data
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
int display_cdll(node2 *head)        //func. to display linked list
{
    node2 *temp=head;
    do
    {
        cout<<temp->data<<" <-> ";
        temp=temp->next;
    }while(temp!=head);
}

int linked_list()
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
}
int circular_linked_list()
{
    node *head2=NULL;
    int choice,exit=1,data,pos1;
    while(exit==1)
    {
        cout<<"\nINSERTION\t\t1.at End\t2.at Front\t3.at given position\nDELETION\t\t4.at End\t5.at Front\t6.at given position\n\t\t\t7.COPY\t\t8.DISPLAY\t9.EXIT";
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
            case 7: copy_cll(head2);
                    break;
            case 8: display_cll(head2);
                    break;
            case 9: exit=0;
                    break;
            default:cout<<"\nenter valid choice!!";
                    break;
        }
    }
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
int circular_doubly_linked_list()
{
    node2 *head=NULL;
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
                    insert_at_end_cdll(head,data);
                    break;
            case 2: cout<<"enter data: ";
                    cin>>data; 
                    insert_at_front_cdll(head,data);
                    break;
            case 3: cout<<"enter data: ";
                    cin>>data;
                    cout<<"enter position: ";
                    cin>>pos; 
                    insert_data_cdll(head,data,pos);
                    break;
            case 4: delete_at_end_cdll(head);
                    break;
            case 5: delete_at_front_cdll(head);
                    break;
            case 6: cout<<"enter data to be deleted: ";
                    cin>>data; 
                    delete_data_cdll(head,data);
                    break;
            case 7: //copy_cll(head);
                    break;
            case 8: display_cdll(head);
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
    int list_choice, exit=1;
    while(exit==1)
    {
        cout<<"\n\n1. simple linked list\t2. circular linked list\t3. doubly linked list\t4. circular doubly linked list\t5. exit";
        cout<<"\n\nenter your choice: ";
        cin>>list_choice;
        switch(list_choice)
        {
            case 1:linked_list();
            break;
            case 2:circular_linked_list();
            break;
            case 3:doubly_linked_list();
            break;
            case 4:circular_doubly_linked_list();
            break;
            case 5:exit=0;
            break;
            default:cout<<"you entered wrong value!!";
        }
    }
    return 0;
}