#include<bits/stdc++.h>
using namespace std;

struct sl
{
    int data;
    sl* next;
}*head = NULL;

struct node{
    int data;
    node* left;
    node* right;
};

void insertSl(int x)
{
    sl* temp = new sl;
    temp->data = x;
    temp->next = NULL;
    if(!head)
    {
        head = temp;
    }

    else
    {
        temp->next = head;
        head = temp;
    }

}

void display()
{
    sl*  p = head;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p= p->next;
    }

}

sl* findMid(sl* head1)
{
    sl* p1 = head1;
    sl* p2 = head1;

    int  i =0;

    while(p1 && p1->next)
    {
        if(i == 0)
        {
            p1 = p1->next;
            i = 1;
        }
        else
        {
            p1 = p1->next;
            p2 = p2->next;
            i =0;
        }
    }
    return p2;
}

node* buildBST(sl* head , int start , int ends)
{
    if(start>ends)
        return NULL;


    int mid = start + (ends-start)/2;
    node* leftChild = new node;
    leftChild = buildBST(head , start , mid-1);

    node* root = new node;

    root->data = head->data;
    root->left = leftChild;
    head = head->next;
    root->right = buildBST(head , mid+1 , ends);

    return root;
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

void preorder(node* root)
{
    if(root){
        cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    }

}

int main()
{
    int n;
    cin>>n;
    for(int i =0 ;i<n;i++)
    {
        int k;
        cin>>k;
        insertSl(k);
    }

    display();
    cout<<endl;

    node* root = buildBST(head , 0 , n-1);

    inorder(root);
    cout<<endl;
    preorder(root);

    return 0;
}

