#include<bits/stdc++.h>
using namespace std;

int Find(int a[] , int n , int s)
{
    if(s<0 || s>=n)
        return -1;
    if(a[s]==s)
        return s;
    Find(a , n , a[s]);
}

void Union(int a[] , int n , int x, int y)
{
    if(Find(a,n,x) == Find(a,n,y))
        return;
    if(!(x>0&&x<n) && (y>0&&y<n))
        return;
    cout<<"rep - "<<a[x]<<y<<endl;
    a[x] = y;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++)
    {
        a[i] = i;
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

            case 3: int j;
            cin>>j;
            cout<<a[j];
        }
        cout<<"\nEnter 1 to keep going : ";
        cin>>k;

    }while(k==1);
}
