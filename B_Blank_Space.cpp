#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n,0);
    int length = 0;
    int maxi = 0;
    for(int i=0; i < n; i++){
        cin>>arr[i];
        if(arr[i] == 0){
            length++;
            maxi = max(length,maxi);
        }
        else{
            length=0;
        }
    }
    cout<<maxi;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
        cout<<endl;
    }
}