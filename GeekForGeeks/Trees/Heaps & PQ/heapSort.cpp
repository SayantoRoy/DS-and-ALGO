#include<bits/stdc++.h>
using namespace std;

void heapify(int a[] , int n , int i)
{
    int maxs;
    int l = i*2+1;
    int r = i*2+2;
    cout<<a[l]<<" "<<a[r]<<endl;
    if(l<n && a[l]>a[i])
    {
       maxs = l;
    }
    else
    {
        maxs =i;
    }

    if(r<n && a[r]>a[maxs])
    {
        maxs = r;
    }


    if(maxs!=i)
    {
        swap(a[maxs] , a[i]);
        heapify(a , n,maxs);
    }
}

void heapSort (int a[] ,int n)
{
    for(int i = (n/2)-1 ; i>=0;i--)
    {
        heapify(a , n, i);
    }

    for(int i=n-1 ;i>0;i--)
    {
        swap(a[0], a[i]);
        heapify(a , i ,0);
    }
}

void printArray(int a[] , int n)
{
    for(int i =0;i<n;i++)
    {
        cout<<a[i]<<" ";
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

    heapSort(a , n);
    printArray(a ,n);
    return 0;
}
