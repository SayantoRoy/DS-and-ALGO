#include<iostream>
using namespace std;


void trans(int *a , int n)
{
    for(int i =0;i<n;i++)
    {
        a[i] += (a[a[i]]%n)*n;
    }

    for(int i =0;i<n;i++)
    {
        a[i] = a[i]/n;
    }
}

void arrange(int *a , int n)
{
    trans(a , n);

    for(int i =0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i =0 ;i<n;i++)
    {
        int k;
        cin>>k;
        a[i]= k;
    }

    arrange(a ,n);
    return 0;
}
