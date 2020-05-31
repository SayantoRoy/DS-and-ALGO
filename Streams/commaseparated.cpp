
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a = "1,2 ,3 ,4 ,5 ,6 ,7 8";
    istringstream ms(a);
    string n;
    vector<string> v;
    while(getline(ms , n ,','))
    {
        v.push_back(n);
    }
    cout<<"Vector Print : ";
    for(auto i : v)
    {
        cout<<i<<" ";
    }


}
