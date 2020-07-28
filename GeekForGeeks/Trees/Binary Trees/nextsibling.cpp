
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
        return;

    queue<node*>q;
    q.push(root);
    q.push(NULL);
    node* temp;
    while(!q.empty())
    {
        temp = q.front();
        q.pop();
        if(temp==NULL)
        {
            if(!q.empty())
                q.push(NULL);
        }
        else
        {
            temp->nextSibling = q.front();
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
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

