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

    node *p = head;
    node *l = new node;
    //while(p->next!=head)
    do
    {

        if(p->data<= x && p->next->data > x)
        {
            temp->next = p->next;
            p->next = temp;
            break;
        }
        else if(p->data == head && p->data <= x)
        {
            cout<<p->data<< " ";
            temp->next = p->next;
            p->next = temp;
        }
        else
        {

            p = p->next;
        }
    }while(p!=head);


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
