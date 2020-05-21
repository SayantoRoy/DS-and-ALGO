#include<iostream>
#include<vector>
using namespace std;

vector<int> leaders(int arr[], int n){

    vector<int> v;
    if(arr[0]>arr[1])
    {
        v.push_back(arr[0]);
    }

    for(int i=1;i<n-1;i++)
    {
        if(arr[i-1]<arr[i] && arr[i]>arr[i+1])
        {
            v.push_back(arr[i]);
        }
    }
    v.push_back(arr[n-1]);
     return v;

}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        a[i]= k;
    }

    vector<int> d = leaders(a , n);

    for(int i=0;i<d.size();i++)
    {

        cout<<d[i]<<" ";
    }
    return 0;
}
