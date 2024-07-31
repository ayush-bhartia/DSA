#include<bits/stdc++.h>
using namespace std;

bool dfs(int node, vector<int> adj[], int vis[], int pathVis[])
  {
      vis[node]=1;
      pathVis[node]=1;
      
      for(auto it: adj[node])
      {
          if(!vis[it]){
              if(dfs(it, adj, vis, pathVis)==true) return true;
          }
          else if(pathVis[it]){  // if the node is pathVisited and is already visited then the cycle is confirmed
              return true;
          }
      }
      pathVis[node]=0;  //while moving back the node must be undone in pathVisited.
      return false;
  }
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        int vis[V]={0};
        int pathVis[V]={0};
        
        for(int i=0;i<V;i++){  //for the connected components
            if(!vis[i]){
                if(dfs(i, adj, vis, pathVis)==true) return true;
            }
        }
        return false;
    }