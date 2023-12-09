#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x){
        val=x;
        left=nullptr;
        right=nullptr;
    }
};

vector<int> bottomView(TreeNode* root){
    vector<int> ans;
    if(root==NULL) return ans;
    map<int,int> mpp;
    queue<pair<TreeNode*,int>> q;
    q.push({root,0});
    while(!q.empty()){
        auto it = q.front();
        q.pop();
        TreeNode* node=it.first;
        int line = it.second;
        mpp[line]=node->val;                         //Here we overwrite the value of node val in line so 
        if(node->left != NULL){                      //that we get the bottomost node in a particular line.
            q.push({node->left,line-1});
        }
        if(node->right != NULL){
            q.push({node->right,line+1});
        }
    }
    for(auto it:mpp){
        ans.push_back(it.second);
    }
    return ans;
}