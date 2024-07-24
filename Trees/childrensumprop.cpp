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

void chngeTree(TreeNode* root){
    int child=0;
    if(root==NULL) return;
    if(root->left){
        child+=root->left->val;
    }
    if(root->right){
        child+=root->right->val;
    }
    if(child>=root->val) root->val=child;
    else{
        if(root->left) root->left->val=root->val;
        else if(root->right) root->right->val=root->val;
    }

    chngeTree(root->left);
    chngeTree(root->right);

    int tot=0;
    if(root->left) tot+=root->left->val;
    if(root->right) tot+=root->right->val;
}   