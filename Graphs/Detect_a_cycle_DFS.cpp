#include<bits/stdc++.h>
using namespace std;

bool dfs(int node, int parent, int vis[], vector<int> adj[]){
    vis[node] = 1;
    for(auto adjacentnode: adj[node]){
        if(!vis[adjacentnode]){
            if(dfs(adjacentnode, node, vis, adj) == true)
            return true;
        }
        else if(adjacentnode != parent){
            return true;
        }
    }
    return false;
}

bool isCycle(int V, vector<int> adj[]){
    int vis[V] = {0};
    for(int i=0;i<V;i++){    //for connected components 
        if(!vis[i]){
            if(dfs(i,-1,vis,adj)==true) return true;
        }
    }
    return false;
}