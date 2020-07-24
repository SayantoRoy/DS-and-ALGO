#include<iostream>
#include<climits>
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

int maxintree(node* root)
{
    int rootVal , leftVal , rightVal,maxx = INT_MIN;
    if(root)
    {
        rootVal = root->data;
        leftVal = maxintree(root->left);
        rightVal = maxintree(root->right);

        maxx = max(max(leftVal, rightVal),rootVal);
    }
    return maxx;
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

    int k = maxintree(root);
    cout<<k;

    return 0;
}
