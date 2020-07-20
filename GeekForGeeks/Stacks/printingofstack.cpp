
#include<iostream>
#include<stack>
using namespace std;

void printStack(stack<int>s)
{
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

void printit(stack<int>s)
{
    if(s.empty())
        return;

    int x = s.top();
    s.pop();
    printit(s);

    cout<<x<<" ";
    s.push(x);
}

int main()
{
    stack<int> a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        a.push(k);
    }
    cout<<"Stack from top to Bottom : "<<endl;
    printStack(a);
    cout<<"Stack from Bottom to Top : "<<endl;
    printit(a);
}
