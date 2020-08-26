#include<bits/stdc++.h>
using namespace std;


int getMinimum(int *dist, bool *visited , int v)
{
    int minVertex = -1;
    for(int i =0 ;i<v;i++)
    {
        if(!visited[i] && (minVertex==-1 || dist[i]<dist[minVertex]))
        {
            minVertex = i;
        }
    }
    return minVertex;
}



void dijkstraAlgo(int **edges ,int v , int src)
{
    int *dist=new int [v];
    bool *visited=new bool [v];
    for(int i = 0; i<v;i++)
    {
        dist[i] = INT_MAX;
        visited[i] = false;
    }
    dist[src] = 0;

    for(int i = 0; i<v ; i++)
    {

        int minVertex = getMinimum(dist , visited , v);
        cout<<minVertex<<" - "<<endl;
        visited[minVertex] = true;
        for(int j = 0; j<v;j++)
        {
            if(edges[minVertex][j]!=0 && !visited[j])
            {
                int k = dist[minVertex] + edges[minVertex][j];
                if(k < dist[j])
                {
                    dist[j] = k;
                }
            }
        }

    }
    cout<<endl;

    cout<<"The minimum distances are : \n";
    for(int i = 0; i<v;i++)
    {
        cout<<"For "<<i<<" it is : "<<dist[i]<<endl;
    }

    return;
}



int main()
{
    int v , e;
    cin>>v>>e;
    int** edges = new int*[v];
    for(int i =0;i<v;i++)
    {
        edges[i] = new int [v];
        for(int j = 0; j<v;j++)
        {
            edges[i][j] = 0;
        }
    }

    cout<<"Enter the edges to connect and the weight : \n";
    for(int i= 0;i<e;i++)
    {
        int f ,s ,w;
        cin>>f>>s>>w;
        edges[f][s] = w;
        edges[s][f] = w;
    }

    cout<<"Enter the source \n";
    int src;
    cin>>src;
    dijkstraAlgo(edges , v , src);
    return 0;
}
