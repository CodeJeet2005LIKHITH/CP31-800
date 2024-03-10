#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n,0);
    int nc = 0;
    int pc = 0;
    for(int i=0; i < n; i++){
        cin>>arr[i];
        if(arr[i] == -1)nc++;
        else pc++;
    }
    // cout<<nc;
    // cout<<pc;
    int steps = 0;

    while(pc < nc){
        steps++;
        nc--;
        pc++;
    }
    
        if(nc%2 == 1){
        steps++;
    }
    cout<<steps;

}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
        cout<<endl;
    }
}