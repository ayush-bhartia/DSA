#include<bits/stdc++.h>
using namespace std;
private:

bool dfs(int node, int color, vector<int>col[], vector<int> adj[]){
    col[node]=color;

    for(auto it: adj[node]){
        if(col[it]==-1){
            if(dfs(it, !color, col, adj)==false) return false;
        }
        else if(col[it]== col[node]){
            return false;
        }
    }
    return true;
}
public:

bool isBipartite(int V, vector<int>adj[]){
    int color[V];
    for(int i=0;i<V;i++) color[i]=-1;
    for(int i=0;i<V;i++){
        if(color[i]==-1){
            if(dfs(i,0 , colour, adj)==false) return false;
        }
    }
    return true;
}