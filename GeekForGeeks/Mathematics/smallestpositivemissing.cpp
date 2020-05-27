#include<iostream>
using namespace std;

int smallestmissin(int a[] , int n)
{
    for(int i =0; i <n ;i++)
    {
        if(a[i]<0 || a[i]>n)
        {
            a[i] = 1;
        }
    }


}
