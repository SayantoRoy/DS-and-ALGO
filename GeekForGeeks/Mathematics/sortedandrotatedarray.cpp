#include<iostream>
using namespace std;

int pivot(int *a , int x ,int y)
{
        if(x==y)
            return x;

        if(x>y)
            return -1;


        int mid = (x+y)/2;

        if(a[mid] > a[mid+1])
        {
            return mid;
        }
        else if (a[mid] < a[mid-1])
        {
            return mid -1;
        }
        else if (a[x]>= a[mid])
        {
            return pivot(a , x , mid-1);
        }

        return pivot(a , mid+1 , y);


}

/*int pivot(int arr[], int low, int high)
{
  // base cases
  if (high < low) return -1;
  if (high == low) return low;

   int mid = (low + high)/2; /*low + (high - low)/2;
   if (arr[mid] > arr[mid + 1])
    return mid;

   if (arr[mid] < arr[mid - 1])
    return (mid-1);

   if (arr[low] >= arr[mid])
    return pivot(arr, low, mid-1);

   return pivot(arr, mid + 1, high);
}*/

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i =0 ;i<n;i++)
    {
        int k;
        cin>>k;
        a[i] = k;
    }

    int j = pivot(a , 0 , n-1);
    cout<<j;
    return 0;
}
