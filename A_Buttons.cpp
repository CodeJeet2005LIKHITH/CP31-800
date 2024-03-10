#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a == b){
        if(c%2 != 0)cout<<"First";
        else cout<<"Second";
    }
    else{
        if(a > b)cout<<"First";
        else cout<<"Second";
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