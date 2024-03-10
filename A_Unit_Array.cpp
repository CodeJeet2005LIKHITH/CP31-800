#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n,0);
    int cn = 0;
    int count = 0;
    int sum = 0;
    for(int i=0; i < n; i++){
        cin>>arr[i];
        if(arr[i] < 0)cn++;
        sum+=arr[i];
        
    }
    if(cn%2 != 0){
        sum += 2;
        count++;
    }
    while(true){
        if(sum >= 0){
            cout<<count;
            break;
        }
        else{
            while(sum < 0){
                count++;
                sum += 2;
            }
        }
    }
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
        cout<<endl;
    }
}