#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        long long arr[3];
        long long sum = 0;
        for(int i=0; i < 3; i++){
            cin>>arr[i];
            sum += arr[i];
        }
        if(sum%2 != 0)cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
}