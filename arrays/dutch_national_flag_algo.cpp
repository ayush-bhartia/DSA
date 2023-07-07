#include<bits/stdc++.h>
using namespace std;         //To sort 0's,1's and 2's in an array without using any extra space

void sortArray(vector<int> &arr,int n){
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;mid++;
        }
        else if (arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}