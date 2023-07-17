#include<bits/stdc++.h>
using namespace std;

int iterativeBinarySearch(int arr[],int n,int value){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(mid==value)                                  
            return mid;
        else if(mid<value)
            low=mid+1;
        else
            high=mid-1;
        }
    return -1;
}

int recursiveBinarySearch(int value,int low,int high,int arr[]){
    if(low>high)
        return -1;                                      //TC --> O(log2N ) n log to the base 2
    int mid=(low+high)/2;
    if(arr[mid]==value)
    return mid;
    else if(arr[mid]<value)
        return recursiveBinarySearch(value,mid+1,high,arr);
    return recursiveBinarySearch(value,low,mid-1,arr);
}


