#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n,0);
    for(int i=0; i < n; i++)cin>>arr[i];
    vector<int>res;
    for(int i=0; i < arr.size(); i++){
        res.push_back(arr[i]);
        if(arr[i] != 1)res.push_back(arr[i]-1);
    }
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