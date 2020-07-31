
#include<bits/stdc++.h>
using namespace std;

struct node
{
  int data;
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
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

node* findMin(node* root)
{
    if(root->left)
    {
        root = root->left;
    }
    else
    {
        return root;
    }
}

node* findMax(node* root)
{
    if(root->right)
    {
        root = root->right;
    }
    else
    {

        return root;
    }
}

pair<int,int> predecessorAndSuccessor(node* root , int j)
{
    if(!root)
    {
        pair<int , int> p;
        p.first = -1;
        p.second = -1;
        return p;
    }
    else
    {
        if(j == root->data)
        {
            node* pre = findMax(root->left);
            node* suc = findMin(root->right);
            int pred = pre->data;
            int succ = suc->data;

            pair<int, int> p;
            p.first = pred;
            p.second = succ;
            return p;
        }
        else if(root->data < j)
        {
            predecessorAndSuccessor(root->right , j);
        }
        else
        {
            predecessorAndSuccessor(root->left , j);
        }
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

    inorder(root);
    cout<<endl;
    int j;
    cin>>j;

    pair<int , int> p = predecessorAndSuccessor(root , j);
    cout<<p.first<<" "<<p.second;
    return 0;
}
