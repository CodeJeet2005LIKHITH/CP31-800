#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        int found = 0;
        for(int i=0; i < n; i++){
            cin>>arr[i];
            if(arr[i] == k){
                found = 1;
                continue;
            }
        }
        if(found)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
}