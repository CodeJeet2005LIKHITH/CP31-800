#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0; i < n; i++)cin>>arr[i];
        // You need find the max distance between at any two points
        // =>Distance between origin and the first coordinate
        // =>Distance in between two gas stations*2 Because there is no gas station at x, You need gas for both fwd and bwd
        // =>Distance between the last gas station and the end point
        int disfirst = arr[0]-0;
        int dislast = x-arr[n-1];
        int dismid = 0;
        for(int i=0; i < n-1; i++)dismid = max(dismid,arr[i+1]-arr[i]);
        cout<<max(disfirst,max(2*dislast,dismid))<<endl;
    }
}
