#include<iostream>
using namespace std;

int trap(int *a, int n)
{
    int lm = 0;
    int rm = 0;
    int i = 0;
    int j = n-1;
    int sum = 0;

    while(i<j)
    {
        if(a[i]<a[j])
        {
            if(a[i]<lm)
            {
                sum = sum + (lm - a[i]);
            }
            else
            {
                lm = a[i];
            }

            i++;
        }
        else
        {
            if(a[j]<rm)
            {
                sum = sum + (rm - a[j]);
            }
            else
            {
                rm = a[j];
            }
            j--;
        }
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++)
    {
        int  k;
        cin>>k;
        a[i] = k;
    }

    int j =trap(a ,n);
    cout<<j;
}
