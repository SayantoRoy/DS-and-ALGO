
#include<iostream>
#include<climits>
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


node* buildTree(int pre[], int in[] ,int preS,int inS, int inE)
{
    if(inS > inE)
        return NULL;

    node* root = new node(pre[preS]);

    int rI = -1;
    for(int i =inS; i<=inE ;i++)
    {
        if(in[i] == pre[preS])
        {
            rI = i;
        }
    }


    root->left = buildTree(pre , in , preS+1,inS , rI - 1 );
    root->right = buildTree(pre , in , preS+1+rI-inS,rI+1 , inE  );

    return root;

}

void inorder(node *root)
{
    if(root)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

int main()
{
    node *root = NULL;
    int n;
    cin>>n;
    int pre[n];
    int in[n];
    for(int i = 0; i<n;i++)
    {
        int k;
        cin>>k;
        pre[i] = k;
    }
    for(int i = 0; i<n;i++)
    {
        int k;
        cin>>k;
        in[i] = k;
    }

    root = buildTree(pre , in , 0 , 0 , n-1);
    cout<<"Tree Built : And Inorder Traversal \n";
    inorder(root);
    return 0;
}
