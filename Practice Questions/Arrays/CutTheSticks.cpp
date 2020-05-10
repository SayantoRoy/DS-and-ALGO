#include<iostream>
using namespace std;

int zeros(int a[],int n)
{
    int z =0;
     for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            z++;
        }
    }
    return z;
}




int main()
{
    int n;int i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        int k;
        cin>>k;
        a[i] = k;
    }

    int z =zeros(a,n);

    int cut;
    int mini;

    for(i =0;i<n;i++)
    {
        if(a[i]< mini && a[i]!=0)
            mini =a[i];
    }

    cout<<mini;

    int mini1;

    mini1 = mini;
    cut =0;
    for(i =0;i<n;i++)
    {
        if(a[i]!=0)
        {
            a[i] = a[i]-mini;
            cout<<"a[i] "<<a[i]<<endl;
            cut++;
            if(a[i]==0)
            {
                z++;
            }

            else if(a[i]<mini1)
            {
                mini1 = a[i];
            }
            else
            {
                continue;
            }


        }
        else
        {
            continue;
        }
    }
cout<<"cut"<<cut<<endl;

}
