#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n,0);
    for(int i=0; i < n; i++)cin>>arr[i];
    // we know if we the array is in descending order there is a maximum possibiliy that array is a beautiful array
    sort(arr.rbegin(),arr.rend());
    // checking if all the elements in the array are same
    if(arr[0] == arr[n-1])cout<<"NO";
    else{
        cout<<"YES"<<endl;
        int x = 0;
        if(arr[0] == arr[1]){
            while(x < n && arr[x] == arr[0])x++;
            swap(arr[x],arr[0]);
        }
        for(auto it: arr)cout<<it<<" ";
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