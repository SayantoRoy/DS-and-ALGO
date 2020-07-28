
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct node
{
    int data;
    node* left;
    node* right;
    node(int x)
    {
        this->data = x;
        left = right = NULL;
    }
};

vector<pair<int , int>>a;

void position(node* root , int col)
{
   if(root)
   {
       a.push_back({col , root->data});
       if(root->left)
       {
           position(root->left , col-1);
       }
       if(root->right)
       {
           position(root->right , col+1);
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
    root->right->right = new node(7);
    root->left->left->left = new node(8);
    root->left->left->right = new node(9);
    root->right->left->left = new node(10);
    cout<<"Positions Print"<<endl;

    position(root , 0);

    sort(a.begin() , a.end());

    for(int i = 0;i<a.size();i++)
    {
        cout<<a[i].first<<" has a position of "<<a[i].second<<endl;
    }
    return 0;
}

