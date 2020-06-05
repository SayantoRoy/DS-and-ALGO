
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

void reverselist()
{
    node *prev = NULL;
    node *curr = head;
    node *nxt = head;

    while(curr!=NULL)
    {
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    head = prev;
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






    print(head);
    reverselist();
    cout<<endl;
    print(head);
    return 0;

}
