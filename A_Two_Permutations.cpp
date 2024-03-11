// Two permutataions
// By analyzing the given options
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    // Two conditions 
    if(a+b >= n-1){
        // {1  1 1}
        if(a == n && b == n)cout<<"Yes";
        else cout<<"No";
    }
    else{
        cout<<"Yes";
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