#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int data;
    TreeNode* left, *right;
    TreeNode(int x){
        data=x;
        left=nullptr;
        right=nullptr;
    }
};

void markParents(TreeNode* root, unordered_map<TreeNode*, TreeNode*> &parent_track){
    queue<TreeNode*> queue;
    queue.push(root);
    while(!queue.empty()){
        TreeNode* current= queue.front();
        queue.pop();
        if(current->left){
            parent_track[current->left]= current;
            queue.push(current->left);
        }
        if(current->right){
            parent_track[current->right] = current;
            queue.push(current ->right);
        }
    }
}

vector<int> distanceK(TreeNode *root, TreeNode* target,int k){
    unordered_map<TreeNode* , TreeNode* >parent_track;   //node->parent for storing the parent of every node
    markParents(root, parent_track);
    unordered_map<TreeNode* , bool> visited;
    queue<TreeNode*> queue;
    queue.push(target);     //because we have to start the traversal from the target node itself.
    visited[target]=true;
    int distance=0;
    while(!queue.empty()){
        int size=queue.size();
        if(distance++==k)break;
        for(int i=0;i<size;i++){
            TreeNode* current=queue.front();
            queue.pop();
            if(current->left && !visited[current->left]){
                queue.push(current->left);
                visited[current->left]=true;
            }
            if(current->right&& !visited[current->right]){
                queue.push(current->right);
                visited[current->right]=true;
            }
            if(parent_track[current]&& !visited[parent_track[current]]){
                queue.push(parent_track[current]);
                visited[parent_track[current]]=true;
            }
        }
    }
    vector<int> result;
    while(!queue.empty()){
        TreeNode* current = queue.front();
        queue.pop();
        result.push_back(current->data);
    }
    return result;
}