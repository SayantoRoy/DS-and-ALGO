
#include <iostream>

using namespace std;

int main()
{
    int n; int i;
    cin>>n;

    int d;
    cin>>d;

    int a[n];
    for(i=0;i<n;i++)
    {
        int k;
        cin>>k;
        a[i]=k;
    }

    int k = 0;
    for(i=0;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            int sum = 0;
            sum = a[i]+a[j];
            if(sum%d==0)
            {
                k++;
            }
        }
    }
    cout<<k;
}
