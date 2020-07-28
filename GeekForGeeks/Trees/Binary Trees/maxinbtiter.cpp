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

int maxintree(node* root)
{
    int maxx = INT_MIN;
    node *temp;
    queue<node *>q;
    q.push(root);
    while(!q.empty())
    {
        temp = q.front();
        q.pop();
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
        if(temp->data > maxx)
        {
            maxx = temp->data;
        }
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
