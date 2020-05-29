#include<iostream>
using namespace std;

int trap(int *a, int n)
{
    int sum = 0;
    int l = min(a[0] , a[n-1]);

    for(int i =0;i<n;i++)
    {
        if(a[i]<l)
        {
            int k = l - a[i];
            sum = sum+k;
        }
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++)
    {
        int  k;
        cin>>k;
        a[i] = k;
    }

    int j =trap(a ,n);
    cout<<j;
}
