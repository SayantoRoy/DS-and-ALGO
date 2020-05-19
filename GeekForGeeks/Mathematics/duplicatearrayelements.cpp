#include<iostream>
using namespace std;

int removedup(int *p , int N)
{

    int j = 0;
    for(int i=1;i<N;i++)
    {
        if(p[i-1]==p[i])
        {
            continue;
        }
        else
        {
            j++;
            p[j] = p[i];
        }

    }


    return j+1;
}

int main()
{

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        a[i] = k;
    }

    int jj = removedup(a , n);

    for(int i=0; i <jj;i++)
    {
        cout<<a[i];
    }
    return 0;

}
