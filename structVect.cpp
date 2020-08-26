#include<bits/stdc++.h>
using namespace std;

struct pq
{
    int node;
    int w;
    pq(int f , int w)
    {
        this->node = f;
        this->w = w;
    }
};


int main()
{
    int n,e;
    cin>>n>>e;
    vector<pq*> v[n];
    for(int i = 0;i<e;i++)
    {
        int f, s, w;
        cin>>f>>s>>w;
        pq *j = new pq(s , w);
        v[f].push_back(j);
        pq *j1 = new pq(f , w);
        v[s].push_back(j1);
    }

    for(int i = 0 ;i<n;i++)
    {
        cout<<"The nodes in "<<i<<" are : \n";
        for (auto j : v[i])
        {
            cout<< j->node<<" "<<j->w<<"\n";
        }
        cout<<endl;
    }

    return 0;
}
