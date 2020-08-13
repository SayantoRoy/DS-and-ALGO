#include<bits/stdc++.h>
using namespace std;

struct heap
{
    int *array;
    int count;
    int capacity;
};

heap* create(int capacity , int a[])
{
    heap* h =new heap;
    h->capacity = capacity;
    h->count = 0;
    h->array = a;
    //h->array = (int*)malloc(sizeof(int)*capacity);
    return h;
}

int Parent(heap* h , int i)
{
    int j = (i-1)/2;
    if(j<=0 || j>=h->capacity)
        return -1;
    else
        return j;
}

int leftChild(heap* h , int i)
{
    int j = i*2+1;
    if(j>=h->capacity)
        return -1;
    else
        return j;
}

int rightChild(heap* h , int i)
{
    int j = i*2+2;
    if(j>=h->capacity)
        return -1;
    else
        return j;
}

int getMax(heap* h)
{
    if(h->array[h->capacity-1])
        return h->array[h->capacity-1];
    return -1;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++)
    {
        int k;
        cin>>k;
        a[i] = k;
    }
    heap* p = create(n , a);
    cout<<getMax(p);
}
