#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k,x;
    cin>>n>>k>>x;
    if(n%k != x)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
        cout<<endl;
    }
}