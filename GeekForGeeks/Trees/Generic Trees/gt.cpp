#include<iostream>
#include<queue>
#include<stack>

using namespace std;

struct node
{
    int data;
    node* child;
    node* nextSibling;
    node(int x)
    {
        this->data = x;
        child = NULL;
        nextSibling = NULL;
    }
};

int add(node* root)
{
    if(!root)
    {
        return 0;
    }
    else{
        return ( root->data + add(root->child) + add(root->nextSibling));
    }
}

int main()
{
    node *root = new node(1);
    root->child = new node(2);
    root->child->nextSibling = new node(3);
    root->child->nextSibling->nextSibling = new node(4);
    root->child->child = new node(5);
    root->child->child->nextSibling = new node(6);
    root->child->nextSibling->child = new node(7);
    root->child->nextSibling->child->nextSibling = new node(8);

    cout<<"Sum of the whole tree "<<endl;
    cout<<add(root);

    return 0;
}

