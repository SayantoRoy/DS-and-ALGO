#include<bits/stdc++.h>
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

void inorder(node* root)
{
    if(root)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

int isBST(node* root)
{
    if(!root)
        return 1;
    if(root->left && root->left->data > root->data)
        return 0;
    if(root->right && root->right->data < root->data)
        return 0;
    if(!isBST(root->left) || !isBST(root->right))
        return 0;

    return 1;
}

int main()
{
    node *root = new node(10);
    root->left = new node(5);
    root->right = new node(15);
    root->left->left = new node(2);
    root->left->right = new node(7);
    root->right->left = new node(12);
    root->right->right = new node(22);

    inorder(root);

    cout<<endl;
    cout<<isBST(root);
}
