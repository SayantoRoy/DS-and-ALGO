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
        if(s[j] == s[i])
        {
            i++;
            v[j] = i;
            j++;
        }

        else
        {
            if(i==0)
            {
                v[j] = 0;
                j++;
            }
            else
            {
                i = v[i-1];
            }
        }
    }
    return v;
}

int kmpSearch(string s , string p)
{
    vector<int> v = kmp(p);
    int ls = s.length();
    int lp = p.length();

    int  i =0; int j =0;
    while( i < ls)
    {
        if(j == lp-1)
        {
            return (i-j+1);
        }
        if(s[i] != p[j] && j ==0)
        {
            i++;
        }
        else if(s[i] != p [j] && j>0)
        {
            j = v[j];
        }
        else
        {
            j++;
            i++;
        }


    }
    return -1;
}



int main()
{

    string s; string p;
    cin>>s>>p;
    vector<int> l = kmp(p);
//cout<<kmp(s);

    for(auto i : l)
    {
        cout<< i<<" ";
    }

    cout<<endl<<endl;
    int  k = kmpSearch(s , p);
    int kk = k + p.length() -1;
    cout<<"The Pattern is from : " <<k<<" to : "<<kk;
    return 0;
}
