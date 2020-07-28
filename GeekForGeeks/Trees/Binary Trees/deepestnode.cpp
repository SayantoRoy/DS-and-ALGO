
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

void deepest()
{
    if(root==NULL)
    {
        return;
    }
    int level = 0;
    node *temp;
    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        temp = q.front();
        q.pop();


            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);

    }
    clears(q);
    cout<< temp->data;
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
    cout<<endl;
    deepest();
    return 0;
}

