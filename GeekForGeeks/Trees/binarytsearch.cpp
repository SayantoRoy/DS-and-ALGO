
#include<iostream>
#include<climits>
#include<queue>
using namespace std;

struct node
{
    int data;
    node* left;
    node* right;
    node(int x)
    {
        this->data = x;
        left = right = NULL;
    }
};

int searchit(node* root , int n)
{
    if(root==NULL)
        return 0;

    if(root->data == n)
    {
        return 1;
    }
    else
    {
        int k = searchit(root->left , n);
        if(k!=0)
            return k;
        else
            return( searchit(root->right , n));

    }
    return 0;
}


int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    int n = 4;
    int j = searchit(root , n);
    cout<<j;
    return 0;
}
