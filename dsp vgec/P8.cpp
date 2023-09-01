// C++ program to insert a node in AVL tree
#include<iostream>
using namespace std;

// An AVL tree node
class node
{
	public:
	int data;
	node *left;
	node *right;
	int height;
    node(int val)       //para constructor
    {
        data=val;
        left=right=NULL;
    }
};
int height(node *N)
{
	if (N == NULL)
		return 0;
	return N->height;
}
int max(int a, int b)
{
	return (a > b)? a : b;
}
node* newnode(int data)
{
	node* n = new node(data);
	n->data = data;
	n->left = NULL;
	n->right = NULL;
	n->height = 1; 
	return(n);
}
node *rightRotate(node *y)
{
	node *x = y->left;
	node *temp = x->right;
	x->right = y;
	y->left = temp;
	y->height = max(height(y->left),
					height(y->right)) + 1;
	x->height = max(height(x->left),
					height(x->right)) + 1;
	return x;
}
node *leftRotate(node *x)
{
	node *y = x->right;
	node *temp = y->left;
	y->left = x;
	x->right = temp;
	x->height = max(height(x->left),
					height(x->right)) + 1;
	y->height = max(height(y->left),
					height(y->right)) + 1;
	return y;
}
int getBalance(node *N)
{
	if (N == NULL)
		return 0;
	return height(N->left) - height(N->right);
}
node* insert(node* node, int data)
{
	/* 1. Perform the normal BST insertion */
	if (node == NULL)
		return(newnode(data));

	if (data < node->data)
		node->left = insert(node->left, data);
	else if (data > node->data)
		node->right = insert(node->right, data);
	else // Equal datas are not allowed in BST
		return node;

	/* 2. Update height of this ancestor node */
	node->height = 1 + max(height(node->left),
						height(node->right));

	/* 3. Get the balance factor of this ancestor
		node to check whether this node became
		unbalanced */
	int balance = getBalance(node);

	if (balance > 1 && data < node->left->data)       // Left Left Case
		return rightRotate(node);
	if (balance < -1 && data > node->right->data)     // Right Right Case
		return leftRotate(node);
	if (balance > 1 && data > node->left->data)       // Left Right Case
	{
		node->left = leftRotate(node->left);
		return rightRotate(node);
	}
	if (balance < -1 && data < node->right->data)     // Right Left Case
	{
		node->right = rightRotate(node->right);
		return leftRotate(node);
	}
	return node;
}
void preorder(node *root)
{
	if(root != NULL)
	{
		cout << root->data << " ";
		preorder(root->left);
		preorder(root->right);
	}
}
int inorder(node *root)
{
    if(root==NULL)
        return 0;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    return 0;
}
int postorder(node*root)
{
    if(root==NULL)
        return 0;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    return 0;
}
int main()
{
	node *root = NULL;
    int exit=1, choice, data;
	while(exit==1)
    {
        cout<<"\n1. INSERT NODE\t2. TRAVERSE TREE\t 3. EXIT";
        cout<<"\nenter operation on AVL Tree:";
        cin>>choice;
        switch(choice)
        {
            case 1: cout<<"enter data: ";
                    cin>>data;    
                    root=insert(root,data);
                    break;
            case 2: cout << "\nPreorder traversal: ";
                    preorder(root);
                    cout << "\nInorder traversal: ";
                    inorder(root);
                    cout << "\nPostorder traversal: ";
                    postorder(root);
                    break;
            case 3: exit=0;
                    break;
            default:cout<<"\nenter valid choice!!";
                    break;
        }
    }
	return 0;
}