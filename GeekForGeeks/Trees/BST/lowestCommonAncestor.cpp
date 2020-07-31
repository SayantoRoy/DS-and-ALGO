
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

node* lowestCommonAncestor(node* root , int a , int b)
{
    if((root->data > a && root->data < b) || (root->data > b && root->data < a))
        return root;
    else
    {
        if(root->data > a)
            lowestCommonAncestor(root->left , a, b);
        else
            lowestCommonAncestor(root->right , a , b);
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
    int a, b;
    cin>>a , b;
    node* p = lowestCommonAncestor(root , a , b);
    cout<<endl<<p->data;
    return 0;
}
