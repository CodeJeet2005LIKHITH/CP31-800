#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    // intution: see at the end of the day you can do successful swapping and achieve a sorted array
    // when you have first index value as the least possible 
    // According to the question the least possible one is 1
    // so if arr[0] == 1 then you can swap and get a sorted one
    while(tc--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i < n; i++)cin>>arr[i];
        if(arr[0] == 1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}