#include<iostream>
using namespace std;

int jumps(int k)
{
    if(k==0)
        return 0;
    if(k>0)
        cout<<k<<endl;
        return jumps(k-1);

    if(k>2)
        return 9;
    cout<<"MotherFucker";
}

int main()
{
    int k;
    cin>>k;

    cout<<endl<<jumps(k);
}
