#include<bits/stdc++.h>
using namespace std;

bool possible(vector<int> &arr,int day,int m,int k){
    int cnt=0;
    int noofB=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<=day){
            cnt++;
        }
        else{
            noofB+=(cnt/k);
            cnt=0;
        }
    }
    noofB+=(cnt/k);
    return (noofB>=m);
}
int roseGarden(vector<int> arr, int roses, int bouquet){
    int low=1,high=INT_MAX,ans=0;
    long long val = roses*1LL*bouquet*1LL;
    if(val>arr.size())return -1;
    int mini=INT_MAX,maxi=INT_MIN;
    for(int i=0;i<arr.size();i++){
        mini=min(mini,arr[i]);
        maxi=max(maxi,arr[i]);
    }
    int low=mini,high=maxi;
    while(low<=high){
        int mid=(high+low)/2;
        if(possible(arr,mid,roses,bouquet)){
            high=mid-1;
            ans=mid;
        }
        else 
        low=mid+1;
    }
    return low;          //here you can return low or ans anyone would suffice.
}