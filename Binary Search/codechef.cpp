#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a,b,c=0;
    int arr[3];
    cin>>t;
    for(int i=0;i<t;i++){
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        for(int i=0;i<3;i++){
            b=arr[i];
            a=(arr[0]*arr[1]*arr[2])/arr[i];
            if(a%b==0){
                cout<<a<<" "<<b<<endl;
                c=1;
            }
        }
        c=0;
    }
    if(c==0)
        cout<<-1<<endl;
    return 0;
}