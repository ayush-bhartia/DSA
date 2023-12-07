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

int maxDepth(TreeNode * root){
    if(root ==NULL) return 0;

    int lh = maxDepth(root->left);
    int lr = maxDepth(root->right);
    return 1+max(lh,lr);
}