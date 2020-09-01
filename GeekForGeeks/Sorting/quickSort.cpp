#include<bits/stdc++.h>
using namespace std;

int partitionSwap(int *a , int l , int h)
{
    int pivot = a[h];
    int i =l ;int j ;
    for( j = l ; j<h;j++)
    {
        if(a[j]<=pivot)
        {

            swap(a[i] , a[j]);
            i++;
        }
    }
    swap(a[i] , a[h]);
    return i;
}


void quickSort(int *a , int l,int h)
{
    if(l < h)
    {
        int pE = partitionSwap(a , l , h);
        quickSort(a , l , pE-1);
        quickSort(a , pE+1 , h);
    }
}


int main()
{
    int n;
    cin>>n;
    int *a = new int[n];
    for(int i = 0 ; i<n ; i++)
    {
        int k;
        cin>>k;
        a[i] = k;
    }
    quickSort(a , 0, n-1);
    for(int i = 0; i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
