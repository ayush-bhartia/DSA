#include<bits/stdc++.h>
using namespace std;

bool detect(int src, vector<int> adj[], int vis[]){
    vis[src]=1;
    queue<pair<int,int>> q;
    q.push({src,-1});
    while(!q.empty()){
        int node= q.front().first;
        int parent= q.front().second;
        q.pop();

        for(auto adjacentnode : adj[node]){
            if(!vis[adjacentnode]){
                vis[adjacentnode]=1;
                q.push({adjacentnode,node});
            }
            else if(parent != adjacentnode){   //if the adjacent node is visited from before and its not equal to the parent node from where the pointer came then its a cycle.
                return true;
            }
        }
    }
    return false;
}

bool isCycle(int V, vector<int> adj[]){
    int vis[V]={0};
    for(int i=0;i<V;i++){     //this part is for if the graph comprises of connected components
        if(!vis[i]){
            if(detect(i,adj,vis)) return true;
        }
    }
    return false; 
}