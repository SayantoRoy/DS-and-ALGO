#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* left;
    node* right;
};

node* buildTree(int a[] , int n , int i , node* root)
{
    if(i<n)
    {
        node* temp = new node;
        temp->data = a[i];
        temp->left = temp->right = NULL;
        root = temp;
        root->left = buildTree(a , n , i*2+1 , root);
        root->right = buildTree(a , n , i*2+2 , root);
    }
    else
    {
        root = NULL;
    }
    return root;
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

void findElements(node* root , int k)
{
    if(!root)
        return ;

    findElements(root->left , k);
    if(root->data <= k)
        cout<<root->data<<" ";

    findElements(root->right , k);
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i =0 ; i<n; i++)
    {
        int k;
        cin>>k;
        a[i] = k;
    }
    node* root = buildTree(a , n , 0 , root);
    inorder(root);
    int k;
    cin>>k;
    findElements(root , k);
}
