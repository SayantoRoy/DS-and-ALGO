#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin>>n >>m;
    int a[n]; int b[m];

    int i;
    for(i=0;i<n;i++)
    {
        int k;
        cin>>k;
        a[i] = k;
    }

    for(i=0;i<m;i++)
    {
        int k;
        cin>>k;
        b[i] = k;
    }
    int s = a[n-1];
    int e = b[0];
    int d=0;
    for(i = s;i<=e;i++)
    {
        int j,ll;
        int c =0;
        for(j =0;j<n;j++)
        {
            if(i%a[j]==0)
                c++;
        }

        for(ll =0;ll<m;ll++)
        {
            if(b[ll]%i==0)
                c++;
        }
        if(c==(m+n))
        {
            d++;
        }

    }
    cout<<d;
}
