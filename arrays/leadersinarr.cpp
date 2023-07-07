#include<bits/stdc++.h>
using namespace std;

vector<int> superiorElements(vector<int> &a){
    vector<int>ans;
    int maxi=INT_MIN;
    int n=a.size();
    for(int i=n-1;i>0;i--){
        if(a[i]>maxi){
            ans.push_back(a[i]);
        }
        //keeping the track of right max element
        maxi=max(maxi,a[i]);
    }
    //O(NlogN)
    sort(ans.begin(),ans.end());    
}