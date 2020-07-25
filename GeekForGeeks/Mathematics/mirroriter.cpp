
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
void mirror(node *root)
{
    if(root==NULL)
    {
        return;
    }

    queue<node*>q;
    q.push(root);
    node* temp;
    while(!q.empty())
    {
        temp = q.front();
        q.pop();
        swap(temp->right , temp->left);

        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);


        }


}

void inorder(node* root)
{
    if(root)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
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
    inorder(root);
    cout<<"\nMirror of the tree : \n";
    //Recursive
    mirror(root);
    inorder(root);

}

