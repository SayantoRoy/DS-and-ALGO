#include<iostream>
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

void levelorder(node* root)
{
    if(root==NULL)
        return;

    node *temp;
    queue<node*> s;
    s.push(root);
    while(!s.empty())
    {
        temp = s.front();
        cout<<temp->data<<" ";
        s.pop();
        if(temp->left)
            s.push(temp->left);
        if(temp->right)
            s.push(temp->right);

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
    cout<<"Level Order Traversal"<<endl;
    levelorder(root);

    return 0;
}
