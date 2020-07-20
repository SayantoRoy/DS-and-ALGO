#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<char> st;
    char s = 'A';
    char b='B';
    st.push(s);
    st.push(b);
    cout<<st.top();
    if(s==b)
        cout<<"YAY";
    else
        cout<<"Shit";
    return 0;
}
