#include<bits/stdc++.h>
using namespace std;

int evaluate( string s)
{
    stack<int> st;
    int sum =0 ;
    for(int i =0;i<s.length();i++)
    {
        if(isdigit(s[i]))
        {
            int k = s[i]-'0';
            st.push(k);
        }
        else if(s[i]==' ')
        {
            continue;
        }
        else
        {
            int j;
            int x = st.top();
            st.pop();
            int y = st.top();
            st.pop();
            switch(s[i])
            {
                case '+': j = x + y;break;
                case '-': j = x - y;break;
                case '*': j = x * y;break;
                case '/': j = x / y;break;
            }
            st.push(j);
        }

        return st.top();
    }
    return sum;
}
int main()
{
    string s;
    getline(cin , s);
    cout<<evaluate(s);
    int k = evaluate(s);
    return 0;
}
