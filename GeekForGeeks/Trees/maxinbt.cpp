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


node* buildTree(int pre[], int in[] ,int preS,int preE ,int inS, int inE)
{
    if(inE < inS)
    {
        return NULL;
    }

    int k = pre[preS];
    int rootIndex = -1;
    for(int i =inS;i<=inE ;i++)
    {
        if(in[i] == k)
            rootIndex = i;
    }

    int inLS = inS;
    int inLE = rootIndex -1;
    int preLS = preS + 1;
    int preLE = inLE - inLS + preLS;
    int preRS = preLE + 1;
    int preRE = preE;
    int inRS = rootIndex+1;
    int inRE = inE;
    node* root = new node(k);
    root->left = buildTree(pre, in , preLS, preLE , inLS, inLE);
    root->right = buildTree(pre, in , preRS, preRE , inRS, inRE);
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

    root = buildTree(pre , in , 0 , n-1 , 0 , n-1);
    cout<<"Tree Built : And Inorder Traversal \n";
    inorder(root);
    return 0;
}
