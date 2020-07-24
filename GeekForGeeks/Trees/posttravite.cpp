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

void postorder(node* root)
{
    stack<node*> s;
    stack<node*> res;
    node* temp;
    s.push(root);
    while(!s.empty())
    {
        node *p = s.top();
        res.push(s.top());
        s.pop();
        if(p->left)
            s.push(p->left);
        if(p->right)
            s.push(p->right);
    }

    while(!res.empty())
    {
        cout<<res.top()->data<<" ";
        res.pop();
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
    cout<<"Post Order Traversal"<<endl;
    postorder(root);

    return 0;
}
