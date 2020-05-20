#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    if(a==0)
        return b;
    else
        gcd(b%a , a);
}

void juggle(int *a, int n , int k)
{
    int D = gcd(n,k);

    for(int i=0;i<D;i++)
    {
        int tmp = a[i]; int l = 0;

        for(int j = i;j<n;j+=D)
        {
            a[j] = a[j+D];
            l = j;
        }
        a[l] = tmp;
    }
}

int main()
{

    int n ,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        int kk;
        cin>>kk;
        a[i]=kk;
    }

    int ll = gcd(n ,k);
    int jj = k/ll;
    while(jj!=0)
    {
        juggle(a , n, k);
        jj--;
    }


    for(int i=0;i<n;i++)
    {
        cout<<a[i]<< " ";
    }
}
