#include<iostream>
using namespace std;


int gcd(int b , int a)
{
    if(b==0)
        return a;
    else
    {
        gcd(a%b , b);
    }
}



int main()
{
    int n , s;
    cin>>n>>s;
    int a[n];
    for(int i =0; i<n;i++)
    {
        int k;
        cin>>k;
        a[i] = k;
    }


   /* for(int i =0;i<s;i++)
    {

        int tmp = a[0];
        for(int j =0;j<n-1;j++)
        {
            a[j] = a[j+1];
        }
        a[n-1] = tmp;
    }*/

     int D = gcd( n,s);

    if(D==1){

        for(int i=0;i<s;i++)
        {
            int tmp = a[0];
            for(int j=0;j<n-1;j++)
            {
                a[j] = a[j+1];
            }
            a[n-1] = tmp;
        }
    }
    else{
    for(int i=0;i<D;i++)
    {
        int temp = a[i];int l;

        for(int j=i;j<n;j+=D)
        {
            a[j] = a[j+D];
            l=j;
        }
        a[l] = temp;
    }
    }

    cout<<endl;
       for(int i =0; i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}
