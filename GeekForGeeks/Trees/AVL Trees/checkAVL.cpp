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

int height(node* root)
{
    if(!root)
        return 0;

    return max(height(root->left) , height(root->right)) +1;
}

int checkIfAVL(node* root)
{
    if(root==NULL)
        return 0;

    if(abs(height(root->left) - height(root->right)) > 1)
        return 1;
    int left = checkIfAVL(root->left);
    int right = checkIfAVL(root->right);

    if(left == 1|| right==1)
        return 1;
    else
        return 0;
}

void preorder(node* root)
{
    if(root)
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
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

    preorder(root);

    cout<<"\n"<<checkIfAVL(root);
    return 0;
}
