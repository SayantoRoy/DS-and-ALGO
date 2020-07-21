#include<iostream>
#include<vector>
using namespace std;

vector<int> spanFind(vector<int> a)
{
    int n = a.size();
    vector<int> s(n , 0);
    for(int i =0;i<a.size();i++)
    {
        int j =1;
        while(j<=i && a[i]>a[i-j])
        {
            j++;

        }
        s[i] = j;
    }
    return s;
}


int main()
{
    int n;
    cin>>n;
    vector<int> a;
    for(int i =0;i<n;i++)
    {
        int k;
        cin>>k;
        a.push_back(k);
    }

    vector<int> b = spanFind(a);
    cout<<"The Span Array"<<endl;
    for(int i =0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}
