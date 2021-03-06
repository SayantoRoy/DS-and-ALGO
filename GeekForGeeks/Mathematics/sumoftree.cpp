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



//Recursive Way To Print It
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

//Iterative Way To Do It
int sumOfTreei(node *root)
{
    if(root==NULL)
    {
        return 0;
    }

    queue<node*> q;
    q.push(root);
    int sum = 0;
    node* temp;
    while(!q.empty())
    {
        temp = q.front();
        q.pop();
        sum +=temp->data;
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }

    return sum;
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
    //Recursive
    cout<<sumOfTree(root)<<endl;
    //Iterative
    cout<<sumOfTreei(root);
}

