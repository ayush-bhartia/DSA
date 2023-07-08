#include<bits/stdc++.h>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>> &mat){
    int n=mat.size();
    int m=mat[0].size();
    int top=0,bottom=n-1,left=0,right=m-1;
    vector<int> ans;

    while(left<=right && top<=bottom){
    //right
    for(int i=left;i<=right;i++){
        ans.push_back(mat[top][i]);
    }
    top++;
    //bottom
    for(int i=top;i<=bottom;i++){
        ans.push_back(mat[i][right]);
    }
    right--;
    //left
    if(top<=bottom){   //Checking for end cases
        for (int i=right; i >= left; i--) {
        ans.push_back(mat[bottom][i]);
        }
        bottom--;
    }
    //top
    if(left<=right){   //Checking for end cases
        for (int i = bottom; i >= top; i--) {
        ans.push_back(mat[i][left]);
        }
        left++;
    }
}
return ans;
}