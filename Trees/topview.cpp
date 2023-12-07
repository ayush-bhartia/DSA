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

vector<int> topView(TreeNode* root){
    vector<int> ans;
    if(root==NULL) return ans;
    queue<pair<TreeNode*, int>> q;
    map<int,int> mpp;                              // We use a map because it stores in ascending order and to get the top
    q.push({root,0});                              //view from left to right, we need to have line stored in ascending order.
    while(!q.empty()){
        auto it=q.front();
        q.pop();
        TreeNode* node = it.first;
        int line = it.second;
        if(mpp.find(line) == mpp.end()) mpp[line]=node->val;
        if(node->left){
            q.push({node->left,line-1});
        }
        if (node->right){
            q.push({node->right,line+1});
        }
    }
    for(auto it:mpp){
        ans.push_back(it.second);
    }
    return ans;
}