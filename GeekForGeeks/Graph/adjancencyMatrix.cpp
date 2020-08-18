#include<bits/stdc++.h>
using namespace std;

void makeMatrix(int n , int **a , int n1, int n2 )
{
    if(n1 < n && n2 < n)
    {
        a[n1][n2] = 1;
        a[n2][n1] = 1;
    }

}

void printMatrix(int **a , int n)
{
    for(int i = 0;i<n;i++)
    {
        for(int j =0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n][n] = {0};
    do
    {
        int ch;
        cout<<"Enter 1 to join nodes and 2 to see the matrix : \n";
        cin>>ch;

        switch(ch)
        {
            case 1: int a; int b;
            cin>>a>>b;
            makeMatrix(&a , a , b , n);
            break;
        }
    }
}
