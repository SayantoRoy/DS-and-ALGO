
#include<bits/stdc++.h>
using namespace std;

struct node
{
  int data = 0;
  int height = 0;
  node* left;
  node* right;
};

node* insertBST()


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

    int j = fillHeight(root);
    preorder(root);

    return 0;
}


