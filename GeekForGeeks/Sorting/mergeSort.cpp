#include<bits/stdc++.h>
using namespace std;

void merges(int* a , int* b, int l ,int mid , int r)
{
    int nl = mid - l +1;
    int nr = r - mid;
    int i = 0; int j =0; int k = l;

    while(i<nl && j<nr)
    {
        if(a[l+i] < a[mid+1+j])
        {
            b[k] = a[l+i];
            i++;
        }
        else
        {
            b[k] = a[mid+1+j];
            j++;
        }
        k++;
    }

    while(i<nl)
    {
        b[k] = a[l+i];
        i++;k++;
    }
    while(j<nr)
    {
        b[k] = a[mid+1+j];
        j++;k++;
    }

}

void mergeSort(int *a , int* b , int l , int r)
{
    if(l < r)
    {
        int mid = l + (r-1)/2;
        mergeSort(a , b , l ,mid);
        mergeSort(a , b , mid+1 , r);
        merges(a , b , l , mid , r);
    }
}

int main()
{
    int n;
    cin>>n;
    int *a = new int[n];
    int *t = new int[n];
    for(int i =0 ;i<n;i++)
    {
        int k;
        cin>>k;
        a[i] = k;
        t[i] = 0;
    }

    mergeSort(a ,t ,0 , n-1);
    for(int i =0 ;i<n;i++)
    {
        cout<<t[i]<<" ";
    }
    return 0;
}
