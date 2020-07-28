
#include<iostream>
#include<queue>
#include<stack>

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

void zigzag(node* root)
{
    if(root==NULL)
        return;

    int lTr = 1;
    node *temp;
    stack<node*> s;
    stack<node*>sec;
    s.push(root);
    while(!s.empty())
    {
        temp = s.top();
        s.pop();
        if(temp)
        {
            cout<<temp->data<<" ";
            if(lTr == 1)
            {
                if(temp->left)
                    sec.push(temp->left);
                if(temp->right)
                    sec.push(temp->right);

            }
            else
            {
                if(temp->right)
                    sec.push(temp->right);
                if(temp->left)
                    sec.push(temp->left);

            }
        }
        if(s.empty())
        {
            lTr = 1 - lTr;
            swap(s , sec);
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
    cout<<"Zigzag Traversal"<<endl;
    zigzag(root);

    return 0;
}
