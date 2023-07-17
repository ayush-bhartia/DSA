#include<bits/stdc++.h>
using namespace std;

int findMax(vector <int> &v){                         //finding the maximum element in the vector
    int maxi= INT_MIN,maxi;
    for(int i=0;i<v.size();i++){
        maxi = max(maxi,v[i]);
    }
    return maxi;
}
int calculateTotalHours(vector<int> v,int k){         //returns the total hours of the pile if to be completed
    int totalH=0;
    for(int i=0;i<v.size();i++){
        totalH+=ceil((double)v[i]/(double)k);
    }
    return totalH;
}
int minRate(vector<int> v,int h){                     //Returns the minimum rate at which the pile can be completed
    int low=1,high=findMax(v),ans;
    while(low<=high){
        int mid =(low+high)/2;
        int totalH = calculateTotalHours(v,mid);            //O(n*log2maxelement)
        if(totalH<=h){
            ans=mid;
            high=mid-1;
        }
        else 
        low=mid+1;
    }
    return low;                                 //return ans or low if we want to return the minimum rate
}