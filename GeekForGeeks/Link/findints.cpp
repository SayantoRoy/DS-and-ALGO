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

int count(node* head, int search_for)
{
    int l=0;
    node *p = head;
    while(p!=NULL)
    {
        if(p->data == search_for)
        {
            l++;
        }

        p=p->next;
    }
    return l;
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

    int k;
    cin>>k;

    int j = count(head , k);
    cout<<j;
    return 0;

}
