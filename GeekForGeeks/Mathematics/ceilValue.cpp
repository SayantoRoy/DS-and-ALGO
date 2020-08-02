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

/*int ceilValue(node* root ,int k)
{
    if(!root){
        return -1;
    }
    if(root->data ==k)
    {
        return root->data;
    }
    if(root->data < k)
    {
        return ceilValue(root->right , k);
    }

    int ceil = ceilValue(root->left , k);

    return (ceil >=k)? ceil  : root->data;

}*/
node* ceilValue(node* root , int k)
{
    node* temp = NULL;
    while(root)
    {
        if(root->data >= k)
        {
            temp = root;
            root= root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return temp;
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
    cout<<ceilValue(root , k)->data;
    return 0;
}

