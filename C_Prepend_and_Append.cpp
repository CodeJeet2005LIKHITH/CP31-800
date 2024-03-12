//  Two pointer approach
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string number;
    cin>>number;
    int start = 0;
    int end = n-1;
    while(start <= end ){
        if(number[start] != number[end]){
            start++;
            end--;
        }
        else{
            break;
        }
    }
    cout<<end-start+1;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
        cout<<endl;
    }
}