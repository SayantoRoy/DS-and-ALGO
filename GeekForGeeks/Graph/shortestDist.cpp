#include<bits/stdc++.h>
using namespace std;

void printDist(vector<int>a[] , int v , int src, int dst)
{
    int dist[v];
    for(int i = 0; i<v;i++)
    {
        dist[i] = -1;
    }
    dist[src] = 0;
    queue<int> q;
    q.push(src);

    while(!q.empty())
    {
        int j = q.front();
        q.pop();
        for(int i = 0 ;i<a[j].size() ; i++)
        {
            cout<<a[j][i]<<" - "<<dist[a[j][i]]<<endl;
            if(dist[a[j][i]] == -1)
            {
                dist[a[j][i]] = dist[j]+1;
                cout<<a[j][i]<<" - "<<dist[a[j][i]]<<endl;
                q.push(a[j][i]);

                 if(a[j][i] == dst)
                {
                    cout<<"The shortest Distance = "<<dist[a[j][i]]<<endl;
                    return;
                }
                else
                {
                    continue;
                }
            }


        }
    }

    cout<<"Not Connected "<<endl;
    return;

}

int main()
{
    int v ,e;
    cin>>v>>e;
    vector<int>a[v];
    for(int i = 0 ;i <e;i++)
    {
        int f,s;
        cin>>f>>s;
        a[f].push_back(s);
        a[s].push_back(f);
    }

    int src , dst;
    cout<<"Enter Source and Destination "<<endl;
    cin>>src>>dst;
    printDist(a , v , src , dst);
    return 0;
}
