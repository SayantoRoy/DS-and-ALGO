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

void insertatfront (int x)
{
    node* temp=new node;
    temp->data = x;
    temp->next = head;
    head = temp;
}

void insertmid(int pos , int x)
{
    node *temp = new node;
    temp->data = x;
    temp->next = NULL;

    node*p = head;
    int l =1;
    while(l<pos-1)
    {
        p = p->next;
        l++;
    }

    temp->next = p->next;
    p->next = temp;
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
    cout<<"Enter 1 to insert front , 2 to Insert in end ";
    int ch;
    cin>>ch;
    switch(ch)
    {
        case 1:  for(int i=0; i<n;i++)
                {
                    int k;
                    cin>>k;
                    inserts( k);
                }
                break;
        case 2: for(int i =0;i<n;i++)
        {
            int k;
            cin>>k;
            insertatfront( k);
        }
        break;

    }

    cout<<"Enter 1 if you want to insert at middle " ;
    int kk ;
     cin>>kk;
     if(kk==1)
     {
         int j;
        cin>>j;
        if(j<=n)
        {
            int k;
        cin>> k;
        insertmid(j , k);
        }
        else
        {
            cout<<"Not Possible"<<endl;
        }

     }


    print(head);
    return 0;

}
