#include<bits/stdc++.h>
using namespace std;

vector<int> dfs(int V, vector<int> adj[])
{
    int vis[V]={0};
    int start=0;   //starting node
    vector<int> ls;    //list to store dfs list
    Calcdfs(start, adj, vis, ls);
    return ls;
}

void Calcdfs(int node, vector<int> adj[], int vis[], vector<int> &ls){
    vis[node]=1;               //marking the current node to be true since it is visited
    ls.push_back(node);        //pushing the current node in the list.
    //traverse all its neighbours
    for(auto it:adj[node]){    
        if(!vis[it]){
            Calcdfs(it,adj,vis,ls);     //recursive call to go into the depth
        }
    }
}