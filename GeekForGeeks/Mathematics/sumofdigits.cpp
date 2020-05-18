
#include<iostream>
using namespace std;

int pr(int n)
{

    int sum =0;
    while(n>0)
    {
        sum = sum+(n%10);
        n = n/10;
    }
    return sum;
}

int main()
{

    int n;
    cin>>n;
    cout<<pr(n);
    return 0;
}
