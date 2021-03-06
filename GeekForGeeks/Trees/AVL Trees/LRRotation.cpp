
#include<bits/stdc++.h>
using namespace std;

struct node
{
  int data = 0;
  int height = 0;
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

void preorder(node* root)
{
    if(root)
    {

        cout<<root->data<<" " ;//<<" and it's height is : "<<root->height<<endl;
        preorder(root->left);
        preorder(root->right);
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
int height(node* root)
{
    if(!root)
        return 0;
    else
    {
        int lH = height(root->left);
        int rH = height(root->right);

        return max(lH , rH)+1;
    }
}

node* leftRotate(node *root)
{
    node* temp = root->left;
    root->left = temp->right;
    temp->right = root;
    root->height = max(height(root->left) , height(root->right))+1;
    temp->height = max(height(temp->left) , root->height)+1;
    return temp;
}
node* rightRotate(node *root)
{
    node* temp = root->right;
    root->right = temp->left;
    temp->left = root;
    root->height = max(height(root->left) , height(root->right))+1;
    temp->height = max(height(temp->right) , root->height)+1;
    return temp;
}

node* lrRotate(node* root)
{
    root->left = rightRotate(root->left);
    return leftRotate(root);
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
    preorder(root);
    cout<<endl;

    root = lrRotate(root);
    preorder(root);


    return 0;
}

