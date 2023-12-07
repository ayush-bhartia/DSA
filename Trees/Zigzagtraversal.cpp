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

vector<vector<int>> zigzagtraversal(TreeNode* root){
    vector<vector<int>> result;
    if(root==NULL){
        return result;
    }
    queue<TreeNode*> q;
    q.push(root);
    bool lefttoright=true ;                             //We maintain a boolean variable to alternate the direction of 
    while(!q.empty()){                                  //direction of traversal in a zigzag manner.
        int size=q.size();
        vector<int> row(size);
        for(int i=0;i<size;i++){
            TreeNode* node = q.front();
            q.pop();
            int index = (lefttoright) ? i : size-1-i;
            row[index]= node->val;
            if(node->left){
                q.push(node->left);                
            }
            if (node->right){
                q.push(node->right);
            }
        }
        lefttoright= !lefttoright;
        result.push_back(row);
    }
    return result;
}