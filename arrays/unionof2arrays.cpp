//suppose array 1 is a1 and array 2 is a2      (BRUTE FORCE SOLUTION)
set<int> st;     //st is declared as a set since set doesn't store duplicate numbers
for(int i=0;i<n1;i++)
{ 
    st.insert(a1[i]);     //tc of this step is n1logn   where n is the size of the set
}
for(int i=0;i<n2;i++)
{
    st.insert(a2[i]);     //tc of this step is n2logn 
}
for(auto it:st){
    union.add(it);   //if union is declared as a vector  
}                    //TC of this step is O(n1+n2);

//space complexity of the above solution --> O(n1+n2)
//Optimal Solution

vector<int> sortedArray(vector <int> a, vector <int> b){     //Time complexity of this solution is O(n1+n2)                                                               //Space complexity --> O(n1+n2) which also we are using to return the value                                                                //we are not using that space to manipulate the array.
    int n1= a.size();
    int n2= b.size();
    int i=0;
    int j=0;
    vector<int> unionArr;
    while(i<n1 &&j<n2){
        if(a[i] <= b[j]){
            if(unionArr.size()==0 || unionArr.back() != a[i]){
                unionArr.push_back(a[i]);
            }
            i++;
        }
        else{
            if(unionArr.size()==0 || unionArr.back() != b[j]){
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }
    while(j<n2){
        if(unionArr.size() == 0 ||unionArr.back()!= b[j])
        {
            unionArr.push_back(b[j]);
        }
        j++;
    }
    while(i<n1){
        if(unionArr.size()==0 || unionArr.back() != a[i]){
            unionArr.push_back(a[i]);
        }
        i++;
    }
    return unionArr;
}
