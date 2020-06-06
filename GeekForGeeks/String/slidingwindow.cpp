#include<bits/stdc++.h>
using namespace std;


void slidin(string s)
{
    int  l = s.length(); int j;
    for(int  i =1 ;i <l;i++)
    {
        j = i -1;
        char a = s[j];
        char b = s[i];
        cout<<a<<b<<endl;
    }

}




int main()
{
    string s;
    cin>> s;
    slidin(s);
    return 0;
}
