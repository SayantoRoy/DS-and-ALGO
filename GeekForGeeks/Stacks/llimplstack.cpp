#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

node* push(node* head , int x)
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
        temp->next = head;
        head = temp;
    }
    return head;

}

node* pop(node* head)
{
    if(head==NULL)
    {
        cout<<"UnderFlow \n";
    }
    else
    {
        cout<<head->data<<" \n";
        head = head->next;
    }
    return head;
}

void print(node* n)
{
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}


int main()
{
    node* head = NULL;
    int n;
    cin>>n;
    int d = 1;
    while(d==1)
    {
        cout<<"\n Enter 1 for push , 2 for pop and 3 for print"<<endl;
        int ch;
        cin>>ch;
        switch(ch)
        {
            case 1: int k;
                cin>>k;
                head = push(head , k);
                break;

            case 2: head = pop(head);
                    break;

            case 3: print(head);
                    break;

            default: cout<<"No such choice"<<endl;
                     break;

        }

        cout<<"\nIf you wanna do it again Press 1"<<endl;
        cin>>d;
    }

}
