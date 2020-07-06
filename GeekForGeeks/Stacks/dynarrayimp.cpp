
//Stack Implementation using Dynamic Array
#include<iostream>
using namespace std;

int isStackFull(int top , int n)
{
    return (top==n-1);
}

int expandarr(int n , int *a)
{

    int t = n*2;
    int na[t];
    for(int i=0 ; i<=n; i++)
    {
        na[i] = a[i];
    }
    a = na;
    return t;
}

int push(int *a , int top ,int x)
{
    top++;
    a[top] = x;
    return top;
}

int isStackEmpty(int top)
{
    return(top == -1);
}

int pop(int *a, int top)
{
    a[top] = -1;
    top--;
    return top;
}

void print(int *a , int top)
{
    for(int i =0;i<=top ; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    int top = -1;
    cout<<endl;

    while(1)
    {
        cout<< "Enter 1 for push and 2 for pop and 3 to display "<<endl;
        int ch;
        cin>>ch;

        switch(ch)

        {
            case 1: int j;
                    j = isStackFull(top , n);
                    if(j==1)
                    {
                        n = expandarr(n , a);
                    }


                    int x;
                    cin>>x;
                    top = push(a ,top , x);

                    break;

            case 2: int jj;
                    jj = isStackEmpty(top);
                    if(jj==0)
                    {
                        top = pop(a , top);
                    }
                    else
                    {
                        cout<<"Stack Underflow"<<endl;
                    }
                    break;

            case 3: print(a , top);
        }

        cout<<"Want to do further ? - 1 for yes"<<endl;
        int f;
        cin>>f;
        if(f!=1)
        {
            break;
        }
    }
}
