#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a = "1 2 3 4 5 6 7 8";
    istringstream ms(a);
    int n;
    vector<int> v;
    while(ms >> n)
    {
        v.push_back(n);
    }
    cout<<"Vector Print : ";
    for(auto i : v)
    {
        cout<<i<<" ";
    }


}
