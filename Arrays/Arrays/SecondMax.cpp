//2nd Maximum in an Array

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> a(5);
    int i;
    for(i=0;i<5;i++)
    {
        int k;
        cin>>k;
        a[i] = k;
    }
    int max1 = a[0];
    int max2;
    for(i=0;i<5;i++)
    {
        if (a[i]>max1)
        {
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i]<max1 && a[i]>max2)
        {
            max2 = a[i];
        }
        else
        {
            continue;
        }
    }

    cout<<max2;

    return 0;
}
