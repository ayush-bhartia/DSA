#include<bits/stdc++.h>
using namespace std;

void recurPermute(vector<int> &nums,int freq[],vector<int> &ds,vector<vector<int>> &ans){
    if(ds.size() == nums.size()){
        ans.push_back(ds);
        return;
    }
    for(int i=0;i<nums.size();i++){
        if(!freq[i]){
            ds.push_back(nums[i]);
            freq[i]=1;
            recurPermute(nums,freq,ds,ans);
            freq[i]=0;
            ds.pop_back();
        }
    }
}

vector<vector<int>> permute(vector<int> &nums){
    vector<vector<int>> ans;
    vector<int> ds;
    int freq[ans.size()];
    for(int i=0;i<nums.size();i++)freq[i]=0;
    recurPermute(nums,freq,ds,ans);
    return ans;
} 