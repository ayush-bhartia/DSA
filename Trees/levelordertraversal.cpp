#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int val;
    Node *left;
    Node *right;
    Node(int x){
        left=nullptr;
        right=nullptr;
        val=x;
    }
};
class Solution{
    public:
    vector<vector<int>> levelOrder(Node *root){
        vector<vector<int>> ans;
        if(root==NULL)return ans;
        queue<Node *> q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int> level;
            for(int i=0;i<size;i++){
                Node *node= q.front();
                q.pop();
                if(node->left!=NULL)q.push(node->left);
                if(node->right!=NULL)q.push(node->right);
                level.push_back(node->val);
            }
            ans.push_back(level);
        }
        return ans;
    }
};