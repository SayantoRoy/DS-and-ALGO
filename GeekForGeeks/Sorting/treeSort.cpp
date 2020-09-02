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
        this->left = this->right = NULL;
    }
};

node* insert(node* root , int x)
{
    if(!root)
    {
        node *temp =new node(x);
        return temp;
    }

    else
    {
        if(root->data > x)
        {
            root->left = insert(root->left , x);
        }
        else
        {
            root->right = insert(root->right , x);
        }
    }
    return root;
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
    int n;
    cin>>n;
    node* root =NULL;
    for(int i =0 ; i<n;i++)
    {
        int k;
        cin>>k;
        root = insert(root , k);
    }

    inorder(root);
    return 0;

}
