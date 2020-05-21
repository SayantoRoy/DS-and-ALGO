#include<iostream>
using namespace std;

int immediateSmaller(int a[], int n, int x)
{
    int sub1  = 100000;
    int sub;
    int min = a[0];
    for(int i =0;i<n;i++)
    {
        sub = abs(a[i] - x);
        if(sub < sub1 && a[i]<x)
        {
            sub1 = sub;
            min = a[i];
        }
    }

    if(min == x)
    {
        return -1;
    }
    return min;
}

int main()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        a[i] = k;
    }
    int  j = immediateSmaller(a , n, x);
    cout<<j;
    return 0;
}
