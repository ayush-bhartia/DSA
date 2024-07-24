#include<bits/stdc++.h>
using namespace std;

int main(){                     //For an undirected graph 
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];               //Incase of a weighted graph, store pairs with values of weights as second parameter
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);      // because u is a neighbour of v
        adj[v].push_back(u);     //because v is a neighbour of u
    }
    return 0;
}


// int main(){                          //For a directed graph
//     int n,m;
//     cin>>n>>m;
//     vector<int> adj[n+1];
//     for(int i=0;i<m;i++){
//         int u,v;
//         // u------>v
//         cin>>u>>v;
//         adj[u].push_back(v);      
//         //adj[v].push_back(u);       
//     }
//     return 0;
// }