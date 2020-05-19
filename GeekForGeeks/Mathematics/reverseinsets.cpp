#include <bits/stdc++.h>
using namespace std;


vector<int> reverseit(vector<int> p ,int s , int e)
{
    int temp=0;

    while(s<e)
    {
        temp = p[s];
        p[s] = p[e];
        p[e] =temp;
        s++;
        e--;
    }
    return p;
}

vector<int> doingitrev(vector<int>p , int n, int k)
{

    int i;

    for(i=0;i<n;i+=k)
    {
        if((i+k)<= n){
                int jj = i+k -1;
            p = reverseit(p ,i , jj);
        }
        else
        {
            p = reverseit(p ,i,n-1);
        }
    }

    return p;
}





int main()
{

    int n;
    cin>>n;
    int k;
    cin>>k;

    vector<int> a;

    for(int i=0;i<n;i++)
    {
        int kk;
        cin>>kk;
        a.push_back(kk);
    }

   vector<int>ll =  doingitrev(a , n , k);

    cout << "Reversed Vector: ";
    for (int i = 0; i < ll.size(); i++)
        cout << ll[i] << " ";
    cout << endl;

    return 0;
}
