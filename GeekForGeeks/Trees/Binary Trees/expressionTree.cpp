#include<bits/stdc++.h>
using namespace std;

struct node
{
    char data;
    node* left;
    node* right;
    node(char x)
    {
        this->data = x;
        left = right = NULL;
    }
};


node* expreTree(string s)
{
    stack<node*>st;
    for(int i = 0 ; i<s.length();i++)
    {
        if(s[i] == '+'||s[i] == '-'||s[i] == '*'||s[i] == '/')
        {
            node* r = st.top(); st.pop();
            node* l = st.top(); st.pop();
            node* newNode = new node(s[i]);
            newNode->left = l;
            newNode->right = r;
            st.push(newNode);
        }
        else
        {
            node* newNode = new node(s[i]);
            st.push(newNode);
        }
    }
    node* root = st.top();
    st.pop();
    return root;
}

void inorder(node* root)
{
    if(root)
    {
        inorder(root->left);
        cout<<root->data;
        inorder(root->right);
    }
}

int main()
{
    string s;
    getline(cin , s);
    cout<<s;
    node *root = expreTree(s);
    cout<<"\nThe Expression from the tree : \n";
    inorder(root);
    return 0;
}
