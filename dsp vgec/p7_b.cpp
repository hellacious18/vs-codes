#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *left, *right;
    bool leftThread;
    bool rightThread;
};
struct Node *insert(struct Node *root, int val)
{
    Node *ptr = root;
    Node *parent = NULL;
    while (ptr != NULL)
    {
        if (val == (ptr->data))
        {
            cout << "Duplicate value!" << endl;
            return root;
        }
        parent = ptr;
        if (val < ptr->data)
        {
            if (ptr->leftThread == false)
                ptr = ptr->left;
            else
                break;
        }
        else
        {
            if (ptr->rightThread == false)
                ptr = ptr->right;
            else
                break;
        } 
    }
    Node *temp = new Node;
    temp->data = val;
    temp->leftThread = true;
    temp->rightThread = true;
    if (parent == NULL)
    {
        root = temp;
        temp->left = NULL;
        temp->right = NULL;
    }
    else if (val < (parent->data))
    {
        temp->left = parent->left;
        temp->right = parent;
        parent->leftThread = false;
        parent->left = temp;
    }
    else
    {
        temp->left = parent;
        temp->right = parent->right;
        parent->rightThread = false;
        parent->right = temp;
    }
    return root;
}
struct Node* inorderSucc(struct Node* root)
{
    if(root->rightThread == true)
        return root->right;
    root = root->right;
    while(root->leftThread == false)
        root = root->left;
    return root;
}
void inOrder(struct Node* root)
{
    if(!root) 
        return;
    struct Node* temp = root;
    while(temp->leftThread == false)
        temp = temp->left;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = inorderSucc(temp);
    }
}
int main()
{
    struct Node *root = NULL;
    root = insert(root, 20);
    root = insert(root, 10);
    root = insert(root, 30);
    root = insert(root, 5);
    root = insert(root, 16);
    root = insert(root, 14);
    root = insert(root, 17);
    root = insert(root, 13);
    cout << "Inorder Travesal : ";
    inOrder(root);
    return 0;
}