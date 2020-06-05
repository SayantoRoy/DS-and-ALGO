#include<iostream>
using namespace std;

int pivot(int *a , int x ,int y)
{
        if(x==y)
            return x;

        if(x>y)
            return -1;


        int mid = (x+y)/2;

        if(a[mid] > a[mid+1])
        {
            return mid;
        }
        else if (a[mid] < a[mid-1])
        {
            return mid -1;
        }
        else if (a[x]>= a[mid])
        {
            return pivot(a , x , mid-1);
        }

        return pivot(a , mid+1 , y);


}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i =0 ;i<n;i++)
    {
        int k;
        cin>>k;
        a[i] = k;
    }

    int j = pivot(a , 0 , n-1);
    cout<<j;
    return 0;
}
