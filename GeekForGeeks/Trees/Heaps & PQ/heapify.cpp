
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

void heapify(heap* h, int i)
{
    int l , r , maxs ,swapEl;
    l = leftChild(h , i);
    r = rightChild(h , i);
    if(l!=-1 && h->array[i] < h->array[l])
    {
        maxs = l;
    }
    else
    {
        maxs = i;
    }
    if(r!=-1 && h->array[r] > h->array[maxs])
    {
        maxs = r;
    }

    if(maxs!= i)
    {
        swap(h->array[i] ,h->array[maxs]);
        heapify(h , maxs);
    }
    else
    {
        i++;
        if(i>=h->capacity)
            return;
        else
            heapify(h , i);
    }
}

void printHeap(heap *h)
{
    int n = h->capacity;
    for(int i =0 ; i<n;i++)
    {
        cout<<h->array[i]<<" ";
    }
    cout<<endl;
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
    printHeap(p);
    heapify(p,0);
    cout<<endl;
    printHeap(p);
}
