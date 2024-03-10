// Parity means i think even,odd
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n,0);
    for(int i=0; i < n; i++)cin>>arr[i];
    // Making parity array
    vector<int>parr(n,0);
    for(int i = 0; i < n; i++){
        if(arr[i]%2)parr[i] = 1;
        else parr[i] = 0;
    }
    int count = 0;
    for(int i=1; i < n; i++){
        if(parr[i] == parr[i-1]){
            count++;
            int temp = arr[i]*arr[i-1];
            if(temp%2)parr[i] = 1;
            else parr[i] = 0;
        }
    }
    cout<<count;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
        cout<<endl;
    }
}