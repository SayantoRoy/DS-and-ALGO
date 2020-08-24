#include<bits/stdc++.h>
using namespace std;


bool bfsDistance(int v , int src , int dist[] , int pred[] , vector<int> a[] , int dest)
{
    bool visited[v] = {false};

    queue<int>q;
    q.push(src);
    visited[src] = true;
    pred[src]=-1;
    dist[src] = 0;

    while(!q.empty())
    {
        int j = q.front();
        q.pop();
        for(int i = 0 ; i<a[j].size() ; i++)
        {
            if(!visited[a[j][i]])
            {
                visited[a[j][i]] = true;
                dist[a[j][i]] = dist[j] + 1;
                pred[a[j][i]] = j;
                q.push(a[j][i]);
                if(dest == a[j][i])
                {
                    return true;
                }
            }
        }
    }

    return false;
}

void shortestDistance(vector<int> a[] , int src ,int dest , int v)
{
    int dist[v]; int pred[v];

    if(!bfsDistance(v , src , dist , pred , a , dest))
    {
        cout<<"Not connected \n";
        return;
    }
    int k = dest;
    stack<int> s;
    s.push(k);
    while(pred[k]!=-1)
    {
        s.push(pred[k]);
        k = pred[k];
    }

    cout<<"The shortest Path from Source to Destination is : "<<dist[dest]<<endl<<"The route that it follows is : "<<endl;
    while(!s.empty())
    {
        cout<<s.top()<<" - ";
        s.pop();
    }

    cout<<"Is the shortest Route\n";
    return;
}

int main()
{
    int n , e;
    cin>>n>>e;
    vector<int> v[n];

    for(int i =0 ;i<e;i++)
    {
        int f,e;
        cin>>f>>e;
        v[f].push_back(e);
        v[e].push_back(f);
    }

    cout<<"Enter the Source and Destination \n";
    int src , dest;
    cin>>src>>dest;
    shortestDistance(v , src , dest , n);
    return 0;

}
