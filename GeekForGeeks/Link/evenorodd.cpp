

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



void printrev(node *head)
{
    while (head && head->next)
    {
        head = head->next->next;
    }

    if(head==NULL)
    {
        cout<<" Even "<<endl;
    }
    else
    {
        cout<<" ODD "<<endl;
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

    printrev(head);
    return 0;

}


