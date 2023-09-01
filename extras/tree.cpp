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

void print2DUtil(node* root, int space)
{
    if (root == NULL)
        return;
    space += COUNT;
    print2DUtil(root->right, space);
    cout << endl;
    for (int i = COUNT; i < space; i++)
        cout <<" ";
    cout << root->data;
    print2DUtil(root->left, space);
}

void print2D(node* root)
{
    print2DUtil(root, 0);
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
    print2D(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    return 0;
}