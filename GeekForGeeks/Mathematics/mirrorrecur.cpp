
#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
    node(int x)
    {
        this->data = x;
        this->left = this->right = NULL;
    }
};



//Recursive Way To Print It
void mirror(node *root)
{
    if(root)
    {
        mirror(root->left);
        mirror(root->right);
        node *t = root->left;
        root->left = root->right;
        root->right = t;
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
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(100);
    inorder(root);
    cout<<"\nMirror of the tree : \n";
    //Recursive
    mirror(root);
    inorder(root);

}

