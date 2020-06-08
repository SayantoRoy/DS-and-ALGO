
#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*head;

void inserts( int x)
{
    node *temp = new node;
    temp->data = x;
    temp->next = NULL;
    if(head == NULL)
    {
        head = temp;

    }
    else
    {
        node *p = head;
        while(p->next!=NULL)
        {
            p = p->next;
        }
        p->next = temp;

    }
}

node* reverseit(node* head)
{
    node* temp = new node();
    node *nextNode = new node();
    nextNode->next = NULL;
    temp->next = NULL;

    while(head)
    {
        nextNode = head->next;
        head->next = temp;
        temp = head;
        head = nextNode;
    }
    return temp;
}



void print(node *head)
{
    node *p = new node;
    p = head;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
}

int main()
{

    int n;
    cin>>n;

    for(int i=0; i<n;i++)
    {
        int k;
        cin>>k;
        inserts( k);
    }

    node* p = reverseit(head);
    print(p);
    return 0;

}
