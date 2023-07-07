#include<bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &A,int n,vector<int> &B,int m){
        int i=0;
        int j=0;
        vector <int> ans;                           //Time complexity of soln is O(n1+n2)
        while(i<n&&j<m){                            //Space complexity of this solution is O(1) and O(n1+n2) in the worst case to store and return the ans.
            if(A[i]<B[j]){
                i++;
            }
            else if(A[i]>B[j]){
                j++;
            }
            else{
                ans.push_back(A[i]);
                i++;
                j++;
            }

        }
        return ans; 
}
