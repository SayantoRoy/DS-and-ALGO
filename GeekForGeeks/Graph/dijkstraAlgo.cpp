#include<bits/stdc++.h>
using namespace std;





void dijkstraAlgo(int **edges ,int v , int src)
{

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
