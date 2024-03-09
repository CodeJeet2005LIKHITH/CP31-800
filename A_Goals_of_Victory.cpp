#include<bits/stdc++.h>
using namespace std;
int main(){
    // Net score will be 0;
    // automatically we need to find -(sum of all given things)
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int arr[n-1];
        int sum = 0;
        for(int i=0; i < n-1; i++){
            cin>>arr[i];
            sum += arr[i];
            
        }
        cout<<-sum<<endl;
    }
}