#include<iostream>
using namespace std;

void subarraySum(int a[], int n, int s){

    int j =a[0];int k = 0; int d =0; int i;
    for( i=1;i<=n;i++)
    {
        while(j>s && k<i)
        {
            j = j - a[k];
            k++;
        }


        if(j==s)
        {
            d = 1;
            cout<<k+1<<" "<<i;
            break;
        }
        if(j<s)
        {
            j = j+a[i];
        }

    }
    if(d==0)
    {
        cout<<"-1";
    }
}

int main()
{
    int n , s;
    cin>>n>>s;
    int a[n];
    for(int i =0;i<n;i++)
    {
        int k;
        cin>>k;
        a[i] = k;
    }

    sumarraysum(a , n ,s);
    return 0;
}
