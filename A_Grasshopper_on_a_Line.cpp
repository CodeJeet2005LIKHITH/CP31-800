#include<bits/stdc++.h>
using namespace std;
void solve(){
    int x,k;
    cin>>x>>k;
    int count=0;
    while(true){
        if(x%k != 0){
            count++;
            cout<<count<<endl;
            break;
        }
        else{
            while(x%k == 0){
                count++;
                x--;
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