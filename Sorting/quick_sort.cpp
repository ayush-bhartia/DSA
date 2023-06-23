#include<bits/stdc++.h>
using namespace std;

int partition(vector <int> &arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
    while(arr[i]<=pivot&& i<=high){
        i++;
    }   
    while(arr[j]>pivot&& j>=low){
        j--;
    }
    if(i<j)swap(arr[i],arr[j]);

}
swap(arr[low],arr[j]); return j;
}

void quick_sort(vector <int> &arr,int low, int high){
    if(low<high){
        int pIndex = partition(arr,low,high);
        quick_sort(arr,low,pIndex-1);
        quick_sort(arr,pIndex+1,high);
    }
    return;
}
int main(){
    int n,x;
    cin>>n;
    vector <int> arr;
    for(int i=0;i<n;++i){
        cin>>x;
        arr.push_back(x);
    }
    quick_sort(arr,0,n-1);
    for(auto i=arr.begin();i != arr.end();  i++) cout<<*i<<" ";
    return 0;
}