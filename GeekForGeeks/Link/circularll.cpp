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
        temp->next = head;
    }
    else
    {
        node *p = head;
        while(p->next!=head)
        {
            p = p->next;
        }
        p->next = temp;
        temp->next = head;

    }

}

void sorted(int x)
{
    node *temp =new node;
    temp->data = x;
    temp->next = NULL;
    int check = 0;

    node *p = head;
    node *l = p;
    while(p->next!=head)
    {

        if(p->data<= x && p->next->data > x)
        {
            l = p;
            temp->next = p->next;
            p->next = temp;
            check = 1;
            break;
        }

        else
        {
            l = p->next;
            p = p->next;
        }
    }
    if(check!=1)
    {
        if(l->data <= x)
        {
            temp->next = l->next;
            l->next = temp;
        }
        else
        {
            temp->next = head;
            head = temp;
            l->next = head;
        }
    }


}



void print(node *head)
{
    node *p = new node;
    p = head;
    do
    {
        cout<<p->data<<" ";
        p = p->next;
    }while(p!=head);
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

    int kk;
    cin>>kk;
    sorted(kk);
    print(head);
    return 0;

}
