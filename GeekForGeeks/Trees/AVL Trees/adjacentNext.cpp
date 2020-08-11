

#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    int height;
    node* left;
    node* right;
    node* next = NULL;
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
        (root->next)? cout<<root->next->data: cout<<"0";
        cout<<endl;
        preorder(root->left);
        preorder(root->right);
    }

}

void fillAdjacentNext(node* root)
{
    if(!root)
        return;

    queue<node*> q;
    node* temp = new node;
    node* p = new node;

    p = NULL;

    int cl = 1;
    int cnt = 0;

    q.push(root);

    while(!q.empty())
    {
        temp = q.front();
        q.pop();
        if(temp->left)
        {
            q.push(temp->left);
            cnt++;
        }
        if(temp->right)
        {
            q.push(temp->right);
            cnt++;
        }

        if(p)
        {
            p->next = temp;

        }

        p = temp;
        cl--;

        if(cl==0)
        {
            cl = cnt;
            cnt = 0;
            p = NULL;
        }
    }
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


    fillAdjacentNext(root);
    cout<<"\nAfter Filling Adjacent next Nodes : \n";
    preorder(root);
    return 0;
}

