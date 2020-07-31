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

int distanceRoute(node* root , int x)
{
    if(root->data == x)
    {
        return 0;
    }
    else if(root->data > x)
        return 1+distanceRoute(root->left,x);
    else
        return 1+distanceRoute(root->right , x);
}

int distanceTwoNodes(node* root , int a , int b)
{
    if((root->data > a && root->data < b)){
       return distanceRoute(root , a)+distanceRoute(root , b);
    }
    else if((root->data > b && root->data < a)){
       return distanceRoute(root , b)+distanceRoute(root , a);
    }
    else
    {
        if(root->data > a)
            distanceTwoNodes(root->left , a, b);
        else
            distanceTwoNodes(root->right , a , b);
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
    cin>>a>>b;
    int p = distanceTwoNodes(root , a , b);
    cout<<"The Distance Between the two nodes are : "<<p;
    return 0;
}




