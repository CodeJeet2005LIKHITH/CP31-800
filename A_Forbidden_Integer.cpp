// Basic Intution 
// You Can form any integer with the help of 1
// So you will find if x is blocked or not
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k,x;
    cin>>n>>k>>x;
    if(x != 1){
        cout<<"YES"<<endl;
        cout<<n<<endl;
        for(int i=1; i <= n; i++)cout<<1<<" ";
        cout<<endl;
    }
    else{
        if(k == 1)cout<<"NO"<<endl;
        else{
            if(n%2 == 0){
                cout<<"YES"<<endl;
                cout<<n/2<<endl;
                for(int i=1; i <= n/2; i++)cout<<2<<" ";
                cout<<endl;
            }
            else{
                if(k >= 3){
                    cout<<"YES"<<endl;
                    cout<<n/2<<endl;
                    for(int i=0; i < n/2-1; i++){
                        cout<<2;
                        
                    }
                    cout<<3<<endl;
                    // cout<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
    }
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
        // cout<<endl;
    }
}