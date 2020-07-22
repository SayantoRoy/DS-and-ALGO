#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};
node* head = NULL;
node* tail = NULL;

void push(int x)
{
    node* temp = new node;
    temp->data =x;
    temp->next =NULL;

    if(head == NULL)
    {
        head = temp;
        tail = temp;
    }

    else
    {
        node* p = tail;
        p->next = temp;
        tail = temp;
    }
}

void pop()
{
    if(head == tail)
    {
        cout<<"UnderFlow"<<endl;
    }
    else
    {
        cout<<head->data<<endl;
        head = head->next;

    }
}

void display(node* head)
{
    node*p = head;
    cout<<"Display in flow : \n";
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
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
        push(k);
    }
    display(head);
    cout<<endl;
    pop();
    cout<<endl;
    display(head);
    return 0;
}
