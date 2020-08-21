#include<bits/stdc++.h>
using namespace std;

void addConnection (vector<int> v[] , int a , int b)
{
    v[a].push_back(b);
    v[b].push_back(a);
}

void printConnections(vector<int> v[] , int n)
{
    for(int i =0 ;i<n;i++)
    {
        cout<<"The Vertex is : "<<i<<endl;
        for(auto x : v[i])
            cout<<x<<" - ";
    cout<<endl;
    }

}

int main()
{
    int n;
    cin>>n;
    vector<int> v[n];
    int k;

    do
    {
       cout<<"Enter 1 for connect and 2 for show connections "<<endl;
       int ch;
       cin>>ch;

       switch(ch)
       {
           case 1 : int a, b;
           cin>>a>>b;
           addConnection(v , a ,b );
           break;

           case 2 : printConnections(v , n);
           break;
       }

       cout<<"Enter 1 to continue"<<endl;
       cin>>k;

    }while(k==1);
}
