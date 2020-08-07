
#include<iostream>
using namespace std;

struct node
{
    int data;
    int height;
    node* left;
    node* right;
};
int c = 0;
node* buildTree(int n)
{
    if(n==0)
        return NULL;
    node* temp = new node;
    temp->left = buildTree(n-1);
    temp->data = ++c;
    temp->right = buildTree(n-1);
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
    node* root = buildTree(n);
    preorder(root);
    return 0;
}
