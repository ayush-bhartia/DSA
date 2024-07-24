#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x){
        data=x;
        left=nullptr;
        right=nullptr;
    }
};

int timetoBurn(TreeNode<int>* root, int start){
    map<TreeNode<int>*, TreeNode<int>*> mpp;

}