#include<bits/stdc++.h>   //Brute force solution
using namespace std;

vector<int> RearrangeArray(vector<int>& nums){
    int n= nums.size();
    vector<int> ans(n,0);
    int posInde=0;int negIndex=1;
    for(int i=0;i<n;i++){
        if(nums[i]<0){
            ans[negIndex]=nums[i];
            negIndex+=2;                            //TC --> O(N) SC --> O(N)
        }
        else                                        
        {
            ans[posInde]=nums[i];
            posInde+=2; 
        }
    }
    return ans;
}

//Optimal solution for unequal positive and negative numbers

vector<int> alternateNumbers(vector<int> &a){
    vector<int> pos,neg;
    int n=a.size();
    for(int i=0;i<n;i++){
        if(a[i]>=0) pos.push_back(a[i]);
        else
        neg.push_back(a[i]);
    }
    if(pos.size()>neg.size()){
        for(int i=0;i<neg.size();i++){
            a[2*i]=pos[i];
            a[2*i+1]=neg[i];
        }
        int index=2*neg.size();
        for(int i=neg.size();i<pos.size();i++){
            a[index]=pos[i];
            index++;
        }
    }
    else{
        for(int i=0;i<pos.size();i++){
            a[2*i]=pos[i];
            a[2*i+1]=neg[i];
        }
        int index=2*pos.size();
        for(int i=pos.size();i<neg.size();i++){
            a[index]=neg[i];
            index++;
        }
    }
return a;
}
