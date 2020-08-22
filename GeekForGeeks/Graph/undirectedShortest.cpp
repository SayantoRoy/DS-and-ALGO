#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n , e;
    cin>>n>>e;
    vector<int> v[n];

    for(int i =0 ;i<e;i++)
    {
        int f,e;
        cin>>f>>e;
        v[f].push_back(e);
        v[e].push_back(f);
    }


}
