#include<bits/stdc++.h>
using namespace std;

struct tree
{
    int data;
    tree* left;
    tree* right;
    tree(int x)
    {
        this->data = x;
        this->left = this->right = NULL;
    }
};

void alterIt(tree* root1 , tree* root2 , int l)
{
    if(!root1 || !root2)
        return;

    if(l%2==0)
        swap(root1->data , root2->data);

    alterIt(root1->left , root2->right , l+1);
    alterIt(root1->right , root2->left , l+1);
}

void reverseAlternate(tree* root)
{
    alterIt(root->left , root->right , 0);
}

void inorder(tree* root)
{
    if(root)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

tree* buildTree(int a[] , int n , int i, tree* root)
{
    if(i<n)
    {
        tree* temp = new tree(a[i]);
        root = temp;
        root->left = buildTree(a , n , i*2+1 , root);
        root->right = buildTree(a , n , i*2+2, root);
    }
    else
    {
        root = NULL;
    }
    return root;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i =0; i<n;i++)
    {
        int k;
        cin>>k;
        a[i] = k;
    }

    tree* root = buildTree(a , n , 0 , root);
    inorder(root);
    reverseAlternate(root);
    cout<<endl;
    inorder(root);
}
