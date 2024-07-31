#include<bits/stdc++.h>
using namespace std;

private: 

void dfs(int row, int col, vector<vector<int>> &vis, vector<vector<char>> &mat, int delrow[], int delcol[]){
    vis[row][col]=1;
    int n= mat.size();
    int m= mat[0].size();
    for(int i=0;i<4;i++){
        int nrow = row+ delrow[i];
        int ncol = col+ delcol[i];
        if( nrow<n && nrow>=0 && ncol<m && ncol>=0 && !vis[nrow][ncol] && mat[nrow][ncol] == 'O')
        {
            dfs(nrow, ncol, vis, mat,delrow, delcol);
        }
    }
    
    
}

    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0; i<m ;i++){
            
            //for first row
            if(!vis[0][i] && mat[0][i] == 'O')
            {
                dfs(0,i,vis,mat, delrow, delcol);
            }
            
            //for last row
            if(!vis[n-1][i] && mat[n-1][i] == 'O'){
                dfs(n-1,i,vis,mat, delrow, delcol);
            }
        }
        
        
        for(int j=0; j<n; j++){
            //for first column
            if(!vis[j][0] && mat[j][0] == 'O'){
                dfs(j, 0, vis, mat, delrow, delcol);
            }
            //for last column
            if(!vis[j][m-1] && mat[j][m-1] == 'O'){
                dfs(j, m-1, vis, mat, delrow, delcol);
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && mat[i][j] == 'O')
                mat[i][j]='X';
            }
        }
        return mat;
         
    }