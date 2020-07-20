#include<iostream>
#include<stack>
using namespace std;

stack<int> s;

void insertAtBottom( int x )
{
    if(s.empty())
    {
        s.push(x);
    }
    else{
        int temp = s.top();
        s.pop();
        insertAtBottom(x);
        s.push(temp);
    }
}


void reverseit()
{
    if(!s.empty())
    {
        int temp = s.top();
        s.pop();
        reverseit();
        insertAtBottom(temp);
    }
}

void printStack()
{
    if(!s.empty())
    {
        int temp = s.top();
        cout<<temp<<" ";
        s.pop();
        printStack();

        s.push(temp);
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        s.push(k);
    }
    cout<<"Original Stack : \n";
    printStack();

    reverseit();

    cout<<"\nReversed Stack : \n";
    printStack();
    return 0;
}
