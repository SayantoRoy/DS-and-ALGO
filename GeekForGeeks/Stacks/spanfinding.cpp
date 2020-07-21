#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> spanFind(vector<int> a)
{
    int n = a.size();
    vector<int> s(n , 0);
    stack<int> st;

    st.push(0);
    s[0] = 1;

    for(int i =1; i<n;i++)
    {
        while(!st.empty() && a[st.top()] <= a[i])
        {
            st.pop();
        }

        s[i] = (st.empty())? i+1 : i-st.top();

        st.push(i);
    }

    return s;
}



int main()
{
    int n;
    cin>>n;
    vector<int> a;
    for(int i =0;i<n;i++)
    {
        int k;
        cin>>k;
        a.push_back(k);
    }

    vector<int> b = spanFind(a);
    cout<<"The Span Array"<<endl;
    for(int i =0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}

