#include<bits/stdc++.h>
using namespace std;

vector<int> heapify(vector<int> a , int i)
{
    int maxs;
    int n = a.size();
    int l = i*2 +1;
    int r = i*2 +2;
    if(l<n && a[l] > a[i])
        maxs = l;
    else
        maxs = i;
    if(r<n && a[r] > a[maxs])
        maxs = r;

    if(maxs!= i)
    {
        swap(a[i] , a[maxs]);
        a = heapify(a , maxs);
    }

    return a;
}


vector<int> insert(vector<int> a , int x)
{
    a.push_back(x);
    int n = a.size();
    for(int i = (n/2 -1) ; i>=0;i--)
    {
        a = heapify(a , i);
    }

    a = heapify(a , 0);
    return a;
}

void printHeap(vector<int> a)
{
    for(int i = 0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n ;
    cin>>n;

    vector<int> a;
    for(int i =0;i<n;i++)
    {
        int k;
        cin>>k;
        a.push_back(k);
    }
    printHeap(a);
    int jj;
    cin>>jj;
    a = insert(a , jj);
    printHeap(a);
}
