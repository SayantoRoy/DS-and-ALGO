

#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    int height;
    node* left;
    node* right;
};

int c = 0;

int height(node* j)
{
    if(!j)
        return 0;
    else
        return j->height;
}

node* buildIt(int n)
{
    if(n<=0)
    {
         return NULL;
    }
    else
    {

        node* temp = new node;
        temp->left = buildIt(n-1);
        temp->data = ++c;
        temp->right = buildIt(n-2);
        temp->height = height(temp->left) +1;
        return temp;
    }

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
    node* root = buildIt(n);
    cout<<"Minimal AVL Tree of the required amount of nodes : \n";
    preorder(root);
    return 0;

}

