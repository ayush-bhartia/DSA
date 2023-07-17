#include<bits/stdc++.h>
using namespace std;

int floorSqrt(int n){
    int low = 1, high = n, ans = -1;
    while(low<=high){
    long long mid=(low+high)/2;
    long long sq=mid*mid;
    if(sq<=n){
        low=mid+1;
    }
    else{
        high=mid-1;
    }

    }
    return high;
}

//Optimal Solution
int func(int n,int mid,int m){
    int ans=1;
    for(int i=1;i<m;i++){
        ans*=mid;                                   //return 2 if ans>m  (overflow optimisation)
        if(ans>m){                                  //return 1 if ans==m
            return 2;                               //return 0 if ans<m
        }
    }
    if(ans==m)
        return 1;
    return 0;
}

int NthRoot(int n,int m,int){
    int ans;
    int low=1,high=n,mid;
    while(low<=high){
        mid=(low+high)/2;
        int midN=func(n,mid,m);
        if(midN==1){
            return mid;
        }
        else if(midN==0){
            low=mid+1;
        }
        else high=mid-1;
    }
    return -1;
}