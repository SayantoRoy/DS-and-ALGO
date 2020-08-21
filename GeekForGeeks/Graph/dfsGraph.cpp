#include<bits/bits/stdc++.h>
using namespace std;

void dfs(int** edges , int n , int s , bool* visited)
{
    cout<<s<<endl;

}

int main()
{
    int v , e;
    cin>>v>>e;
    int** edges = new int*[v];
    for(int i =0; i<v;i++)
    {
        edges[i] = new int[n];
        for(int j =0;j<v;j++)
        {
            edges[i][j] = 0;
        }
    }

    for(int i = 0 ; i<e;i++)
    {
        int f ,s ;
        cin>>f>>s;
        edges[f][s] = 1;
        edges[s][f] = 1;
    }

    bool *visited = new bool[v];

    for(int i =0;i<v;i++)
    {
        visited[i] = false;
    }

    dfs(edges , v , 0 , visited);
}
