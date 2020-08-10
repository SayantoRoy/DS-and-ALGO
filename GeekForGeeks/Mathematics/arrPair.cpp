#include<bits/stdc++.h>
using namespace std;

string isBinary(string a[] , int n)
{
    int i = 0;
    while(i<n)
    {
        char num = a[i][3];
        int c =1;
        int j = i+1;
        while(j<n)
        {
            if(num == a[j][3])
            {
                c++;
            }
            j++;
        }

        if(c>2)
            return "false";

        i++;
    }

    return "true";
}

int main()
{
    string s[] = {"(1,2)" , "(3,2)","(6,5)" , "(31,4)"};
    cout<<isBinary(s , 4);
}
