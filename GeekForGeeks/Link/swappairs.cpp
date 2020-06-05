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

void pairswap(node* head)
{



   /*while(temp!=NULL && temp->next!=NULL)
   {
       swap(temp->data , temp->next->data);

       temp = temp->next->next;
   }*/


    if(head!=NULL && head->next!=NULL)
    {
        swap(head->data , head->next->data);

        pairswap(head->next->next);
    }

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


    pairswap(head);
    print(head);
    return 0;

}

