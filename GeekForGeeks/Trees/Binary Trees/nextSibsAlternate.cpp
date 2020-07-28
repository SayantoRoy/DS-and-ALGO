

#include<iostream>
#include<queue>
#include<stack>

using namespace std;

struct node
{
    int data;
    node* left;
    node* right;
    node* nextSibling;
    node(int x)
    {
        this->data = x;
        left = right = NULL;
        nextSibling = NULL;
    }
};

void siblings(node* root)
{
   if(!root)
   {
       return;
   }
   else{
    if(root->left)
        root->left->nextSibling = root->right;
    if(root->right)
    {
        if(root->nextSibling)
            root->right->nextSibling = root->nextSibling->left ? root->nextSibling->left : root->nextSibling->right;
        else
            root->right->nextSibling = NULL;
    }
    siblings(root->left);
    siblings(root->right);
   }
}

void dispSibs(node* root)
{
    if(root)
    {
         if(root->nextSibling)
            cout<<root->data<<" has the next sibling "<<root->nextSibling->data<<endl;
        else
            cout<<root->data<<" has no next sibling "<<endl;
        dispSibs(root->left);

        dispSibs(root->right);
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
    root->left->left->left = new node(8);
    root->left->left->right = new node(9);
    root->right->left->left = new node(10);
    siblings(root);
    cout<<"Siblings Print"<<endl;
    dispSibs(root);

    return 0;
}

