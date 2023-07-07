#include<bits/stdc++.h>
using namespace std;

int longestArray(vector<int> a, long long k){       //better solution but optimal solution if the array has positives,negatives and zeros..
    map<long long,int> preSumMap;
    long long sum = 0;
    int maxLen=0;
    for(int i=0;i<a.size();i++){                    //TC --> O(nlogn)  or O(n*1) if we use unordered_map
            sum += a[i];                            // SC --> O(n)
            if(sum==k){
                maxLen = max(maxLen,i+1);  
            } 
            long long rem = sum-k;
            if(preSumMap.find(rem)!= preSumMap.end()){
                int len = i - preSumMap[rem];
                maxLen = max(maxLen,len);
            }
            if(preSumMap.find(sum) == preSumMap.end())    //if the array contains 0 elements in the array so 
            {                                             //we have to store the index of the first occurence of the sum in the map so that
                preSumMap[sum]=i;                         //we can calculate the length of the array from the first occurence of the sum to the current index 
            }                                             //and compare it with the maxLen so that its the maximum length of the array with sum k
        }   
        return maxLen;
}

//Optimal Solution if the array contains only positive elements and zeros
//two pointer approach
int longestSubArraywithK(vector<int> a,long long k){
    int left=0,right=0;
    long long sum= a[0];                                    //TC --> O(2N)                                                       
    int maxLen=0;                                           //SC --> O(1) 
    int n=a.size();
    while(right<n){
        while(left <=right && sum>k)
        {
            sum-=a[left];
            left++;
        }
        if(sum==k)
        {
            maxLen = max(maxLen,right-left+1);
        }
        right++;
        if(right<n) sum+=a[right];
    }

}