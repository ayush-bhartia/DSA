#include<bits/stdc++.h>             //Better solution
using namespace std;
 
int longestConsecutiveSequence(vector<int> &nums){
    if (nums.size() ==0) return 0;
    sort(nums.begin(),nums.end());
    int n= nums.size();
    int lastsmaller = INT_MIN;
    int longest=1,cnt=0;

    for(int i=0;i<n;i++){
        if(nums[i]==(lastsmaller+1)){      //   TC--> O(N)  SC--> O(1)
            cnt++;
            lastsmaller=nums[i];
        }
        else if(lastsmaller != nums[i]){
            cnt=1;
            lastsmaller=nums[i];
        }
        longest = max(longest,cnt);
    }   
    return longest;
}


//Optimal Solution
int longestSuccessiveElements(vector<int>&a){
    int n=a.size();
    if(n==0) return 0;
    int longest = 1,cnt=0;
    unordered_set<int> st;
    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }
    for(auto it:st){                     //*If considered worst case then better solution is the optimal one.
        if(st.find(it-1)==st.end()){     //When collisions occurs worst case O(n)  TC--> O(N)
            cnt=1;                       //if O(1) then TC--> O(N) + O(N) = O(2N) = O(N)
            int x=it;                    //SC--> O(N) for storing set        
            while(st.find(x+1)!=st.end()){
                cnt=cnt+1;
                x=x+1;
            }
            longest= max(longest,cnt);

        }
    }
    return longest;
}
