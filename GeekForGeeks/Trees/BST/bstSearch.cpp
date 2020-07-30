
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

void searchIt(node *root , int x)
{
    if (!root)
    {
        cout<<"Not Present "<<endl;
        return;
    }
    else
    {
        if(root->data == x)
        {
            cout<<"Found : It is present "<<endl;
            return;
        }
        else if (root->data < x)
        {
            searchIt(root->right , x);
        }
        else
        {
            searchIt(root->left , x);
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
    cout<<"The Inorder Traversal of the tree created : \n";
    inorder(root);

    cout<<endl<<"Enter the number you want to search : \n";
    int ss;
    cin>>ss;
    searchIt(root,ss);
    return 0;
}
