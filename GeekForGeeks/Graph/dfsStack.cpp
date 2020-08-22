#include<bits/stdc++.h>
using namespace std;


void dfs (int** edges , int n , bool* visited)
{
    int stp = 0;
    stack<int>s;
    s.push(stp);

    while(!s.empty())
    {
        int k = s.top();
        s.pop();
        visited[k] = true;

        for(int i =0;i<n;i++)
        {
            if(visited[i]==false && edges[k][i]==1)
            {
                s.push(i);
            }
        }

        cout<<k<<" ";
    }
}


int main()
{
    int n, e;
    cin>>n>>e;

    int **edges = new int*[n];
    for(int i =0 ;i<n;i++)
    {
        edges[i] = new int[n];
        for(int j =0; j<n;j++)
        {
            edges[i][j] = 0;
        }
    }

    bool* visited = new bool[n];

    for(int i =0 ;i<n;i++)
    {
        visited[i] = false;
    }

    for(int i = 0 ;i<e;i++)
    {
        int f ,s ;
        cin>>f>>s;
        edges[f][s] = 1;
        edges[s][f] = 1;

    }

    dfs(edges , n , visited);
}
