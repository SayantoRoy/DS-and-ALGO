#include<bits/stdc++.h>
using namespace std;

void merges(int* a, int l ,int mid , int r)
{
    int nl = mid - l +1;
    int nr = r - mid;

    int lA[nl]; int rA[nr];
    for(int i = 0 ;i<nl;i++)
    {
        lA[i] = a[l+i];
    }

    for(int i = 0 ; i < nr; i++)
    {
        rA[i] = a[mid+1+i];
    }


    int i = 0; int j =0; int k = l;

    while(i<nl && j<nr)
    {
        if(lA[i] < rA[j])
        {
            //cout<<"If "<<a[l+i]<<" "<<a[mid+1+j]<<"b - "<<b[k]<<endl;
            a[k] = lA[i];
            i++;
        }
        else
        {

            a[k] = rA[j];
            //cout<<"else "<<a[l+i]<<" "<<a[mid+1+j]<<"b - "<<b[k]<<endl;
            j++;
        }
        k++;
    }

    while(i<nl)
    {
        a[k] = lA[i];
        i++;k++;
    }
    while(j<nr)
    {
        a[k] = rA[j];
        j++;k++;
    }

}

void mergeSort(int *a  , int l , int r)
{
    if(l < r)
    {
        int mid = (l+r)/2;

        mergeSort(a , l ,mid);
        mergeSort(a , mid+1 , r);
        merges(a , l , mid , r);
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
    }

    mergeSort(a ,0 , n-1);
    for(int i =0 ;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

