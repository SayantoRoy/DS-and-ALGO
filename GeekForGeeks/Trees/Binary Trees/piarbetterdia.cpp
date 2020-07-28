
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

pair<int,int> maxdia(node* root)
{
    if(!root)
    {
        pair<int,int> p;
        p.first = 0;
        p.second= 0;
        return p;
    }
    else
    {
        pair<int,int> leftd = maxdia(root->left);
        pair<int,int> rightd = maxdia(root->right);

        int lh = leftd.first;
        int ld = leftd.second;
        int rh = rightd.first;
        int rd = rightd.second;

        int height = 1 + max(lh , rh);
        int diameter = max(lh+rh,(max(ld , rd)));

        pair<int,int> p;
        p.first = height;
        p.second = diameter;
        return p;
    }

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
    pair<int,int> p = maxdia(root);
    cout<<"Height : \n"<<p.first<<"\nDiameter : \n"<<p.second;

    return 0;
}
