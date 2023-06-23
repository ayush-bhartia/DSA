#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n){               //bubble sort function
    int temp=0;                                    //We have used didSwap because of optimization of algo to reduce time complexity
    for(int i=0;i<n-1;i++){                        //here we are using didSwap becoz suppose the given array is alrdy sorted so the 
        int didSwap=0;                                 //program doesnt need to run so many times thereby occupying space and time.
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){                        //for the worst and average case we have time complexity as O(n2)
                temp=arr[j];                            //and for best case we have it as O(n) a linear time complexity.
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                didSwap=1;
            }
        }
        if(didSwap==0) break;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n]; 
    for(int i=0;i<n;i++) cin>>arr[i];
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){       //printing the array
        cout<<arr[i]<<endl;
    }
    return 0;       
}