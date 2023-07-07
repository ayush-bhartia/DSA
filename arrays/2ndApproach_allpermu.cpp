#include<bits/stdc++.h>   //without using any extra space
using namespace std;

void recurPermute(vector<int> &nums, int index, vector<vector<int>> &ans){
    if(index == nums.size()){
        ans.push_back(nums);    //base case
        return;
    }
    for(int i=index;i<nums.size();i++){
        swap(nums[i],nums[index]);  //we swap to get the permutation
        recurPermute(nums,index+1,ans);  //after every iteration, we need to move to the next index
        swap(nums[i],nums[index]); //we need to swap back to the original array
    }
}

vector<vector<int>> permute(vector<int> &nums){
    vector<vector<int>> ans;
    recurPermute(nums,0,ans);                       //TC --> O(n*n!)
    return ans;                                     //SC --> O(n)
}

