#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n){                  //the avg and the worst case time complexity is O(n2)
    for(int i = 0;i<n;i++){                             //the best case time complexity is O(n)
                                                        
        int j = i,temp;                                 

        while(j>0&&arr[j]<arr[j-1]){                    
            // temp=arr[j-1];
            // arr[j-1]=arr[j];
            // arr[j]=temp;
            swap(arr[j-1],arr[j]);                      
            j--;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    insertion_sort(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<endl;
    return 0;
}