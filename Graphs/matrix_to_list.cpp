#include<bits/stdc++.h>
using namespace std;

void matrix_to_list(vector<vector<int>> adj){
int V;
cin>>V;
vector<int> adjLs[V];
for(int i=0;i<V;i++){
    for(int j=0;j<V;j++){
        if(adj[i][j]==1 && i!=j){
            adjLs[i].push_back(j);
            adjLs[j].push_back(i);
        }
    }
};
return;
}
