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

vector<int> leftRightSideView(TreeNode* root, int level, vector<int> &res){
    if(root==NULL) return;
    if(res.size()==level) res.push_back(root->val);    //Becoz for a particular level we will hit the rightmost node for the first time
    leftRightSideView(root->right,level+1,res);     //For a leftside view, just interchange line no 18 and 19
    leftRightSideView(root->left,level+1,res);
}