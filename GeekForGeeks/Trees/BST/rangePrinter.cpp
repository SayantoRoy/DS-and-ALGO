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


void printRange(node* root , int k , int k1)
{
    if(!root)
        return;
    if(root->data > k )
    {
        printRange(root->left , k , k1);
    }
    if(root->data >= k && root->data <=k1)
        cout<<root->data<<" ";
    if(root->data < k1)
    {
        printRange(root->right , k , k1);
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
    int k;
    cin>>k;
    int k1;
    cin>>k1;

    printRange(root , min(k,k1), max(k,k1));
    return 0;
}

