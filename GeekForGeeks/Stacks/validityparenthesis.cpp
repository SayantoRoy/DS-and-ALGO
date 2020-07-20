#include<bits/stdc++.h>
using namespace std;

int validCheck(string s)
{
    int l = s.length();
    stack<char> st;
    char c;
    for(int i=0;i<l;i++)
    {
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
            {
                st.push(s[i]);
            }

        if(st.empty())
        {
            return 0;
        }


        switch(s[i])
        {
            case ')':
                c = st.top();
                    st.pop();
                    if(c == '{'||c=='[')
                        return 0;
                    break;

            case '}':c = st.top();
                    st.pop();
                    if(c == '('||c=='[')
                        return 0;
                    break;

            case ']':c = st.top();
                    st.pop();
                    if(c == '('||c=='{')
                        return 0;
                    break;
        }

    }

    if(!st.empty())
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    string s;
    getline(cin , s);
    if(validCheck(s)==1)
    {
        cout<<"The Expression is valid!!\n";
    }
    else
    {
        cout<<"The Expression is invalid!!\n";
    }
    return 0;
}
