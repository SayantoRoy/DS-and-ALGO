#include<iostream>
using namespace std;

void sumarraysum(int *a , int n, int s)
{

    int j =a[0];int k = 0; int d =0;
    for(int i=1;i<n;i++)
    {
        while(j>s && k<i-1)
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
        cout<<j<<" before "<<endl;
        if(j<s)
        {
            j = j+a[i];
        }
        cout<<j<<" after  "<<endl;



    }
    if(j == s && d==0)
    {
         cout<<k+1<<" "<<i;
    }
    if(d==0 && j!=s)
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
