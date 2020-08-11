
#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    int height;
    node* left;
    node* right;
};


int maxs(int a , int b)
{
    return (a>b)? a:b;
}

int height(node* p)
{
    if(p==NULL)
        return 0;
    return p->height;
}

int getDiff(node* l)
{
   if(!l)
    return 0;
   return (height(l->left) - height(l->right));
}

node* leftRotate(node* root)
{
    node* temp = root->right;
    root->right = temp->left;
    temp->left = root;
    root->height = maxs(height(root->right) , height(root->left)) +1;
    temp->height = maxs(height(temp->left) , height(temp->right)) +1;
    return temp;
}

node* rightRotate(node* root)
{

    node *temp = root->left;
    root->left = temp->right;
    temp->right = root;
    root->height= maxs(height(root->left) , height(root->right))+1;
    temp->height = maxs(height(temp->left) , height(temp->right))+1;
    return temp;
}

node* Insert(node* root, int x)
{
    if(root==NULL)
    {
        node *temp = new node;
        temp->data = x;
        temp->height = 1;
        temp->left = temp->right = NULL;

        return temp;
    }

    if(root->data < x)
    {
        root->right = Insert(root->right , x);

    }
    if(root->data > x)
    {
        root->left = Insert(root->left , x);
    }
    if(root->data == x)
    {
        return root;
    }
    root->height = maxs(height(root->left) , height(root->right))+1;
    int val = getDiff(root);
    if(val>1 && root->left->data > x)
    {
        return rightRotate(root);
    }
    if(val>1&& root->left->data < x)
    {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    if(val<-1 && root->right->data < x)
    {
        return leftRotate(root);
    }
    if(val<-1 && root->right->data > x)
    {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
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

node* removeRange(node* root, int a , int b)
{
    if(!root)
        return NULL;



    root->left = removeRange(root->left , a, b);
    root->right = removeRange(root->right , a , b);

    if(a<=root->data && root->data<=b)
        return root;
    if(root->data < a)
        return root->right;
    if(root->data > b)
        return root->left;


}

int main()
{
    int n;
    cin>>n;
    node* root = NULL;
    for(int i = 0; i<n;i++)
    {
        int k;
        cin>>k;
        root = Insert(root , k);
    }

    preorder(root);
    int a , b;
    cout<<"\nEnter the range : \n";
    cin>>a>>b;

    root = removeRange(root, min(a,b) , max(a,b));
    cout<<"\nAfter Removing Non Range Nodes : \n";
    preorder(root);
    return 0;
}

