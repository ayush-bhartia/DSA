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

bool isSymmetricHelp(TreeNode* left,TreeNode* right){
    if(left==NULL||right==NULL) return left==right;   //if we reach the end of the tree at left that shld be also same with the right.
    if(left->val!=right->val) return false;    //if value of the node at which we are right now doesnot matches so the tree is not symmetric
    return isSymmetricHelp(left->left,right->right) && (left->right,right->left); //the mirror traversal should be same for  both the sides of the tree.
}

bool isSymmetric(TreeNode *root){
    return (root==NULL) || isSymmetricHelp(root->left,root->right);
}