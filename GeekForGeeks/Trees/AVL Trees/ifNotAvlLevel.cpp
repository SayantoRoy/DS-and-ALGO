
#include<bits/stdc++.h>
using namespace std;

struct node
{
  int data;
  int height;
  node* left;
  node* right;
};

node* insertBST(node* root , int x)
{

    if(root==NULL)
    {
        node* root= new node;
        root->data = x;
        root->left = root->right = NULL;
        return root;
    }
    else
    {
        if(x <root->data)
        {
            root->left = insertBST(root->left , x);
        }
        else
        {
            root->right = insertBST(root->right , x);
        }

    }
}

int height(node* root)
{
    if(!root)
        return 0;

    return max(height(root->left) , height(root->right)) +1;
}

node* checkIfAVL(node* root)
{
    if(root==NULL)
        return NULL;



    node* leftc = checkIfAVL(root->left);
    node* rightc = checkIfAVL(root->right);
    if(leftc)
        return leftc;
    else if (rightc)
        return rightc;


    else if(abs(height(root->left) - height(root->right)) > 1)
    {
        node* temp = new node;
        temp = root;
        temp->height = height(root);
        return temp;
    }
    else
        return NULL;

}

void preorder(node* root)
{
    if(root)
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

int main()
{
    int n;
    cin>>n;
    node *root = new node;
    root = NULL;
    for(int i = 0 ;i<n;i++)
    {
        int k;
        cin>>k;
        root= insertBST(root , k);
    }

    preorder(root);

   node* p = checkIfAVL(root);
   if(p==NULL)
    cout<<"\nIt's an AVL Tree";
   else
    cout<<"\nIt's not an AVL Tree and is breaking the rules at : height : "<< p->height<<" and data : "<<p->data;
    return 0;
}
