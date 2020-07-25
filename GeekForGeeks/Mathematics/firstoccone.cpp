#include<iostream>
using namespace std;

int firstOccOne(int a[], int low , int high)
{
    int mid;

    while(high>=low)
    {
        mid = low + (high-low)/2;

        if(a[mid]==1 &&(mid==0 || a[mid-1]==0))
        {
            return mid;
        }
        else if(a[mid]==0)
        {
            low = mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(high<low)
    {
        return -1;
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
    int j = firstOccOne(a , 0,n-1);
    cout<<j+1;
    return 0;
}
