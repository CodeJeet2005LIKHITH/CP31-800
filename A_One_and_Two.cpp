// Ya tho 2 nahi hona chahiya agar hoga woh 1's se jyaada hi hona chahiye
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n,0);
    int tp = 0;
    int op = 0;
    int sum = 0;
    for(int i=0; i < n; i++){
        cin>>arr[i];
        if(arr[i] == 2){
            tp++;
            sum+=2;
        }
        else op++;
    }
    // cout<<sum;
    if(!tp)cout<<1;
    else if(tp%2 == 1)cout<<-1;
    else{
        int target = 0;
        for(int i=0; i < n; i++){
            if(arr[i] == 2){
                target += 2;
            }
            if(target == sum/2){
                cout<<i+1;
                break;
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