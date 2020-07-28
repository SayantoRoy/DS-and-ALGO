#include<bits/stdc++.h>
using namespace std;

string outPut(int N)
{
    vector<string>s;
    s.push_back("1");
    int i = 0;
    int ll =-1;
    while(i<N)
    {
        ll++;
        string str = s[ll];
        string str1 = s[ll];
        int l = str.length();
        if(str[l-1]=='1')
        {
            str = str + "0";
            s.push_back(str);
            i++;
        }
        else
        {
            str= str+"0";
            s.push_back(str);i++;
            str1 = str1+"1";
            s.push_back(str1);i++;
        }
    }
    return s[N-1];
}

int main()
{
    int n;
    cin>>n;
    cout<<outPut(n);
    return 0;
}
