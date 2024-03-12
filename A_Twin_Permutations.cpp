// Lets stick to the base case when it will be equal
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n,0);
    for(int i=0; i < n; i++)cin>>arr[i];
    for(int i=0; i < n; i++)cout<<n+1-arr[i]<<" ";
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
        cout<<endl;
    }
    
}