
#include <iostream>

using namespace std;

int main()
{
    int n; int i;
    cin>>n;

    int d;

    int a[n];
    for(i=0;i<n;i++)
    {
        int k;
        cin>>k;
        a[i]=k;
    }

    int b[] = {0,0,0,0,0};
    for(i=0;i<n;i++)
    {
        int j = a[i];

        b[j-1]++;
    }

    int max = 0; int kk = 0;
    for(i=0;i<5;i++)
    {
        if(b[i]>max)
        {
            max = b[i];
            kk = i+1;
        }
    }

    cout<<kk;

}

