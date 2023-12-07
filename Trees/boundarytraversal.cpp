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

bool isLeaf(TreeNode* root){
    return !root->right && !root->left;
}

void addLeftBoundary(TreeNode* root,vector<int> &res){
    TreeNode* cur= root->left;
    while(cur){
        if(!isLeaf(cur)) res.push_back(cur->val);
        if(cur->left) cur=cur->left;
        else cur=cur->right;
    }
}

void addRightBoundary(TreeNode * root,vector<int> &res){
    TreeNode* cur= root->right;
    vector<int> temp;
    while(cur){
        if(!isLeaf(cur)) temp.push_back(cur->val);
        if(cur->right) cur=cur->right;
        else cur=cur->left;
    }
    for(int i=temp.size()-1;i>=0;i--){
        res.push_back(temp[i]);
    }
}

void addLeafNodes(TreeNode* root,vector<int> &res){
    if(isLeaf(root)){
        res.push_back(root->val);
        return;
    }
    if(root->left) addLeafNodes(root->left,res);
    if(root->right) addLeafNodes(root->right,res);
}

vector<int> printBoundary(TreeNode *root){
    vector<int> res;
    if(!root) return res;
    if(!isLeaf(root)) res.push_back(root->val);
    addLeftBoundary(root,res);
    addLeafNodes(root,res);
    addRightBoundary(root,res);
    return res;
}