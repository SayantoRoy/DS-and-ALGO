#include<iostream>
using namespace std;

int kadane(int *a,int n)
{
    int mc;
    int mg;
    mc = mg = a[0];

    for(int i =1;i<n;i++)
    {
        mc = max(a[i] , (a[i]+mc));
        if(mc>mg)
        {
            mg = mc;
        }
    }
    return mg;
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
        a[i] =k;
    }

    int j = kadane(a , n);
    cout<<j;
}
