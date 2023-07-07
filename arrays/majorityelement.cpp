#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v){
    unordered_map<int,int>mpp;
    //O(NlogN) solution
    for(int i=0;i<v.size();i++){    //Time complexity of soln is O(nlogn)+O(n) = O(nlogn)
        mpp[v[i]]++;                //Space complexity of this solution is O(n) to store the map.
    }
    //O(N) solution
    for(auto it:mpp){
        if(it.second>(v.size()/2)){
            return it.first;
        }
    }
    return -1;
}

//Moore's Voting Algorithm (optimal solution)
int majorityElementf(vector<int> v){
    int cnt=0;
    int el;
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            el=v[i];
        }
        else if(el==v[i]){
            cnt++;
        }
        else{
            cnt--;
        }            
    }             // till here the time complexiry is O(n) and space complexity is O(1)
    int cnt1=0;
    for(int i=0;i<v.size();i++){
        if(v[i] == el) cnt1++;
    }               // time complexity is O(n)+O(n)and space complexity is O(1)
    if(cnt1>(v.size()/2)) return el;
    else return -1;
}