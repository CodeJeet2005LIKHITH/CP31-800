/*                                   || श्री राम समर्थ ||
                                 ||  जय जय रघुवीर समर्थ  ||
*/
// Dont make the question over Complicated

#include<bits/stdc++.h>
using namespace std;
void solve(){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
 
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int a=__gcd(arr[i],arr[j]);
                mini=min(mini,a);
                if(mini<=2) break;
            }
        }
 
        if(mini>2) cout<<"No";
        else cout<<"Yes";
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
        cout<<endl;
    }
}