#include<bits/stdc++.h>
using namespace std;

vector<int> kmp(string s)
{
    int  l = s.length();
    vector<int> v(l);
    v[0] = 0;

    int i = 0;
    int j = 1;

    while(j<l)
    {
        if(s[i] == s[j])
        {
            v[j] = i + 1;
            i++;
            j++;
        }
        else{
            if(v[j-1]==0)
            {
                v[j] = 0;
                j++;
            }
            else if(v[j-1]!=0 && i!=0)
            {
                i = v[i-1];
            }
            else
            {
                v[j] = 0;
                j++;
            }
        }
    }
    return v;
}

int main()
{

    string s;
    cin>>s;
    cout<<s<<endl;
   vector<int> l = kmp(s);
//cout<<kmp(s);

    for(auto i : l)
    {
        cout<< i<<" ";
    }
    return 0;
}
