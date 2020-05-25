#include<iostream>
using namespace std;

int floorsqrt(int x)
{
    int l =0;
    int s = x;
    if(x==0 || x==1)
    {
        return x;
    }

    int no;

    while(l<=s)
    {
       int mid = ((l+s)/2);

       if(mid*mid == x)
        return mid;

       else if(mid*mid <x)
       {
           l = mid+1;
           no = mid;
       }
       else
        s = mid -1;
    }

    return s;
}

int main()
{
    int n;
    cin>>n;
    cout<<floorsqrt(n);
    return 0;
}
