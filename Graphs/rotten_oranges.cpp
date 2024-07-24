#include<bits/stdc++.h>
using namespace std;

int orangesRotting(vector<vector<int>> &grid){
    int n=grid.size();
    int m=grid[0].size();
    //{{row,column},time} 
    queue<pair<pair<int,int>,int>> q;
    vector<vector<int>> vis;
    for(int i=0;i<n;i++){    //first we need to store all the rotten oranges
        for(int j=0;j<m;j++){
            if(grid[i][j]==2){
                q.push({{i,j},0});
                vis[i][j]=2;       //here we give visited array a number of 2 if the orange is alrdy rottened so that we ---
            }                      // ---  never check the same node while in bfs
            else{
                vis[i][j]=0;
            }

        }
    }
    int tm=0;
    int delrow[]={-1,0,1,0};
    int delcol[]={0,+1,0,-1};
    while(!q.empty()){
        int r=q.front().first.first;
        int c=q.front().first.second;
        int t=q.front().second;
        tm=max(tm,t);
        q.pop();
        for(int i=0;i<4;i++){
            int nrow= r+ delrow[i];
            int ncol= c+ delcol[i];
            if(nrow<n && nrow>=0 && ncol>=0 && ncol<m && vis[nrow][ncol]!=2 && grid[nrow][ncol]==1){
                q.push({{nrow,ncol},t+1});
                vis[nrow][ncol]=1;
            }
        }

    }
    for(int i=0;i<n;i++){     //checking for any leftover fresh orange in the grid, if yes then we return -1
        for(int j=0;j<m;j++){
            if(vis[i][j]!=2 && grid[i][j]==1){
                return -1;
            }
        }
    }
    return tm;    
}