#include <bits/stdc++.h>
using namespace std;

void eras(int n)
{
    int prime[n+1] = {0};


    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == 0)
        {

            for (int i=p*p; i<=n; i += p)
                prime[i] = 1;
        }
    }

    for (int p=2; p*p<=n; p++)
       if (prime[p]==0)
          cout << p*p << " ";
}

int main()
{
    int n;
    cin>>n;
    eras(n);
    return 0;
}
