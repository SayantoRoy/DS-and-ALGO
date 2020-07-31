#include<bits/stdc++.h>
using namespace std;

struct dl
{
    int data;
    dl* prev;
    dl* next;
};

dl* insertDL(dl* head , int x)
{
    dl* temp = new dl;
    temp->data = x;
    temp->next = temp->prev = NULL;
    if(!head)
    {
        head = temp;
        temp->prev = head;
    }
    else
    {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    return head;
}


void display(dl* head)
{
    dl* p = head;
    while(p->next)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<p->data;
    cout<<endl;
    while(p!=head)
    {
        cout<<p->data<<" ";
        p = p->prev;
    }
    cout<<p->data;
}

dl* findMid(dl* head)
{
    dl* ptr1 = head;
    dl* ptr2 = head;
    int i = 0;
    while(ptr1 && ptr1->next)
    {
        if(i==0)
        {
            ptr1 = ptr1->next;
            i = 1;
        }
        else
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
            i = 0;
        }
    }

    return ptr2;
}

dl* buildTree(dl* head)
{
    if(!head || !head->next)
        return head;

    dl* temp = findMid(head);
    dl* p = head;

    while(p->next!= temp)
    {
        p = p->next;
    }

    p->next = NULL;
    p = temp->next;

    temp->next = NULL;

    temp->prev = buildTree(head);
    temp->next = buildTree(p);

    return temp;
}

int main()
{
    int n;
    cin>>n;
    dl* head = NULL;
    for(int i = 0; i<n;i++)
    {
        int k;
        cin>>k;
        head = insertDL(head , k);
    }

    display(head);
    cout<<endl;

    head = buildTree(head);
    display(head);
    return 0;

}
