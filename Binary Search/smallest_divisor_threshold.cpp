#include<bits/stdc++.h>
using namespace std;

int sumbyD(vector<int> &arr, int div){
    int sum=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        sum+=ceil(arr[i]/div);
    }
    return sum;
}
int smallestDivisor(vector<int> &arr, int threshold){
    int low=1, high= *max_element(arr.begin(), arr.begin());
    while(low<=high){
        int mid=(low+high)/2;
        if(sumbyD(arr,mid)<=threshold){
            high =mid -1;
        }
        else{
            low=mid+1;
        }
    }
}