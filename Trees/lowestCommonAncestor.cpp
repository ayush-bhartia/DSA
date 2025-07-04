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

TreeNode* lowestCommonAncestor(TreeNode* root,TreeNode* p, TreeNode* q){
    //base case
    if(root==NULL||root==p||root==q){
        return root;
    }
    TreeNode* left= lowestCommonAncestor(root->left,p,q);
    TreeNode* right= lowestCommonAncestor(root->right,p,q);

    //result
    if(left==NULL) return right;
    else if (right==NULL) return left;
    else{   //if both left and right are not null , we found our result
        return root;    
    }

}