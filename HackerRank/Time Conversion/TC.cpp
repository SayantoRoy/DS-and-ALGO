#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string s1,s2,s3;
    s1 = s.substr(0,2);
    s2 = s.substr(2,6);
    s3 = s.substr(8,10);
    int hr = 0;

    stringstream inti(s1);

    inti >> hr;
    if(s3 == "PM")
    {
        if(hr == 12)
            hr = 12;
        else
            hr = hr+12;
    }

    string nhr = to_string(hr);

    if(hr<10)
        nhr = '0'+nhr;

    if(s3 == "AM" && hr==12)
        nhr = "00";

    string k = nhr + s2;
    cout<<k;
    return 0;
}
