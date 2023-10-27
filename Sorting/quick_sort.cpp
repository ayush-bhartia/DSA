#include<bits/stdc++.h>
using namespace std;

int partition(vector <int> &arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
    while(arr[i]<=pivot && i<=high){
        i++;
    }   
    while(arr[j]>pivot&& j>=low){
        j--;
    }
    if(i<j)swap(arr[i],arr[j]);

}
swap(arr[low],arr[j]); return j;
}

void quick_sort(vector <int> &arr,int low, int high){
    if(low<high){
        int pIndex = partition(arr,low,high);
        quick_sort(arr,low,pIndex-1);
        quick_sort(arr,pIndex+1,high);
    }
    return;
}
int main(){
    int n,x;
    cin>>n;
    vector <int> arr;
    for(int i=0;i<n;++i){
        cin>>x;
        arr.push_back(x);
    }
    quick_sort(arr,0,n-1);
    for(auto i=arr.begin();i != arr.end();  i++) cout<<*i<<" ";
    return 0;
}


/*
#include<bits/stdc++.h> // Include necessary C++ libraries.

using namespace std;

int partition(vector <int> &arr, int low, int high){
    int pivot = arr[low]; // Choose the pivot element as the first element in the array.
    int i = low; // Initialize a variable i to the low index.
    int j = high; // Initialize a variable j to the high index.

    // While loop to rearrange elements around the pivot.
    while(i < j){
        while(arr[i] <= pivot && i <= high){
            i++; // Move i to the right until an element greater than the pivot is found.
        }
        while(arr[j] > pivot && j >= low){
            j--; // Move j to the left until an element less than or equal to the pivot is found.
        }
        if(i < j){
            swap(arr[i], arr[j]); // Swap the elements at positions i and j if i < j.
        }
    }

    swap(arr[low], arr[j]); // Swap the pivot element with the element at index j.
    return j; // Return the index of the pivot element after partitioning.
}

void quick_sort(vector <int> &arr, int low, int high){
    if(low < high){
        int pIndex = partition(arr, low, high); // Calculate the partition index.
        quick_sort(arr, low, pIndex - 1); // Recursively sort the left subarray.
        quick_sort(arr, pIndex + 1, high); // Recursively sort the right subarray.
    }
    return; // Return when the subarray is sorted.
}

int main(){
    int n, x;
    cin >> n; // Input the number of elements in the array.
    vector <int> arr; // Create a vector to store the elements.

    // Input the elements and add them to the vector.
    for(int i = 0; i < n; ++i){
        cin >> x;
        arr.push_back(x);
    }

    quick_sort(arr, 0, n - 1); // Call the quick_sort function to sort the array.

    // Output the sorted array.
    for(auto i = arr.begin(); i != arr.end(); i++){
        cout << *i << " ";
    }

    return 0; // Return 0 to indicate successful execution.
}

*/