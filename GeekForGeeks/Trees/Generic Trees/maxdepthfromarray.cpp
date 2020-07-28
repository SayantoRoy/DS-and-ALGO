#include<iostream>
#include<vector>
using namespace std;

int maxDept(int *a , int n)
{
    vector<int>v(n,-1);
    int maxs, current;
    maxs = current = 0;

    for(int i = 0 ;i<n;i++)
    {
        int j = i;
        current  = 0;
        while(a[j]!=-1)
        {
            if(v[j]!=-1)
            {
                current = v[j] +1;
                break;
            }
            else
            {
                current++;
                j = a[j];
            }
        }
        v[i] = current;
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
