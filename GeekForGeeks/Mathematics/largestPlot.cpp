#include<bits/stdc++.h>
using namespace std;

pair<int,int> largestPlot(vector<pair<int,int>> a)
{
    int maxs= 0;

    sort(a.begin() , a.end());

    pair<int,int> p;
    for(int i = 1;i<a.size();i++)
    {
        if((a[i].first - a[i-1].first) > maxs)
        {
            maxs = a[i].first - a[i-1].first;
            p.first = a[i].second;
            p.second = a[i-1].second;
        }
    }
    return p;
}

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>a;
    for(int i = 0 ;i< n ;i++)
    {
        int k,l;
        cin>>k;
        cin>>l;
        a.push_back(make_pair(l , k));
    }

    pair<int,int> p = largestPlot(a);
    cout<<p.first<<" yo : "<<p.second;
}
