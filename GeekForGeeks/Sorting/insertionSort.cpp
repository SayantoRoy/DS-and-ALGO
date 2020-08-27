#include<bits/stdc++.h>
using namespace std;

void insertionSort(int* a, int n)
{
    for(int i = 1; i<n;i++)
    {
        int curr = a[i];
        int j = i;
        while(a[j-1] > curr && j>=1)
        {
            a[j] = a[j-1];
            j--;
        }
        a[j] = curr;
    }

    return;
}


int main()
{
    int c;
    cin>>c;
    int *a = new int[c];
    for(int i =0 ;i<c;i++)
    {
        int k;
        cin>>k;
        a[i] = k;
    }

    insertionSort(a,c);
    cout<<"After Sort : "<<endl;
    for(int i = 0; i<c;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
