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

int sumOrNot(node *root , int a)
{
    if(root == NULL)
    {
        if(a==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    else
    {
        int l ; int j;
        a = a - root->data;
           l = sumOrNot(root->left , a);
           j = sumOrNot(root->right , a);
        if(l==1||j ==1)
        {
            return 1;
        }
        else{
            return 0;
        }
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
    cout<<"Is the sum present ? \n";
    int a;
    cin>>a;
    cout<<sumOrNot(root, a);
}
