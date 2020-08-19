#include<bits/stdc++.h>
using namespace std;

void makeMatrix(int n , int **a , int n1, int n2 )
{


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
    int a[n][n];
    for(int i =0;i<n;i++)
    {
        for(int j = 0; j<n;j++)
        {
            a[i][j] = 0;
        }
    }
    int k;
    do
    {
        int ch;
        cout<<"Enter 1 to join nodes and 2 to see the matrix : \n";
        cin>>ch;

        switch(ch)
        {
            case 1: int a1; int b;
            cin>>a1>>b;
            if(a1 < n && b < n)
            {
                if(a[a1][b]==1)
                {
                    cout<<"Already Connected"<<endl;
                }
                else
                {
                    a[a1][b] = 1;
                    a[b][a1] = 1;
                }

            }
            break;

            case 2:
                for(int i = 0 ; i<n;i++)
                {
                    for(int j = 0; j<n;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
        }

        cout<<"Enter 1 to Continue : ";
        cin>>k;
        cout<<endl;
    }while(k==1);
}
