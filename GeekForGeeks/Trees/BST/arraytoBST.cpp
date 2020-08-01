
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* left;
    node* right;
};

node* buildTree(int a[] , int low, int high)
{
    if(low>high)
        return NULL;

    int mid;
    node* temp = new node;

    if(low==high)
    {
        temp->data = a[low];
        temp->left = temp->right = NULL;
    }
    else
    {
        mid = low + (high-low)/2;
        temp->data = a[mid];
        temp->left = buildTree(a , low , mid-1);
        temp->right = buildTree(a, mid+1 , high);
    }
    return temp;
}

void preorder(node* root)
{
    if(root){
        cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    }

}

int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i = 0;i<n;i++)
    {
        int k;
        cin>>k;
        a[i] = k;
    }

    node* root = buildTree(a, 0 , n-1);
    preorder(root);
}
