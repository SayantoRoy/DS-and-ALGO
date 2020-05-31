#include<iostream>
using namespace std;

void change(int *a , int i , int n , int k)
{

    for(int j = n-1;j>i;j--)
    {
        a[j] = a[j-1];
    }

    a[i] = k;
}
void doki(int *a , int n , int k )
{
    for(int i = 0; i<n-1;i++)
    {
        if(a[i]<=k && k <a[i+1])
        {
            change(a , i+1 , n , k);
        }
    }
}

int main()
{
    int n,m ;
    cin>>n>>m;

    int a[n];
    int b[m];
    for(int i =0;i<n;i++)
    {
        int k ;
        cin>>k;
        a[i] = k;
    }
    for(int j =0;j<m;j++)
    {
        int k;
        cin>>k;
        b[j] = k;
    }

    int k;
    cin>>k;

    doki(a ,n , k);

    for(int i =0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }


    return 0;

}
