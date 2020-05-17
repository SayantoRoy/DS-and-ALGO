#include<iostream>
using namespace std;

bool isprime(int N)
{
    int n = (int)(N/2);
    int i; int c =0;
    for(i=2;i<=n;i++)
    {
        if(N%i==0)
        {
            c++;
        }
    }

    if(c==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin>>n;
    if(isprime(n)==true)
        cout<<"Prime"<<endl;
    else
        cout<<"Not Prime"<<endl;
    return 0;
}
