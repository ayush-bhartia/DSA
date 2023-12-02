#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    public:
    int val;
    TreeNode* right;
    TreeNode* left;
    TreeNode(int x){
        val=x;
        right=nullptr;
        left=nullptr;
    }
};

vector<int> preOrderTraversal(TreeNode* root){
    vector<int> preorder;
    if(root==NULL) return preorder;
    stack<TreeNode*> st;
    st.push(root);
    while(!st.empty()){
        TreeNode* node = st.top();
        st.pop();
        preorder.push_back(node->val);
        if(node->right!=NULL) st.push(node->right);
        if(node->left!=NULL) st.push(node->left);
    }
    return preorder;
}