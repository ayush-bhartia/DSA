#include<bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll> cutArray(vector<ll> &arr,int index,int n){
    int k=0;vector<ll> ans;
    for(int i=0;i<n;i++){
        if(i==index){
            ans[k]=arr[i-1]+arr[i+1];
            i=index+1;
            k++;
        }
        else{
            ans[k]=arr[i];
            cout<<k<<"index"<<n<<"n..."<<endl;
            k++;
        }
    }
    k=0;
    return ans;
}

vector<ll> calculate(vector<ll> &arr,int n){
    int maxi=arr[0],index=0,sum=0;
    while(n!=1){
    for(int i=0;i<n;i++){
        if(i==n-1){
            sum=arr[i];
            maxi=max(sum,maxi);
            index=i;
        }
        else{
            sum=arr[i-1]+arr[i+1];
            maxi=max(sum,maxi);
            index=i;
        }
        arr=cutArray(arr,index,n);
        index=0;
        n--;
    }}
    return arr;
    
}
int main(){
    int t,n;
    // cin>>t;
    // for(int i=0;i<t;i++){
        vector<ll> arr;
        cin>>n;
        ll a[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
            arr.push_back(a[j]);
        }
        arr=calculate(arr,n);
        for(auto ele:arr){
            cout<<ele<<" xyz ";
        }
    // }
    return 0;
}
