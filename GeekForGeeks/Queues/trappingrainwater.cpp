#include<iostream>
using namespace std;

int amount(int *a , int n)
{
    int ml[n];
    int mr[n];
    int i , j;
    j = n-1;
    ml[0] = a[0];
    mr[n-1] = a[n-1];
    for(i=1;i<n;i++)
    {
        ml[i]= max(a[i] , ml[i-1]);
        mr[j-i]=max(a[j-i] , mr[j]);
    }

    cout<<ml[3]<<" "<<mr[3];
    return 1;
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
    cout<<"\n Do IT"<<amount(a ,n);
    return 0;
}
