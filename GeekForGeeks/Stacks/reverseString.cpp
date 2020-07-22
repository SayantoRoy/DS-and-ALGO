#include<bits/stdc++.h>
using namespace std;

void reverseit(string s)
{
    int l = s.length();
    stack<char> st;

    for(int i=0;i<l;i++)
    {
        st.push(s[i]);
    }

    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }

}

int main()
{
    string s;
    getline(cin , s);
    reverseit(s);
    return 0;
}
