#include<bits/stdc++.h>
using namespace std;

stack<int> a;
stack<int> b;

void pushit(int x)
{
    a.push(x);
}

void popit()
{
    if(!b.empty())
    {
        cout<<b.top()<<endl;
        b.pop();
    }
    else
    {
        while(!a.empty())
        {
            b.push(a.top());
            a.pop();
        }

        cout<<b.top();
        b.pop();
    }
}
int main()
{
    int n;
    cin>>n;
    int k = 1;
    while(k==1)
    {
        cout<<"Enter 1 for push and 2 for pop\n";
        int ch;
        cin>>ch;
        switch(ch)
        {
            case 1: int d;
            cin>>d;
            pushit(d);
            break;

            case 2: popit();
            cout<<endl;
            break;

        }
        cout<<"Enter 1 for continue\n";
        cin>>k;
    }
}
