#include<bits/stdc++.h>
using namespace std;                    //Dynamic programming approach

int main(){
    vector<int> a;
    int n;
    int maxProfit = 0, minPrice = a[0],profit;
    for(int i=1;i<n;i++){
        int cost= a[i]-minPrice;                   // T.C --> O(n)
                                                   //  S.C --> O(1)
        maxProfit=max(maxProfit,cost);
        minPrice=min(minPrice,a[i]);
    }
    return maxProfit;
}
