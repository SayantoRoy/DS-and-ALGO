#include<bits/stdc++.h>
using namespace std;

void printArray(int a[] , int n)
{
    for(int i =0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void heapify(int a[] , int n , int i)
{
    int maxs;
    int  l = i*2 +1;
    int r = i*2 +2;

    if(l<n && a[l]>a[i])
        maxs = l;
    else
        maxs = i;
    if(r<n && a[r]>a[maxs])
        maxs = r;

    if(maxs!=i)
    {
        swap(a[maxs],a[i]);
        heapify(a , n , maxs);

    }
}


void buildArray(int a[] , int b[] , int m , int n)
{
    for(int i = 0 ;i<n;i++)
    {
        a[m+i] = b[i];
    }

    for(int i = (m+n)/2-1 ;i>=0;i--)
    {
        heapify(a , m+n , i);
    }
    printArray(a , m+n);
}

int main()
{
    int n,m;
    cin>>m >>n;
    int a[m+n];
    int b[n];
    cout<<"Enter 1st array : "<<endl;
    for(int i =0 ;i<m;i++)
    {
        int k;
        cin>>k;
        a[i] = k;
    }
    cout<<"Enter 2nd array : "<<endl;
    for(int i =0 ;i<n;i++)
    {
        int k;
        cin>>k;
        b[i] = k;
    }

    cout<<"After the merging the max heap : "<<endl;
    buildArray(a , b , m ,n);


}
