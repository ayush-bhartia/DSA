#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m){
    int col[m]={0};
    int row[n]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i]==1 || col[j]==1){
                matrix[i][j]=0;
            }
        }
    }
    return matrix;             //TC--> O(2*n*m) 
                               // SC--> O(n+m) This is where we need to optimize
}

//optimal solution
//set matrix to zeroes

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m){
    // int col[m]={0};  --> matrix[0][..]
    // int row[n]={0};  --> matrix[..][0]
    int col0=1;
    for(int i=0;i<n;i++){                          //In this loops we are marking the ref row and ref column
        for(int j=0;j<m;j++){    
            if(matrix[i][j]==0){
               //mark the i-th row
               matrix[i][0]=0;
               //mark the j-th column
               if(j!=0)    //we are here putting this condition because when we will be marking the first column, 
               matrix[0][j]=0;  ///    we will be marking the first row as well even if it does not contain any zero so we need to skip that part
               else
               col0=0;
            }
        }
    }
    for (int i = 1; i < n; i++){
        for(int j=1;j<m;j++){{
            if(matrix[i][j] !=0){
                if(matrix[i][j]!=0){
                    //Check for column and row
                    if(matrix[0][j] ==0 || matrix[i][0] ==0){
                        matrix[i][j]=0;
                    }
                }
            }
        }

        }
    }
    //check for first row
    if(matrix[0][0]==0){
        for(int j=0;j<m;j++){
            matrix[0][j]=0;             //TC --> O(2*n*m)
        }                               //SC --> O(1) jus one extra variable col0
    }
    if(col0==0){
        for(int i=0;i<n;i++){
            matrix[i][0]=0;
        }
    }
    return matrix;
}

