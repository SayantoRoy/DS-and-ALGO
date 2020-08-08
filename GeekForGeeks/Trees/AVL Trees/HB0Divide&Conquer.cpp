#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    int height;
    node* left;
    node* right;
};

node* buildTree(int l , int h)
{
    if(l>h)
        return NULL;
    node* temp =new node;
    int mid = l + (h-l)/2;
    temp->data = mid;
    temp->left = buildTree(l , mid-1);
    temp->right = buildTree(mid+1 , h);

    return temp;
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
    node* root = buildTree(1 , n);
    preorder(root);
    return 0;

}
