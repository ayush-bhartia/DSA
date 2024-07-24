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

int widthofaBT(TreeNode* root){
    if(!root) return 0;
    int left,right;
    int ans=0;
    queue<pair<TreeNode*, int>> q;
    q.push({root,0});
    while(!q.empty()){
        int size = q.size();
        int mmin=q.front().second;
        for(int i=0;i<size;i++){
            int curr_id= q.front().second-mmin;
            TreeNode* node = q.front().first;
            q.pop();
            if(i==0) left=curr_id;    //storing the leftmost index for the formula (last-first+1)
            if(i==size-1) right=curr_id;    //storing the rightmost index for the formula
            if(node->left) {         
                q.push({node->left, curr_id*2+1});
            }
            if(node->right){
                q.push({node->right, curr_id*2+2});
            }
        }
        ans = max(ans,right-left+1);
    }
    return ans;
}

