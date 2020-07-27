
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

void ancestors(node* root , vector<int>a)
{
    if(root == NULL)
    {
        for(int i =0;i<a.size();i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        return;
    }
    else
    {
        a.push_back(root->data);
        ancestors(root->left , a);
        ancestors(root->right , a);
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
    cout<<"Ancestors Print"<<endl;
    vector<int>a;
    ancestors(root , a);

    return 0;
}

