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

bool getPath(TreeNode* root, vector<int> &arr, int x){
    if(!root) return false;
    arr.push_back(root->val);
    if(root->val==x) return true;
    if(getPath(root->left, arr, x) || getPath(root->right,arr,x))
    return true;
    arr.pop_back();   //if both the left and the right calls of a particular node gives you a 
    return false;     //null value, pop the node value from the array and return.
    
}

vector<int> solve(TreeNode* root, int B){
    vector<int> arr;
    if(root==NULL)  return arr;
    getPath(root,arr,B);
    return arr;
    
}