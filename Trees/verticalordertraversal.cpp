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

vector<vector<int>> verticalTraversal(TreeNode* root){
    map<int, map<int,multiset<int>>> nodes;       //We use the  first map for node, second inner map for level and third multiset 
    queue<pair<TreeNode*,pair<int,int>>> todo;    //for multiple nodes in a particular level and not set because we can have similar nodes in a particular level.
    todo.push({root,{0,0}});
    while(!todo.empty()){
        auto p = todo.front();
        todo.pop();
        TreeNode* node=p.first;
        int x=p.second.first,y=p.second.second;
        nodes[x][y].insert(node->val);
        if(node->left){
            todo.push({node->left,{x-1,y+1}});
        }
        if(node->right){
            todo.push({node->right,{x+1,y+1}});
        }
    }
    vector<vector<int>> ans;     
    for(auto p:nodes){
        vector<int> col;
        for(auto q : p.second){
            col.insert(col.end(),q.second.begin(),q.second.end());
        }
        ans.push_back(col);
    }
    return ans;
}