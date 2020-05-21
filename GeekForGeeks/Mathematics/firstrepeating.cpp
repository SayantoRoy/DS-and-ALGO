#include<iostream>
using namespace std;

int firstRepeated(int a[], int n) {
    int k = -1;
    int d =0;
    for(int i=0;i<n;i++)
    {
        for(int j =i+1;j<n;j++)
        {
            if(a[i] == a[j])
            {
                //cout<<a[i]<< " "<<i<<endl;
                k = i+1;
                d =1;
                break;
            }
        }
        if(d==1)
        {
            break;
        }
    }
    return k;
}

int main()
{

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        int kk;
        cin>>kk;
        a[i] = kk;
    }

    int j = firstRepeated(a,n);

    cout<<j;
    return 0;

}
