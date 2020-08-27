#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n;i++)
    {
        int k;
        cin>>k;
        a[i] = k;
    }

    for (int i = 0;i<n;i++)
    {
        int mins = i;
        for(int j = i+1;j<n;j++)
        {
            if(a[mins]>a[j])
            {
                mins = j;
            }
        }

        swap(a[mins] , a[i]);
    }

    cout<<"The sorted array"<<endl;
    for(int i = 0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
