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
        if(root==NULL)return ans;     //Corner edge case if the node root is itself empty
        queue<Node* > q; 
        q.push(root);                 //pushing the node root first in the queue
        while(!q.empty()){
            int size=q.size();         // it gives the size of a particular level 
            vector<int> level;         // We'll store all the node of a particular level in this vector to be further pushed into ans vector
            for(int i=0;i<size;i++){      //iterated through a particular level
                Node *node= q.front();      //One node is taken out of the queue to be checked if it has any children node
                q.pop();
                if(node->left!=NULL)q.push(node->left);
                if(node->right!=NULL)q.push(node->right);
                level.push_back(node->val);
            }
            ans.push_back(level);           //Pushing a particular level in ans vector
        }
        return ans;
    }
};