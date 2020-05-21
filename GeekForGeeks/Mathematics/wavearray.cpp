#include<iostream>
using namespace std;

void convertToWave(int *a, int n){

    if(n%2==0)
    {
        for(int i =0;i<n ;i+=2)
        {
            int tmp = a[i];
            a[i] = a[i+1];
            a[i+1] = tmp;
        }
    }else
    {
        for(int i =0;i<n-1 ;i+=2)
        {
            int tmp = a[i];
            a[i] = a[i+1];
            a[i+1] = tmp;
        }
    }

}

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i =0;i<n;i++)
    {
        int k;
        cin>>k;
        a[i] = k;
    }
    convertToWave(a , n);

    for(int i =0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
