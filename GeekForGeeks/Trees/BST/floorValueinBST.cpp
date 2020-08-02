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

int floorValue(node* root ,int k)
{
    if(!root){
        return 0;
    }
    if(root->data ==k)
    {
        return root->data;
    }
    if(root->data > k)
    {
        return floorValue(root->left , k);
    }

    int floor = floorValue(root->right , k);

    return (floor <= root->data && root->data <=k)? root->data : floor;

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
    cout<<floorValue(root , k);
    return 0;
}

