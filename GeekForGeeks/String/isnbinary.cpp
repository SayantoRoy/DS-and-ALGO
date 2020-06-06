#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int l = s.length();
    int d = 0;

    for(int i=0;i<l;i++)
    {
        if(s[i]!='0' && s[i]!='1')
        {
            d = 1;
            break;
        }

    }

    cout<<d;
    return 0;
}
