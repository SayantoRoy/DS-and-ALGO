
#include<iostream>
#include<stack>
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

void preorder(node* root)
{
    if(root==NULL)
        return;
    stack<node*> s;

    s.push(root);
    while(!s.empty())
    {
        node* p = s.top();
        cout<<p->data<<" ";
        s.pop();

        if(p->right)
            s.push(p->right);
        if(p->left)
            s.push(p->left);
    }
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
    cout<<"PreOrder Traversal"<<endl;
    preorder(root);

    return 0;
}
