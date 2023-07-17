#include<bits/stdc++.h>
using namespace std;

int lowerBound(int n,int arr[],int value){              //TC--> 
    int low=0,high=n,ans=n; 
    while(low<=high){
        int mid=(low+high)/2;
        //maybe an answer
        if(arr[mid]>=value) //Look for more values on left
        {
            high=mid-1;
            ans=mid;
        }
        else
            low=mid+1;  //Look for right
    }
    return ans;
}

//C++ STL
//lower_bound(start,end,value) --> returns the address of the first
//lower_bound(arr.begin(),arr.end(),x); element which is greater than or equal to the value


// for finding out the array
// subtract (lower_bound(start,end,value)-arr.begin())