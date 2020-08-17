#include<bits/stdc++.h>
using namespace std;

int Find(int a[] , int n , int s)
{
    if(s<0 || s>=n)
        return INT_MIN;
    if(a[s]==-1 || a[s]<-1)
        return s;
    Find(a , n , a[s]);
}

void Union(int a[] , int n , int x, int y)
{
    if((Find(a,n,x))==(Find(a,n,y)) && Find(a,n,x)==-1)
        return;

    if(a[x] < a[y])
    {
        a[x] +=a[y];
        a[y] = x;
    }
    else
    {
        a[y] +=a[x];
        a[x] = y;
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++)
    {
        a[i] = -1;
    }
    int k;
    do
    {
        cout<<"\nEnter 1 for Find and 2 for Union and 3 for Parent\n";
        int ch;
        cin>>ch;

        switch(ch)
        {
            case 1: int s;
            cin>>s;
            cout<<Find(a,n,s);
            break;

            case 2: int a1 , b;
            cin>>a1>>b;
            Union(a,n,a1,b);
            break;

            case 3: int j;
            cin>>j;
            cout<<a[j];
            break;
        }
        cout<<"\nEnter 1 to keep going : ";
        cin>>k;

    }while(k==1);
}
