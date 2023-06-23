#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n){     //time complexity of this algo is O(n2) for best,avg and worst
    int min;
    for(int i=0;i<=n-2;i++){
        for(int j=i+1;j<n;j++){

            if(arr[i]>arr[j]){
                min=arr[i];
                arr[i]=arr[j];
                arr[j]=min;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}