// Observing testcases
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n,0);
    for(int i=0; i < n; i++)cin>>arr[i];
    // Traverse through the array if you find arr[i] <= arr[i-1] push other one
    vector<int>res;
    res.push_back(arr[0]);
    for(int i=1; i < n; i++){
        if(arr[i-1] > arr[i]){
            res.push_back(arr[i]);
            res.push_back(arr[i]);
        }
        else{
            res.push_back(arr[i]);
        }
    }
    cout<<res.size()<<endl;
    for(int i=0; i < res.size(); i++)cout<<res[i]<<" ";
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
        cout<<endl;
    }
}