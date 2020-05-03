#include <iostream>

using namespace std;

int main()
{

    int n;
    cin>>n;
    int i;
    int a[n];
    for(i =0;i<n;i++)
    {
        int k;
        cin>>k;
        a[i] = k;
    }

    int max,min;
    max = min = a[0];
    int low , high;
    low = high =0;
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min = a[i];
            low++;
        }
        else if(a[i]>max)
        {
            max=a[i];
            high++;
        }
        else
        {
            continue;
        }
    }

    cout<<high <<" "<<low;
}
