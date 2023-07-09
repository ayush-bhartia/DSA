#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> triplet(vector<int> &num,int n){
    vector<vector<int>> ans;
    sort(num.begin(),num.end());                    //O(NlogN)
    for(int i=0;i<n;i++){                               //O(N^2)
        if(i>0 && num[i] == num[i-1]) continue;
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum= num[i]+num[j]+num[k];
            if(sum<0){
                j++;
            }
            else if(sum>0){
                k--;
            }
            else{                               //means the sum is equal to 0
                vector<int> temp= {num[i],num[j],num[k]};        //Total TC --> O(N^2)+O(NlogN)                ans.push_back(temp);
                j++;
                k--;
                while(j<k && num[j]==num[j-1]) j++;
                while(j<k && num[j]==num[k+1]) k--;
            }
    }
    return ans;
}