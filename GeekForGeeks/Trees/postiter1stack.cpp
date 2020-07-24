
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
    node *last;
    do
    {
        while(root)
        {
            s.push(root);
            root=root->left;
        }

        while(root==NULL && !s.empty())
        {
            root = s.top();
            if(root->right==NULL || root->right==last)
            {
                cout<<root->data<<" ";
                last = root;
                s.pop();
                root = NULL;

            }
            else
            {
                root = root->right;
            }
        }

    }while(!s.empty());

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
