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

void pathToLeaf(node *root , vector<int> a)
{
    if(root == NULL)
        return;

    a.push_back(root->data);
    if(root->left==NULL && !root->right)
    {
        printArray(a);
    }
    else
    {
        if(root->left)
            pathToLeaf(root->left , a);
        if(root->right)
            pathToLeaf(root->right ,a );
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
    cout<<"Path From Root to Leaves\n";
    vector<int> a;
    pathToLeaf(root, a);
}
