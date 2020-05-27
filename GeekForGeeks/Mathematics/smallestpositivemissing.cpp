#include<iostream>
using namespace std;

int smallestmissin(int a[] , int n)
{
    for(int i =0; i <n ;i++)
    {
        if(a[i]<1 || a[i]>n)
        {
            a[i] = 1;
        }
    }

    for(int i =0;i<n;i++)
    {
        int k = abs(a[i]) - 1;

        if(a[k]!=-1)
        {
            a[k] = a[k] * -1;
        }
        else
        {
            a[k] = a[k];
        }
    }

    for(int i = 0 ;i<n;i++)
    {
        if(a[i] > 0)
            return i+1;
    }

    return n+1;
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

    int j = smallestmissin(a , n);
    cout<<j;
    return 0;
}
