#include<iostream>

using namespace std;

long long gcd(long long x , long long y)
{
    if(x==0)
    {
        return y;
    }
    else
    {
        return gcd(y%x , x);
    }
}

long long smallestdivisible(long long n)
{
    long long ans =1;
    for(long long i=1;i<=n;i++)
    {
        ans = (ans*i)/(gcd(ans , i));
    }
    return ans;
}

int main()
{
    long long m;
    cin>>m;
    cout<<smallestdivisible(m);
    return 0;
}
