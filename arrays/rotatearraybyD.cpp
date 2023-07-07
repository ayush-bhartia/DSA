#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n, int d){
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n); //Time complexity: O(N) Space complexity: O(1) on reversing the subparts and 
}                       //then merge them and then reverse the whole array gives the array as rotated by D

int main(){              //brute force method where we shift the first D elements to the end of the array
    int n;               //and the remaining elements to the front of the array
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    int d;cin>>d;
    // int temp[d];
    // for(int i=0;i<n;i++){
    //     if(i<d) temp[i]=arr[i];
    //     else arr[i-d]=arr[i];
    // }
    // for(int i=0;i<d;i++) arr[n-d+i]=temp[i];
    rotate(arr,n,d);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}


