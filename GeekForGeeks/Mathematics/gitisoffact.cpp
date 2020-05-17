#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;


int digits(int n)
{

    if(n<0)
        return 0;
    if(n<=1)
        return 1;

    double d=0;
    for(int i =2;i<=n;i++)
    {
        d = d+ log10(i);
    }

    d = floor(d+1);
    return d;
}

int main()
{
    int n;
    cin>>n;
    cout<<digits(n);
}
