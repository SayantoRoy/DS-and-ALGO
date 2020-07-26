#include<bits/stdc++.h>
using namespace std;

void solve(int one , int zero , int n, vector<char> x)
{
    if(n == 0)
    {
        for(int i = 0 ;i<x.size();i++)
        {
            cout<<x[i];
        }
        cout<<endl;
        return;
    }

    vector<char>x1 = x;
    x1.push_back('1');
    solve(one+1 , zero , n-1 , x1);

    if(one>zero)
    {
        vector<char>x2 = x;
        x2.push_back('0');
        solve(one , zero+1 , n-1 , x2);
    }

}
int main()
{
    int n;
    cin>>n;
    vector<char>x;
    solve(0 , 0 , n ,x );
    return 0;
}
