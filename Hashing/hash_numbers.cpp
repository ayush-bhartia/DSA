#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // for precompute we need a hash method
    int hashh[13] ={0};     //over here we need to take the maximum size of the array as stated
    for(int i=0;i<n;i++){
        hashh[arr[i]] +=1; 
    }

    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        //fetch method 
        cout<<hashh[number]<< endl;
    } 
    return 0;
}