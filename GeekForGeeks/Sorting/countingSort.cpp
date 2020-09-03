#include<bits/stdc++.h>
using namespace std;

void countSort(int *a , int n)
{
    int b[n];
    int max = -1;
    for(int i =0;i<n;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }

    int c[max+1];
    for(int i =0 ;i<max+1;i++)
    {
        c[i] = 0;
    }


    for(int i = 0; i<n;i++)
    {
        c[a[i]] = c[a[i]]+1;
    }

    for(int i = 1 ; i<=max ; i++)
    {
        c[i] = c[i]+c[i-1];
    }


    for(int i = n-1 ;i>=0;i--)
    {
        b[c[a[i]]] = a[i];
        c[a[i]] = c[a[i]] -1;
    }


    for(int i = 1 ;i <=n;i++)
    {
        cout<<b[i]<< " ";
    }
}


/*void printArray(int *a , int n)
{
    for(int i =0; i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}*/

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
    //printArray(a , n);
    return 0;
}
