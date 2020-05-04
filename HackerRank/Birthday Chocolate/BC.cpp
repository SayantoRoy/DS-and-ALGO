#include <iostream>

using namespace std;

int main()
{
    int n; int i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        int k;
        cin>>k;
        a[i]=k;
    }

    int d; int m;
    cin>>d>>m;
    int j = 0; int kk=0;
    int sum =0;
    for(int l =0;l <n;l++)
    {
        sum = 0;
        j=l;
        for(i=0;i<m;i++)
        {
            sum += a[j];
            j++;
        }
        if(sum == d)
        {
            kk++;
        }
    }
    cout<<kk;

}
