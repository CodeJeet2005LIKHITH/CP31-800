// Highly Intutive
#include<bits/stdc++.h>
using namespace std;
int xorCheck(int arr[],int n){
    int p = 0;
    for(int i=0; i < n; i++)p ^= arr[i];
    // cout<<"p:"<<p<<endl;
    if(p == 0)return 0;
    else return p; 

}
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i < n; i++)cin>>arr[i];
    // Division between even and odd
    if(n%2 == 0){
        if(xorCheck(arr,n) == 0)cout<<1;
        else cout<<-1;
    }
    else{
        int p = xorCheck(arr,n);
        cout<<p;
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