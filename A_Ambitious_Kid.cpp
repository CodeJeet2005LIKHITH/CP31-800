#include<bits/stdc++.h>
using namespace std;
int main(){
    // Convert everything in the array to positive
    int n;
    cin>>n;
    vector<int>arr(n,0);
    for(int i=0; i < n; i++){
        cin>>arr[i];
        if(arr[i] < 0)arr[i] = -1*arr[i];
    }
    sort(arr.begin(),arr.end());
    cout<<arr[0]<<endl;
}