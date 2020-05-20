#include<iostream>
using namespace std;


int gcd(int b , int a)
{
    if(b==0)
        return a;
    else
    {
        gcd(a%b , b);
    }
}



int main()
{
    int n,k;
    cin>>n;
    cin>>k;
    int a[n];
    int D = gcd(n , k);

    for(int i=0;i<n;i++)
    {
        int kk;
        cin>>k;
        a[i]=k;
    }

    for(int i=0;i<D;i++)
    {
        int temp = a[i];int l;

        for(int j=i;j<n;j+=D)
        {
            a[j] = a[j+D];
            l=j;
        }
        a[l] = temp;
    }


    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;

}
