
#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

node* inserts(node *head, int x)
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
    return head;
}

int sum(node *head)
{
    node *p = head;
    int sum = 0;
    while(p!=NULL)
    {
        sum = (sum*10) + p->data;
        p = p->next;
    }
    return sum;
}

node* sumofall(node *first , node *second)
{
    int i = sum(first);
    int j = sum(second);

    int sum = i+j;

    node *newHead = NULL;

    while(sum>0)
    {
        int d = sum%10;
        newHead = inserts(newHead , d);
        sum = sum/10;
    }

    return newHead;

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
    struct node *first = NULL;
    struct node *second = NULL;
    int n;
    cin>>n;

    for(int i=0; i<n;i++)
    {
        int k;
        cin>>k;
        first = inserts(first, k);
    }

    int n1;
    cin>>n1;

    for(int i=0; i<n1;i++)
    {
        int k;
        cin>>k;
        second = inserts(second, k);
    }




    node *s = sumofall(first , second);
    print(s);
    return 0;

}

