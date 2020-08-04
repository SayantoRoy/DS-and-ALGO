#include<bits/stdc++.h>
using namespace std;

struct node
{
  int data;
  int height;
  node* left;
  node* right;
};

node* insertBST(node* root , int x)
{

    if(root==NULL)
    {
        node* root= new node;
        root->data = x;
        root->left = root->right = NULL;
        return root;
    }
    else
    {
        if(x <root->data)
        {
            root->left = insertBST(root->left , x);
        }
        else
        {
            root->right = insertBST(root->right , x);
        }

    }
}

void inorder(node* root)
{
    if(root)
    {
        inorder(root->left);
        cout<<root->data<<" and it's height is : "<<root->height<<endl;
        inorder(root->right);
    }
}

int fillHeight(node* root)
{
    if(!root)
        return 0;
    else
    {
        int lH = fillHeight(root->left);
        int rH = fillHeight(root->right);
        int hh = 1 + max(lH , rH);
        root->height = hh;
        return hh;
    }
}

int main()
{
    int n;
    cin>>n;
    node *root = new node;
    root = NULL;
    for(int i = 0 ;i<n;i++)
    {
        int k;
        cin>>k;
        root= insertBST(root , k);
    }

    int j = fillHeight(root);
    inorder(root);
    return 0;
}

