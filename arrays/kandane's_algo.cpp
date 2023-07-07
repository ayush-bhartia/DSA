#include<bits/stdc++.h>    //Optimal Solution kadane's Algorithm
using namespace std;

long long maxSubarraySum(int arr[],int n){
    long long sum = 0,maxi = LONG_MIN;
    //int ansStart,ansEnd,start;
    for(int i=0;i<n;i++){
       //if(sum==0) start=i;     //Line 7 and 12 are to be added if we have to print the subarray with maximum sum
        sum += arr[i];

        if(sum>maxi){
            maxi = sum;
            //ansStart=start;ansEnd=i;    //TC --> O(n)
                                          //SC --> O(1)
        }
        if(sum < 0){
            sum = 0;
        }
    }
    if(maxi<0){
        return arr[0];
    }
}