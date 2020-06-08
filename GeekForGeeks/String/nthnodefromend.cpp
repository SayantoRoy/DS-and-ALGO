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

void nthend(node* head , int n)
{
    node *temp  =head;
    node *nend = head;
    int  k  =0;
    if(head != NULL)
    {
        while(1)
        {
           if(k<n && temp!=NULL)
           {
               temp = temp->next;
               k++;
           }

           else if(k==n && temp!=NULL)
           {
               temp = temp->next;
               nend = nend->next;
           }

           else if(k==n && temp==NULL)
           {
               cout<<nend->data<<" Last Node from the required end "<<endl; break;
           }

           else
           {
               cout<<"Its less in size" <<endl; break;
           }

        }
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

    int k;
    cin>>k;

    nthend(head , k);
    return 0;

}

