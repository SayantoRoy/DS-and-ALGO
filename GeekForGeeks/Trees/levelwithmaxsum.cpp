
#include<iostream>
#include<queue>

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

int levelsum(node *root)
{
    if(root==NULL)
        return 0;

    node *temp; int sum = 0;
    int level =0; int maxs = 0;
    queue<node*> s;
    s.push(root);
    s.push(NULL);
    while(!s.empty())
    {
        temp = s.front();
        s.pop();
        if(temp==NULL)
        {
            if(maxs < sum)
            {
                maxs = sum;
                sum =0;
            }
            if(!s.empty())
            {
                s.push(NULL);
            }
            level++;
        }
        else
        {
            sum = sum + temp->data;
            if(temp->left)
                s.push(temp->left);
            if(temp->right)
                s.push(temp->right);
        }


    }

    return maxs;
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
    cout<<"Max Sum of a level"<<endl;
    cout<<levelsum(root);

    return 0;
}
