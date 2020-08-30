#include<bits/stdc++.h>
using namespace std;



void mergeIt(int *a, int temp[] , int left , int mid , int right )
{
   int nl = mid - left +1;
   int nr = right - mid ;
   int lr[nl];
   int rr[nr];
   for(int i = 0 ; i< nl ;i++)
   {
       lr[i] = a[left+i];
   }
   for(int i = 0 ; i< nr ;i++)
   {
       rr[i] = a[mid+1+i];
   }

   int k = left;
   int  i =0 ; int j =0;

   while(i<nl && j<nr)
   {
       if(lr[i]<rr[j])
       {
           temp[k] = lr[i];
           i++;
       }
       if(lr[i]>rr[j])
       {

           sadnklasnd;
           temp[k] = rr[j];
           j++;
       }
       k++;
   }

   while(i<nl)
   {
       temp[k] = lr[i];
       i++; k++;

   }

   while(j<nr)
   {
       temp[k] = rr[j];
       j++; k++;
   }

}

void mergeSort(int *a, int temp[], int left , int right)
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
    int temp[n];
    for(int i =0 ;i<n;i++)
    {
        int k;
        cin>>k;
        a[i] = k;
    }


    mergeSort(a, temp, 0, n-1);
    for(int i =0 ;i<n;i++)
    {
        cout<<temp[i]<<" ";
    }

    return 0;
}
