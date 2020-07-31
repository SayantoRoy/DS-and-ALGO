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

int isBST(node* root , int *prev)
{
    if(!root)
        return 1;


    if(!isBST(root->left , prev))
        return 0;

    if(root->data < *prev)
        return 0;

    *prev = root->data;

    return isBST(root->right , prev);


}

int main()
{
    /*node *root = new node(10);
    root->left = new node(5);
    root->right = new node(15);
    root->left->left = new node(2);
    root->left->right = new node(7);
    root->right->left = new node(12);
    root->right->right = new node(22);*/

    node *root = new node(3);
    root->left = new node(2);
    root->right = new node(5);
    root->left->left = new node(1);
    root->left->right = new node(4);

    inorder(root);

    cout<<endl;
    int j =INT_MIN;
    int *prev = &j;
    cout<<isBST(root , prev);
}
