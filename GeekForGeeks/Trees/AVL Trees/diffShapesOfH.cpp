
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    int height;
    node* left;
    node* right;
};

int noOfShapes(int n)
{
    if(n==1)
        return 2;
    if(n==0)
        return 1;

    return 2*noOfShapes(n-1) * noOfShapes(n-2);

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
   int j = noOfShapes(n);
    cout<<"Number of shapes in Minimal AVL in numbers : \n"<<j;
    return 0;

}

