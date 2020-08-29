#include<bits/stdc++.h>
using namespace std;

void mergeIt(int *a, int *temp , int left , int mid , int right )
{

}

void mergeSort(int *a, int *temp, int left , int right)
{
    int mid;
    if(left < right)
    {
        mid = (left +right)/2;
        mergeSort(a ,temp , left , mid);
        mergeSort(a, temp , mid+1, right);
        mergeIt(a ,temp , left , mid , right);
    }
}

int main()
{
    int n;
    cin>>n;
    int *a = new int[n];
    for(int i =0 ;i<n;i++)
    {
        int k;
        cin>>k;
        a[i] = k;
    }
    int *temp = new int[n];
    mergeSort(a, temp, 0, n-1);
    for(int i =0 ;i<n;i++)
    {
        cout<<temp[i]<<" ";
    }

    return 0;
}
