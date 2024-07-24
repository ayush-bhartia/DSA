#include<bits/stdc++.h>
using namespace std;

void dfs(int node,vector<int> adjLs[], int vis[]){
    vis[node]=1;
    for(auto it: adjLs[node]){
        if(!vis[node]){
            dfs(it, adjLs, vis);
        }
    }
}

int number_of_provinces(vector<int> adjLs[], int V){
    int vis[V]={0};
    int cnt=0;
    for(int i=0;i<V;i++){
        if(vis[i]==0){
            cnt++;
            dfs(i,adjLs,vis);
        }
    }
    return cnt;
}