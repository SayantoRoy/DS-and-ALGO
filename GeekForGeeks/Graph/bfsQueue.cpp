#include<bits/stdc++.h>
using namespace std;


void bfs (int** edges , int n , bool* visited)
{
    int stp = 0;
    queue<int>q;
    q.push(stp);

    while(!q.empty())
    {
        int k = q.front();
        q.pop();
        if(!visited[k])
        {
           visited[k] = true;
           cout<<k<<" ";
        }

        for(int i =0;i<n;i++)
        {
            if(visited[i]==false && edges[k][i]==1)
            {
                q.push(i);
            }
        }


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

    bfs(edges , n , visited);
}
