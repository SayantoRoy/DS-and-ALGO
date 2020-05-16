#include<iostream>
using namespace std;

int main()
{

    int a,b;
    cin>>a>>b;
    int M = 100007;
    int sum =0;
    sum = ((a%M)+(b%M))%M;
    cout<<sum;
    return 0;
}
