#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k = 1;

do{
    long long int pm  , t;
    cout<<"Enter Sum Monthly , Rate of Interest Yearly and Time in years for the investment "<<endl;
    cin>> pm>>t;
    long long int py  = pm*12; long long int sum = 0;
    for(int i = 1;i<=t;i++)
    {
        int r;
        cin>>r;
        long long int tot = sum + py;
        long long int in = (tot*r)/100;
        sum = tot + in;
    }

    long long int pay = py*t;
    long long int prof = sum - pay;

    cout<<"Total Amount You get : " <<sum<<endl;
    cout<<"Total Sum You Pay : "<< pay<<endl;
    cout<<"Total Profit You Get : "<< prof<<endl;

    cout<<"Total Monthly Profit for whole Interest : "<<prof/12<<endl;
    cout<<"Total Monthly Profit : "<<prof/(12*t)<<endl;

    cout<<"Next Monthly Amount Available : "<<pm+(prof/(12*t))<<endl;


    cin>>k;

    cout<<endl<<endl<<endl;
}while(k==1);

    return 0;
}
