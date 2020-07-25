#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
    node(int x)
    {
        this->data = x;
        this->left = this->right = NULL;
    }
};



void printArray(vector<int> a)
{
    for(int i =0 ; i<a.size() ; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;
}

int sumOfTree(node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    else
    {
        return (root->data + sumOfTree(root->left) + sumOfTree(root->right));
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
    root->right->right = new node(100);
    cout<<"Sum of the tree : \n";
    cout<<sumOfTree(root);
}

