#include<bits/stdc++.h>
using namespace std;                    //variety one telling yes or no

string read(int n, vector<int> book,int target){    //two pointer approach
    int left,right=n-1;
    sort(book.begin(),book.end());
    while(left<right){
        int sum=book[left]+book[right];      //TC --> O(N) + O(NlogN) = O(NlogN)
        if(sum==target){
            return "YES";
        }
        else if(sum>target){
            right--;
        }
        else{
            left++;
        }
        
    }return "NO";
}

int main(){
    int n,target;
    cin>>n>>target;
    vector<int> book(n);
    for(int i=0;i<n;i++){
        cin>>book[i];
    }
    cout<<read(n,book,target);
    return 0;
}
 //variety two telling the indices of the two books
//Most (OPTIMAL) solution using map for variety two telling indices of the two books
// #include<bits/stdc++.h>
// using namespace std;
    vector <int> twoSum(vector<int> &nums, int target) {
    map<int,int> mpp;
    int n=nums.size();                              //TC --> O(N) + O(NlogN) = O(NlogN)
    for(int i=0;i<n;i++){                           //SC --> O(N) for map usage
        int num=nums[i];
        int rem=target-num;
        if(mpp.find(rem) != mpp.end())              //if the rem is found in the map then return the indices of the num and rem
            return {mpp[rem],i};
        mpp[num]=i;
    } 
    return {-1,-1};
}
    
