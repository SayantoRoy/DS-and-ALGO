#include <iostream>
using namespace std;

int peakElement(int arr[], int n)
{
    int l =0;
    int s = n-1;

    while(l< s)
    {
        int mid = (int) (l+s)/2;

        if(arr[mid] < arr[mid+1])
        {
            l = mid +1;
        }
        else
        {
            s = mid;
        }
    }

    return l;
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
        a[i]= k;
    }

    int j = peakElement(a , n);
    cout<<j;
    return 0;
}
