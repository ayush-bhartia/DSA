#include<bits/stdc++.h>
using namespace std;

vector<int> generateRow(int row){
    long long ans=1;
    vector<int> ansRow;
    ansRow.push_back(1);
    for(int col=0;col<row;col++){
        ans = ans*(row-col);
        ans = ans/(col);
        ansRow.push_back(ans);
    }
    return ansRow;
}
vector<vector<int>> pascalTriangle(int N){
    vector<vector<int>> ans;
    for(int i=0;i<=N;i++){
        ans.push_back(generateRow(i));
    }
    return ans;
}