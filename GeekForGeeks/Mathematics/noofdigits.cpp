#include<iostream>
#include<math.h>

using namespace std;

int main()
{
//Finding no of digits in o(1) time.
    int n;
    cin>>n;
    int k;
    k = floor(log10(n)+1);
    cout<<k;
    return 0;
}
