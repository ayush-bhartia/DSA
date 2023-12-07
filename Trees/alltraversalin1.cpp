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

vector<int> preInPostTraversal(TreeNode* root){
    stack<pair<TreeNode*,int>> st;
    st.push({root,1});
    vector<int> pre,in,post;
    if(root==NULL) return;
    while(!st.empty()){
        auto it=st.top();
        st.pop();
        if(it.second==1){                                //Part of pre
            pre.push_back(it.first->val);                
            it.second++;                                 //Increment num from 1 to 2
            st.push(it);                                 //after increment push that node again into the stack
            if(it.first->left!=NULL){                    //Check for left node if any
                st.push({it.first->left,1});
            }
        }
        else if(it.second==2){                           //part of inorder 
            in.push_back(it.first->val);                 //Increment from 2 to 3
            it.second++;
            st.push(it);                                 //after increment push that node again into the stack
            if(it.first->right!=NULL){                   //Check for right node if any
                st.push({it.first->right,1});
            }
        }
        else{                                            //Dont push it back again if the num==3
            post.push_back(it.first->val);
        }
    }
}