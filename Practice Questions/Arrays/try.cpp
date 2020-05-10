#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++)
    {
        int k;
        cin>>k;
        a[i] = k;
    }

    if(a == 0)
    {
        cout<<"array zero"<<endl;
    }
    else
    {
        cout<<"Array non zero"<<endl;
    }
    return 0;
}
