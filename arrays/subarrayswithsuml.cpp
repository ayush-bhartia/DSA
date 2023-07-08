#include<bits/stdc++.h>
using namespace std;

int subArraysCount(vector<int> &arr,int k){
    unordered_map<int,int> mpp;
    int cnt=0,preSum=0;
    // TC --> O(N x log N) log n for unordered map
    // SC --> O(N)
    for(int i=0;i<arr.size();i++){
        preSum+=arr[i];
        int remove=k-preSum;
        cnt+=mpp[remove];
        mpp[preSum]++;
    }
    return cnt;
}