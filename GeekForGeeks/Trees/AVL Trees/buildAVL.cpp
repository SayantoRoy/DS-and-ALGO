#include<bits/stdc++.h>
using namespace std;

struct node
{
  int data;
  int height;
  node* left;
  node* right;
};


int height(node* l)
{
    if(!l)
        return 0;
    return l->height;
}


node* leftRotate(node* root)
{
    node *temp = root->left;
    root->left = temp->right;
    temp->right = root;
    root->height = max(height(root->left) , height(root->right)) +1;
    temp->height = max(height(temp->left) , root->height) + 1;
    return temp;
}

node* rightRotate(node* root)
{
    node *temp = root->right;
    root->right = temp->left;
    temp->left = root;
    root->height = max(height(root->left) , height(root->right)) +1;
    temp->height = max(height(temp->right), root->height) + 1;
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

    int j = height(left) - height(right);

    return j;
}

node* insertIn(node* root , int x)
{
    if(!root)
    {
        node* temp = new node;
        temp->data = x;
        temp->left = temp->right = NULL;
        temp->height = 1;
        cout<<"sad"<<endl;
        return temp;
    }

    if(root->data > x)
        {
            root->left = insertIn(root->left , x);
        }
    if(root->data < x)
        {
            root->right = insertIn(root->right , x);
        }
    else
        return root;

    root->height = max(height(root->left) , height(root->right)) +1;
    int val = getDiff(root->left , root->right);
    cout<<val<<" "<<root->right->data<<" "<<x<<endl;


    if(val>1 && root->left->data > x)
    {
        cout<<"Asd1";
        return leftRotate(root);
    }
    if(val<-1 && root->left->data< x)
    {
        cout<<"Asd2";
        return leftRightRotate(root);
    }
    if(val>1 && root->right->data < x)
    {
        cout<<"Asd3";
        return rightLeftRotate(root);
    }
    if((val<-1) && (root->right->data < x))
    {
        cout<<"Asd4";
        return rightRotate(root);
    }



    return root;




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
