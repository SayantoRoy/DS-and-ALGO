#include<math.h>
#include<iostream>
using namespace std;

double termOfGP(int A,int B,int N)
{
    if(N==0)
    {
        return 0;
    }
    if(N==1)
    {
        return A;
    }
    if(N==2)
    {
        return B;
    }
    double b = (double)B;
    double a = (double)A;
    double r = b/a;
    cout<<r<<endl;

    double j = A * pow(r , N-1);

    cout<<j<<endl;
    return j;
}

int main()
{
    int n,m;
    cin>>n>>m;
    int k;
    cin>>k;
    cout<<termOfGP(n,m,k);
}
