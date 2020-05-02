#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main()
{

    int i;
    int n; int q;
    cin>>n >> q;
    vector<int> v[n] ;
    for(i = 0 ; i<n;i++)
    {
        int k;
        cin>> k;
        for(int j =0 ; j<k; j++)
        {
            int jj;
            cin>>jj;
            v[i].push_back(jj);
        }
    }

    for(i = 0;i<q;i++)
    {
        int r , c;
        cin>>r>>c;
        cout<<v[r][c]<<endl;
    }

    return 0;
}
