#include<bits/stdc++.h>
using namespace std;

struct pQueue
{
    int counter = 0;
    int *a;
};


void heapify(pQueue* p , int i)
{
    int mins;
    int left = i*2 +1;
    int right = i*2 +2;

    if(left < p->counter && p->a[left] < p->a[i])
    {
        mins = left;
    }
    else
        mins = i;
    if(right<p->counter && p->a[right]<p->a[mins])
    {
        mins = right;
    }

    if(mins != i)
    {
        swap (p->a[i] , p->a[mins]);
        heapify(p , mins);
    }
}

void inserts(pQueue* q ,int k)
{
    q->a[q->counter] = k;
    q->counter++;
    int n = q->counter;

    for(int i =(n/2)-1 ; i>=0 ; i--)
    {
        if(i<0)
        {
            break;
        }

        heapify(q , i);
    }

}
void deleteMin(pQueue *p)
{
    int l = p->a[0];
    p->a[0] = p->a[p->counter-1];
    p->a[p->counter-1] = l;

    cout<<p->a[p->counter-1]<<" "<<endl;
    p->counter--;
    heapify(p , 0);
}

void show(pQueue* q)
{
    for(int i =0 ;i<q->counter;i++)
    {
        cout<<q->a[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int kC;
    pQueue *q = new pQueue;
    do{
    int ch;
    cout<<"Enter 1 for insert , 2 for delete Minimum and 3 for Display of the queue Current \n";
    cin>>ch;

    switch(ch)
    {
    case 1:
        int k;
        cin>>k;
        inserts(q, k);
        break;
    case 2:
        deleteMin(q);
        break;
    case 3:
        show(q);
        break;
    }
    cout<<"\nEnter 1 to keep Going \n";
    cin>>kC;
    }while(kC==1);

}
