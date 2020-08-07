
#include<bits/stdc++.h>
using namespace std;

struct node
{
  int data;
  int height;
  node* left;
  node* right;
};

node* leftRotate(node* root)
{
    node *temp = root->left;
    root->left = temp->right;
    temp->right = root;
    root->height = max(root->left->height , root->right->height) +1;
    temp->height = max(temp->left->height , root->height) + 1;
    return temp;
}

node* rightRotate(node* root)
{
    node *temp = root->right;
    root->right = temp->left;
    temp->left = root;
    root->height = max(root->left->height , root->right->height) +1;
    temp->height = max(temp->right->height , root->height) + 1;
    return temp;
}

node* leftRightRotate(node* root)
{
    root->left = rightRotate(root->left);
    return leftRotate(root);
}

node* rightLeftRotate(node* root)
{
    root->right = leftRotate(root->right);
    return rightRotate(root);
}

int getDiff(node* left , node* right)
{
    int j = left->height - right->height;
    return j;
}

node* insertIn(node* root , int x)
{
    if(!root)
    {
        node* temp;
        temp->data = x;
        temp->left = temp->right = NULL;
        temp->height = 1;

        return temp;
    }
    else
    {
        if(root->data > x){
                cout<<"Eir";
                root->left = insertIn(root->left , x);
            cout<<"asd";
        }

    if(root->data < x)
        root->right = insertIn(root->right , x);
    else
        return root;

    root->height = max(root->left->height , root->right->height) +1;

    int val = getDiff(root->left , root->right);

    if(val>1 && root->left->data > x)
        return leftRotate(root);
    if(val<-1 && root->right->data < x)
        return leftRightRotate(root);
    if(val >1 && root->right->data > x)
        return rightLeftRotate(root);
    if(val<-1 && root->right->data < x)
        return rightRotate(root);
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

int main()
{
    int n;
    cin>>n;
    node *root = NULL;
    for(int i = 0 ;i<n;i++)
    {
        int k;
        cin>>k;
        root= insertIn(root , k);
    }

    preorder(root);

    return 0;
}


