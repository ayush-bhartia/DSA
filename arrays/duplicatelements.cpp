#include<bits/stdc++.h>
using namespace std;

int main(){            //Brute force method
    int n;                                                  //Time complexity: o(NlogN)+O(N) this last n wala part is written for the index wala part
    cin>>n;                                                 //Space complexity: O(N)
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    set<int> st;     //Defining a set data structure
    for(int i=0;i<n;i++) st.insert(arr[i]);  //Inserting elements in a set, removes duplicates and the set always stores 
    int index=0;                             //elements in sorted order
    for(auto it:st) arr[index++]=it; // This is a cool way to copy elements from a set to an array
    for(int i=0;i<index;i++) cout<<arr[i]<<" ";
    return 0;
}

//Optimal solution (two pointer approach)
// i=0;
// for(j=1;j<n;j++)                     //Time complexity: O(N) 
// {                                    //Space complexity: O(1)
//     if(arr[j]!=arr[i]){
//         arr[i+1]=arr[j];
//         i++;
//     }
// }return i+1;

