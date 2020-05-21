#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> leaders(int a[], int n){

    int mx = -1000;
    vector<int> v;
    for(int i = n-1;i>=0 ;i--)
    {
        if(a[i]>=mx)
        {
            v.push_back(a[i]);
            mx = a[i];
        }
    }

    reverse(v.begin(),v.end());

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
