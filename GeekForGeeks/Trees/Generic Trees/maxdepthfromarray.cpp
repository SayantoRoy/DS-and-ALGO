#include<iostream>
using namespace std;

int maxDept(int *a , int n)
{
    int maxs, current;
    maxs = current = 0;

    for(int i = 0 ;i<n;i++)
    {
        int j = i;
        current  = 0;
        while(a[j]!=-1)
        {
            current++;
            j = a[j];
        }

        if(maxs<current)
            maxs = current;
    }
    return maxs;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n;i++)
    {
        int k;
        cin>>k;
        a[i] = k;
    }
    cout<<"Maximum Dept of the tree is : "<<maxDept(a , n);
    return 0;
}
