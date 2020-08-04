#include<bits/stdc++.h>
using namespace std;

int countTrees(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
        int sum = 0;
        int left ,right , root;

        for(root = 1; root<=n;root++)
        {
            left = countTrees( root - 1);
            right = countTrees(n - root);

            sum = sum + (left*right);
        }

        return sum;
    }
}

int main()
{
    int n;
    cin>>n;
    cout<<countTrees(n);
    return 0;
}
