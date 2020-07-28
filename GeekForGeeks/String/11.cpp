#include<bits/stdc++.h>
using namespace std;

vector<string>s;

int posI = -1;


string outPut(int N)
{
    int i = 0;

    if(N > s.size())
    {
        while(i<N)
    {
        posI++;
        string str = s[posI];
        string str1 = s[posI];
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
    else
    {
        return s[N-1];
    }



}

int main()
{
    s.push_back("1");
    int n;
    cin>>n;
    for(int i= 0;i<n;i++)
    {
        int k;
        cin>>k;
        cout<<outPut(k);
        cout<<endl;
    for(int i =0;i<s.size();i++)
    {
        cout<<s[i]<<" ";
    }
    cout<<endl;
    }


    return 0;
}
