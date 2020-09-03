#include<bits/stdc++.h>
using namespace std;

void countSort(int *a , int n)
{
    int max = -100;
    for(int i =0 ;i<n;i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
    }
    int b[n];
    int c[max];
    for(int i =0 ; i<max;i++)
    {
        c[i] = 0;
    }

    for(int i =0 ; i<n;i++)
    {
        c[a[i]] = c[a[i]]+1;
    }

    for(int i = 1; i<n;i++)
    {
        c[i] = c[i]+c[i-1];
    }

    for(int i =0 ; i<n;i++)
    {
        cout<<c[i]<<" ";
    }
}


void printArray(int *a , int n)
{
    for(int i =0; i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    int *a = new int[n];
    for(int i =0; i<n;i++)
    {
        int k;
        cin>>k;
        a[i] = k;
    }

    countSort(a , n);
    printArray(a , n);
    return 0;
}
