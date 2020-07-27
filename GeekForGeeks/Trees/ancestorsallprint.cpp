

#include<iostream>
#include<queue>
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

int ancestors(node* root)
{
    if(root == NULL)
    {
       return 0;
    }

        if(root->left || root->right || ancestors(root->left) || ancestors(root->right))
        {
                cout<<root->data<<" ";
                return 1;
        }
    return 0;

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
    cout<<"Ancestors Print"<<endl;

    int k = ancestors(root);

    return 0;
}

