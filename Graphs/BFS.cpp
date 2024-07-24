#include<bits/stdc++.h>
using namespace std;

vector<int> bfsofgraph(int V, vector<int> adj[]){
    int n;     //n is the number of nodes
    int vis[n] = {0};
    vis[0]=1;
    queue<int> q;
    q.push(0);
    vector<int> bfs;

    while(!q.empty()){           //always take out something till its not empty  
        int node=q.front();      //always get the front node 
        q.pop();
        bfs.push_back(node);

        for(auto it: adj[node]){     //you check for neighbour nodes
            if(!vis[it]){
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    return bfs; 
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return 0;
}