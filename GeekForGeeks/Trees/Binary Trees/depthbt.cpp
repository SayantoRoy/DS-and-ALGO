#include<bits/stdc++.h>
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
}*root = NULL;

void clears(queue<node*>q)
{
    queue<node*>s;
    swap(q , s);
}

void insertin(int n)
{
    node *temp = new node(n);
    if(root==NULL)
    {
        root = temp;
        return;
    }
    else
    {
        queue<node *>q;
        q.push(root);

        while(!q.empty())
        {
            node *p = q.front();
            q.pop();
            if(p->left)
            {
                q.push(p->left);
            }
            else
            {
                p->left = temp;
                clears(q);
                return;
            }
            if(p->right)
            {
                q.push(p->right);
            }
            else
            {
                p->right = temp;
                clears(q);
                return;
            }

        }

    clears(q);
    }


}

void inorder(node* root)
{
    if(root)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

int height(node *root)
{
    int lh , rh;
    if(root==NULL)
    {
        return 0;
    }

    lh = height(root->left);
    rh = height(root->right);

    if(lh>rh)
        return lh+1;
    else
        return rh+1;
}

int main()
{
    int n;
    cin>>n;
    for(int i =0;i<n;i++)
    {
        int k;
        cin>>k;
        insertin(k);
    }
    inorder(root);
    cout<<endl<<height(root);
    return 0;
}
