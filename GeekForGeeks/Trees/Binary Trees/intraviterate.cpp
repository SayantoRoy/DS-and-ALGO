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

void inorder(node* root)
{
    if(root==NULL)
        return;

    stack<node*> s;

    while(1)
    {

        while(root)
        {
            s.push(root);
            root = root->left;
        }
        if(s.empty())
        {
            break;
        }
        root = s.top();
        cout<<root->data<<" ";
        s.pop();
        root= root->right;

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
    cout<<"Inorder Traversal"<<endl;
    inorder(root);

    return 0;
}
