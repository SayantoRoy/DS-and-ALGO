#include<bits/stdc++.h>
using namespace std;

int evaluate( string s)
{
    int sum =0 ;
    for(int i =0;i<s.length();i++)
    {
        if(isdigit(s[i]))
    {
        int k = s[i]-'0';
        sum = (sum*10) + k;
    }
    }
    return sum;
}
int main()
{
    string s;
    getline(cin , s);
    cout << typeid(s).name() << endl;
    cout<<evaluate(s);
    int k = evaluate(s);
    cout << typeid(k).name() << endl;
    return 0;
}
