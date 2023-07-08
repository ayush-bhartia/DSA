#include<bits/stdc++.h>    //Optimal solution
using namespace std;       //No extra space is required

void rotateMatrix(vector<vector<int>> &matrix,int n,int m){
    int n=matrix.size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    //reverse
    //O(N*N/2)
    for(int i=0;i<n;i++){
        //row is mat[i];
        reverse(matrix[i].begin(),matrix[i].end());
    }
}