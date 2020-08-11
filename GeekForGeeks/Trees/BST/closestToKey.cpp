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

int closestToKey(node* root , int k)
{
    if(!root)
        return 0;

    queue<node*> q;
    node* temp = new node;
    node*p = new node;
    int minDiff = INT_MAX;
    q.push(root);
    while(!q.empty())
    {
        temp = q.front();
        q.pop();
        int diff = abs(temp->data - k);
        if(minDiff > diff)
        {
            minDiff = diff;
            p = temp;
        }
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
    return p->data;
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
    cout<<"\nEnter the Key for which the closest you want : "<<endl;
    int k;
    cin>>k;
    cout<< closestToKey(root , k);
    return 0;
}
