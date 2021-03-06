#include<iostream>
using namespace std;

struct node
{
    int data;
    node* left;
    node* right;
    node(int x)
    {
        this->data = x;
        left = right = NULL;
    }
};

void preorder(node* root)
{
    if(root)
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(node* root)
{
    if(root)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}

void inorder(node* root)
{
    if(root)
    {

        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->left->left = new node(5);
    root->left->left->left = new node(7);
    root->left->right = new node(4);
    root->right = new node(3);
    root->right->left = new node(6);
    root->right->left->right = new node(8);
    root->right->left->right->left = new node(9);
    cout<<"PreOrder Traversal"<<endl;
    preorder(root);
    cout<<"\nPostOrder Traversal"<<endl;
    postorder(root);
    cout<<"\nInOrder Traversal"<<endl;
    inorder(root);
    return 0;
}
