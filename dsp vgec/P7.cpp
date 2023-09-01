#include<iostream>
using namespace std;
#define COUNT 10
struct node
{
    public:
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data=val;
        left=right=NULL;
    }
};

node *search(node *root, int val)
{
    if(root==NULL)
        return NULL;
    if(root->data==val)
        return root;
    if(root->data>val)
        return search(root->left, val);
    return search(root->right,val);
}

int preorder(node *&root)
{
    if(root==NULL)
        return 0;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    return 0;
}
int inorder(node *&root)
{
    if(root==NULL)
        return 0;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    return 0;
}
int postorder(node*&root)
{
    if(root==NULL)
        return 0;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    return 0;
}
node *inorder_s(node *&root)
{
    node *curr=root;
    while(curr->left && curr !=NULL)
        curr=curr->left;
    return curr;
}
node *del(node *root, int val)
{
    if(val<root->data)
        root->left=del(root->left, val);
    else if(val>root->data)
        root->right=del(root->right, val);
    else if(val==root->data)
    {
        if(root->left==NULL)
        {
            node*temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL)
        {
            node *temp=root->left;
            free(root);
            return temp;
        }
        node * temp=inorder_s(root->right);
        root->data=temp->data;
        root->right=del(root->right,temp->data);
    }
    return root;   
} 
int cal_height(node *root)
{
    if(root==NULL)
        return 0;
    int l_height=cal_height(root->left);
    int r_height=cal_height(root->right);
    return max(l_height, r_height)+1;
}
int count(node *root)
{
    if(root==NULL)
        return 0;
    return count(root->left)+count(root->right)+1;
}
int leaf_count(node* root) 
{ 
    if(root == NULL)     
        return 0; 
    if(root->left == NULL && root->right == NULL) 
        return 1;         
    else
        return leaf_count(root->left) + leaf_count(root->right); 
} 
int main()
{
    struct node *root= new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->right = new node(4);
    root->left->left = new node(6);
    root->right->right = new node(8);
    root->right->left = new node(9);
    int choice, exit=1,data, node_choice=0,root_val;
    /*cout<<"\nenter root value: ";
    cin>>root_val
    struct node *root= new node(root_val);*/
    while(exit==1)
    {
        cout<<"\n1.Search a node in tree\t\t2.Traversal of Tree (Inorder, Preorder, Postorder)\t3.Delete a node in tree\n4.Calculate height of tree \t5.Calculate total number of nodes\t\t\t6.Number of internal node\t\t7.Exit";
        cout<<"\n\nenter your choice: ";
        cin>>choice;
        switch(choice)
        {
            /*case 1: cout<<"enter data: ";
                    cin>>data;
                    cout<<"insert node at:\t1. LEFT\t2. RIGHT\n";
                    cin>>node_choice;
                    if(node_choice==1)
                        insert_left(root,data);
                    else if(node_choice==2)
                        insert_right(root,data);
                    break;*/
            case 1: cout<<"enter data: ";
                    cin>>data;
                    if(search(root,data)==NULL)
                        cout<<"value doesn't exist";
                    else
                        cout<<"value exist";
                    break;
            case 2: cout<<"traversal of tree\t\t1. PREORDER\t2. INORDER\t3. POSTORDER\n";
                    cin>>node_choice;
                    if(node_choice==1)
                        preorder(root);
                    else if(node_choice==2)
                        inorder(root);
                    else if(node_choice==3)
                        postorder(root);
                    break;
            case 3: cout<<"enter data: ";
                    cin>>data;
                    del(root, data);
                    cout<<"data deleted";
                    break;
            case 4: cout<<cal_height(root)<<"\n";
                    break;
            case 5: cout<<count(root);
                    break;
            case 6:cout<<leaf_count(root);
                    break;
            case 7: exit=0;
                    break;
            default:"you entered wrong choice.";
                    break;
        }
    }
}