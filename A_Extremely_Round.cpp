#include<bits/stdc++.h>
using namespace std;
void solve(){
    // Calculating the length of the given number
    long long n;
    cin>>n;
    string num= to_string(n);
    // cout<<num[0]<<endl;
   
    long long size = num.size();
   
    long long s = size-1;
    long long ans = (s)*9+num[0]-'0';
    cout<<ans;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
        cout<<endl;
    }
}